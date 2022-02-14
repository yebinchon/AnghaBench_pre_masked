
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_15__ {int num; int den; } ;
struct TYPE_19__ {int ticks_per_frame; int bits_per_raw_sample; int active_thread_type; int codec_id; TYPE_2__ framerate; int pix_fmt; } ;
struct TYPE_14__ {TYPE_3__* sps; } ;
struct TYPE_18__ {unsigned int x264_build; int prev_interlaced_frame; int cur_bit_depth_luma; int pixel_shift; int bit_depth_luma; int nb_slice_ctx; int mb_stride; int context_initialized; TYPE_8__* avctx; scalar_t__* mvd_table; scalar_t__ intra4x4_pred_mode; TYPE_4__* slice_ctx; int vdsp; int hpc; int h264qpel; int h264chroma; int h264dsp; int chroma_format_idc; int cur_chroma_format_idc; scalar_t__ first_field; int chroma_y_shift; int chroma_x_shift; TYPE_1__ ps; } ;
struct TYPE_17__ {scalar_t__* mvd_table; scalar_t__ intra4x4_pred_mode; TYPE_5__* h264; } ;
struct TYPE_16__ {int time_scale; int num_units_in_tick; int bit_depth_luma; int chroma_format_idc; int bit_depth_chroma; scalar_t__ timing_info_present_flag; int sar; } ;
typedef TYPE_3__ SPS ;
typedef TYPE_4__ H264SliceContext ;
typedef TYPE_5__ H264Context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_8__*,int ,char*,...) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int *,int *,int,int,int) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int *,int ,int,int ) ;
 int FUNC_6 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (TYPE_8__*,int ) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_13(H264Context *VAR_4)
{
    const SPS *VAR_5 = VAR_4->ps.sps;
    int VAR_6, VAR_7;

    FUNC_10(VAR_4->avctx, VAR_5->sar);
    FUNC_1(VAR_4->avctx->pix_fmt,
                                     &VAR_4->chroma_x_shift, &VAR_4->chroma_y_shift);

    if (VAR_5->timing_info_present_flag) {
        int64_t VAR_8 = VAR_5->time_scale;
        if (VAR_4->x264_build < 44U)
            VAR_8 *= 2;
        FUNC_2(&VAR_4->avctx->framerate.den, &VAR_4->avctx->framerate.num,
                  VAR_5->num_units_in_tick * VAR_4->avctx->ticks_per_frame, VAR_8, 1 << 30);
    }

    FUNC_4(VAR_4);

    VAR_4->first_field = 0;
    VAR_4->prev_interlaced_frame = 1;

    FUNC_12(VAR_4);
    VAR_7 = FUNC_3(VAR_4);
    if (VAR_7 < 0) {
        FUNC_0(VAR_4->avctx, VAR_1, "Could not allocate memory\n");
        goto fail;
    }

    if (VAR_5->bit_depth_luma < 8 || VAR_5->bit_depth_luma > 14 ||
        VAR_5->bit_depth_luma == 11 || VAR_5->bit_depth_luma == 13
    ) {
        FUNC_0(VAR_4->avctx, VAR_1, "Unsupported bit depth %d\n",
               VAR_5->bit_depth_luma);
        VAR_7 = VAR_0;
        goto fail;
    }

    VAR_4->cur_bit_depth_luma =
    VAR_4->avctx->bits_per_raw_sample = VAR_5->bit_depth_luma;
    VAR_4->cur_chroma_format_idc = VAR_5->chroma_format_idc;
    VAR_4->pixel_shift = VAR_5->bit_depth_luma > 8;
    VAR_4->chroma_format_idc = VAR_5->chroma_format_idc;
    VAR_4->bit_depth_luma = VAR_5->bit_depth_luma;

    FUNC_8(&VAR_4->h264dsp, VAR_5->bit_depth_luma,
                    VAR_5->chroma_format_idc);
    FUNC_7(&VAR_4->h264chroma, VAR_5->bit_depth_chroma);
    FUNC_9(&VAR_4->h264qpel, VAR_5->bit_depth_luma);
    FUNC_5(&VAR_4->hpc, VAR_4->avctx->codec_id, VAR_5->bit_depth_luma,
                      VAR_5->chroma_format_idc);
    FUNC_11(&VAR_4->vdsp, VAR_5->bit_depth_luma);

    if (!VAR_3 || !(VAR_4->avctx->active_thread_type & VAR_2)) {
        VAR_7 = FUNC_6(VAR_4, &VAR_4->slice_ctx[0]);
        if (VAR_7 < 0) {
            FUNC_0(VAR_4->avctx, VAR_1, "context_init() failed.\n");
            goto fail;
        }
    } else {
        for (VAR_6 = 0; VAR_6 < VAR_4->nb_slice_ctx; VAR_6++) {
            H264SliceContext *VAR_9 = &VAR_4->slice_ctx[VAR_6];

            VAR_9->h264 = VAR_4;
            VAR_9->intra4x4_pred_mode = VAR_4->intra4x4_pred_mode + VAR_6 * 8 * 2 * VAR_4->mb_stride;
            VAR_9->mvd_table[0] = VAR_4->mvd_table[0] + VAR_6 * 8 * 2 * VAR_4->mb_stride;
            VAR_9->mvd_table[1] = VAR_4->mvd_table[1] + VAR_6 * 8 * 2 * VAR_4->mb_stride;

            if ((VAR_7 = FUNC_6(VAR_4, VAR_9)) < 0) {
                FUNC_0(VAR_4->avctx, VAR_1, "context_init() failed.\n");
                goto fail;
            }
        }
    }

    VAR_4->context_initialized = 1;

    return 0;
fail:
    FUNC_4(VAR_4);
    VAR_4->context_initialized = 0;
    return VAR_7;
}
