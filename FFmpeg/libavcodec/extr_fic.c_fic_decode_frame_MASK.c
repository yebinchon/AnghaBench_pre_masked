
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;


typedef int uint8_t ;
struct TYPE_22__ {int* src; unsigned int src_size; int slice_h; int y_off; scalar_t__ p_frame; } ;
struct TYPE_21__ {int width; int height; int (* execute ) (TYPE_3__*,int ,TYPE_5__*,int *,int,int) ;TYPE_1__* priv_data; } ;
struct TYPE_20__ {int* data; int size; } ;
struct TYPE_19__ {int skip_cursor; int slice_h; int aligned_height; int aligned_width; TYPE_11__* final_frame; int cursor_buf; TYPE_11__* frame; TYPE_5__* slice_data; int slice_data_size; int qmat; } ;
struct TYPE_18__ {int key_frame; int pict_type; } ;
typedef TYPE_1__ FICContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVCodecContext ;


 int AVERROR (int ) ;
 int AVERROR_INVALIDDATA ;
 int AV_LOG_DEBUG ;
 int AV_LOG_ERROR ;
 int AV_LOG_WARNING ;
 int AV_PICTURE_TYPE_I ;
 int AV_PICTURE_TYPE_P ;
 int AV_RB24 (int*) ;
 unsigned int AV_RB32 (int*) ;
 int AV_RL16 (int*) ;
 int CURSOR_OFFSET ;
 int ENOMEM ;
 void* FFALIGN (int,int) ;
 int FIC_HEADER_SIZE ;
 int av_fast_malloc (TYPE_5__**,int *,int) ;
 TYPE_11__* av_frame_clone (TYPE_11__*) ;
 int av_frame_free (TYPE_11__**) ;
 int av_frame_ref (void*,TYPE_11__*) ;
 int av_log (TYPE_3__*,int ,char*,...) ;
 int ff_reget_buffer (TYPE_3__*,TYPE_11__*,int ) ;
 int fic_decode_slice ;
 int fic_draw_cursor (TYPE_3__*,int,int) ;
 int fic_header ;
 int fic_qmat_hq ;
 int fic_qmat_lq ;
 scalar_t__ memcmp (int*,int ,int) ;
 int memcpy (int ,int*,int) ;
 int memset (TYPE_5__*,int ,int) ;
 int stub1 (TYPE_3__*,int ,TYPE_5__*,int *,int,int) ;

__attribute__((used)) static int fic_decode_frame(AVCodecContext *avctx, void *data,
                            int *got_frame, AVPacket *avpkt)
{
    FICContext *ctx = avctx->priv_data;
    uint8_t *src = avpkt->data;
    int ret;
    int slice, nslices;
    int msize;
    int tsize;
    int cur_x, cur_y;
    int skip_cursor = ctx->skip_cursor;
    uint8_t *sdata;

    if ((ret = ff_reget_buffer(avctx, ctx->frame, 0)) < 0)
        return ret;


    if (avpkt->size < FIC_HEADER_SIZE + 4) {
        av_log(avctx, AV_LOG_ERROR, "Frame data is too small.\n");
        return AVERROR_INVALIDDATA;
    }


    if (memcmp(src, fic_header, 7))
        av_log(avctx, AV_LOG_WARNING, "Invalid FIC Header.\n");


    if (src[17]) {
        if (!ctx->final_frame) {
            av_log(avctx, AV_LOG_WARNING, "Initial frame is skipped\n");
            return AVERROR_INVALIDDATA;
        }
        goto skip;
    }

    nslices = src[13];
    if (!nslices) {
        av_log(avctx, AV_LOG_ERROR, "Zero slices found.\n");
        return AVERROR_INVALIDDATA;
    }


    ctx->qmat = src[23] ? fic_qmat_hq : fic_qmat_lq;


    tsize = AV_RB24(src + 24);
    if (tsize > avpkt->size - FIC_HEADER_SIZE) {
        av_log(avctx, AV_LOG_ERROR,
               "Packet is too small to contain cursor (%d vs %d bytes).\n",
               tsize, avpkt->size - FIC_HEADER_SIZE);
        return AVERROR_INVALIDDATA;
    }

    if (!tsize || !AV_RL16(src + 37) || !AV_RL16(src + 39))
        skip_cursor = 1;

    if (!skip_cursor && tsize < 32) {
        av_log(avctx, AV_LOG_WARNING,
               "Cursor data too small. Skipping cursor.\n");
        skip_cursor = 1;
    }


    cur_x = AV_RL16(src + 33);
    cur_y = AV_RL16(src + 35);
    if (!skip_cursor && (cur_x > avctx->width || cur_y > avctx->height)) {
        av_log(avctx, AV_LOG_DEBUG,
               "Invalid cursor position: (%d,%d). Skipping cursor.\n",
               cur_x, cur_y);
        skip_cursor = 1;
    }

    if (!skip_cursor && (AV_RL16(src + 37) != 32 || AV_RL16(src + 39) != 32)) {
        av_log(avctx, AV_LOG_WARNING,
               "Invalid cursor size. Skipping cursor.\n");
        skip_cursor = 1;
    }

    if (!skip_cursor && avpkt->size < CURSOR_OFFSET + sizeof(ctx->cursor_buf)) {
        skip_cursor = 1;
    }


    ctx->slice_h = 16 * (ctx->aligned_height >> 4) / nslices;
    if (ctx->slice_h % 16)
        ctx->slice_h = FFALIGN(ctx->slice_h - 16, 16);


    sdata = src + tsize + FIC_HEADER_SIZE + 4 * nslices;
    msize = avpkt->size - nslices * 4 - tsize - FIC_HEADER_SIZE;

    if (msize <= ctx->aligned_width/8 * (ctx->aligned_height/8) / 8) {
        av_log(avctx, AV_LOG_ERROR, "Not enough frame data to decode.\n");
        return AVERROR_INVALIDDATA;
    }


    av_fast_malloc(&ctx->slice_data, &ctx->slice_data_size,
                   nslices * sizeof(ctx->slice_data[0]));
    if (!ctx->slice_data_size) {
        av_log(avctx, AV_LOG_ERROR, "Could not allocate slice data.\n");
        return AVERROR(ENOMEM);
    }
    memset(ctx->slice_data, 0, nslices * sizeof(ctx->slice_data[0]));

    for (slice = 0; slice < nslices; slice++) {
        unsigned slice_off = AV_RB32(src + tsize + FIC_HEADER_SIZE + slice * 4);
        unsigned slice_size;
        int y_off = ctx->slice_h * slice;
        int slice_h = ctx->slice_h;





        if (slice == nslices - 1) {
            slice_size = msize;
            slice_h = FFALIGN(avctx->height - ctx->slice_h * (nslices - 1), 16);
        } else {
            slice_size = AV_RB32(src + tsize + FIC_HEADER_SIZE + slice * 4 + 4);
            if (slice_size < slice_off)
                return AVERROR_INVALIDDATA;
        }

        if (slice_size < slice_off || slice_size > msize)
            continue;

        slice_size -= slice_off;

        ctx->slice_data[slice].src = sdata + slice_off;
        ctx->slice_data[slice].src_size = slice_size;
        ctx->slice_data[slice].slice_h = slice_h;
        ctx->slice_data[slice].y_off = y_off;
    }

    if ((ret = avctx->execute(avctx, fic_decode_slice, ctx->slice_data,
                              ((void*)0), nslices, sizeof(ctx->slice_data[0]))) < 0)
        return ret;

    ctx->frame->key_frame = 1;
    ctx->frame->pict_type = AV_PICTURE_TYPE_I;
    for (slice = 0; slice < nslices; slice++) {
        if (ctx->slice_data[slice].p_frame) {
            ctx->frame->key_frame = 0;
            ctx->frame->pict_type = AV_PICTURE_TYPE_P;
            break;
        }
    }
    av_frame_free(&ctx->final_frame);
    ctx->final_frame = av_frame_clone(ctx->frame);
    if (!ctx->final_frame) {
        av_log(avctx, AV_LOG_ERROR, "Could not clone frame buffer.\n");
        return AVERROR(ENOMEM);
    }


    if ((ret = ff_reget_buffer(avctx, ctx->final_frame, 0)) < 0) {
        av_log(avctx, AV_LOG_ERROR, "Could not make frame writable.\n");
        return ret;
    }


    if (!skip_cursor) {
        memcpy(ctx->cursor_buf, src + CURSOR_OFFSET, sizeof(ctx->cursor_buf));
        fic_draw_cursor(avctx, cur_x, cur_y);
    }

skip:
    *got_frame = 1;
    if ((ret = av_frame_ref(data, ctx->final_frame)) < 0)
        return ret;

    return avpkt->size;
}
