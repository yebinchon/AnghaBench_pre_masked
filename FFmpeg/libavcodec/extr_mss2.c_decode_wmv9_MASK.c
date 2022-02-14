
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_18__ {int (* mss2_blit_wmv9 ) (scalar_t__,int,int ,scalar_t__,int ,int ,scalar_t__,int,int) ;int (* mss2_blit_wmv9_masked ) (scalar_t__,int,int,scalar_t__,int,int ,scalar_t__,int ,int ,scalar_t__,int,int) ;int (* upsample_plane ) (int ,scalar_t__,int,int) ;} ;
struct TYPE_17__ {TYPE_7__* f; } ;
struct TYPE_20__ {int loop_filter; scalar_t__ pict_type; int end_mb_y; int mb_width; int mb_height; int avctx; TYPE_1__ current_picture; int er; int gb; } ;
struct TYPE_21__ {int rgb_stride; int pal_stride; scalar_t__ rgb_pic; scalar_t__ pal_pic; } ;
struct TYPE_19__ {int bits; int end_mb_x; int respic; TYPE_2__ dsp; TYPE_4__ s; TYPE_6__ c; } ;
typedef TYPE_3__ VC1Context ;
struct TYPE_23__ {scalar_t__ skip_loop_filter; void* pix_fmt; TYPE_3__* priv_data; } ;
struct TYPE_22__ {scalar_t__* linesize; int * data; } ;
typedef TYPE_4__ MpegEncContext ;
typedef TYPE_3__ MSS2Context ;
typedef TYPE_6__ MSS12Context ;
typedef TYPE_7__ AVFrame ;
typedef TYPE_8__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,char*,...) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_8__*) ;
 int FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_3__*,int *) ;
 int FUNC_10 (int *,int const*,int) ;
 int FUNC_11 (int ,scalar_t__,int,int) ;
 int FUNC_12 (int ,scalar_t__,int,int) ;
 int FUNC_13 (int ,scalar_t__,int,int) ;
 int FUNC_14 (scalar_t__,int,int,scalar_t__,int,int ,scalar_t__,int ,int ,scalar_t__,int,int) ;
 int FUNC_15 (scalar_t__,int,int ,scalar_t__,int ,int ,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_16(AVCodecContext *VAR_7, const uint8_t *VAR_8, int VAR_9,
                       int VAR_10, int VAR_11, int VAR_12, int VAR_13, int VAR_14)
{
    MSS2Context *VAR_15 = VAR_7->priv_data;
    MSS12Context *VAR_16 = &VAR_15->c;
    VC1Context *VAR_17 = VAR_7->priv_data;
    MpegEncContext *VAR_18 = &VAR_17->s;
    AVFrame *VAR_19;
    int VAR_20;

    FUNC_5(VAR_7);

    if ((VAR_20 = FUNC_10(&VAR_18->gb, VAR_8, VAR_9)) < 0)
        return VAR_20;

    VAR_18->loop_filter = VAR_7->skip_loop_filter < VAR_0;

    if (FUNC_9(VAR_17, &VAR_18->gb) < 0) {
        FUNC_1(VAR_17->s.avctx, VAR_2, "header error\n");
        return VAR_1;
    }

    if (VAR_18->pict_type != VAR_4) {
        FUNC_1(VAR_17->s.avctx, VAR_2, "expected I-frame\n");
        return VAR_1;
    }

    VAR_7->pix_fmt = VAR_6;

    if ((VAR_20 = FUNC_7(VAR_18, VAR_7)) < 0) {
        FUNC_1(VAR_17->s.avctx, VAR_2, "ff_mpv_frame_start error\n");
        VAR_7->pix_fmt = VAR_5;
        return VAR_20;
    }

    FUNC_4(VAR_18);

    VAR_17->bits = VAR_9 * 8;

    VAR_17->end_mb_x = (VAR_12 + 15) >> 4;
    VAR_18->end_mb_y = (VAR_13 + 15) >> 4;
    if (VAR_17->respic & 1)
        VAR_17->end_mb_x = (VAR_17->end_mb_x + 1) >> 1;
    if (VAR_17->respic & 2)
        VAR_18->end_mb_y = (VAR_18->end_mb_y + 1) >> 1;

    FUNC_8(VAR_17);

    if (VAR_17->end_mb_x == VAR_18->mb_width && VAR_18->end_mb_y == VAR_18->mb_height) {
        FUNC_3(&VAR_18->er);
    } else {
        FUNC_1(VAR_17->s.avctx, VAR_3,
               "disabling error correction due to block count mismatch %dx%d != %dx%d\n",
               VAR_17->end_mb_x, VAR_18->end_mb_y, VAR_18->mb_width, VAR_18->mb_height);
    }

    FUNC_6(VAR_18);

    VAR_19 = VAR_18->current_picture.f;

    if (VAR_17->respic == 3) {
        VAR_15->dsp.upsample_plane(VAR_19->data[0], VAR_19->linesize[0], VAR_12, VAR_13);
        VAR_15->dsp.upsample_plane(VAR_19->data[1], VAR_19->linesize[1], (VAR_12+1) >> 1, (VAR_13+1) >> 1);
        VAR_15->dsp.upsample_plane(VAR_19->data[2], VAR_19->linesize[2], (VAR_12+1) >> 1, (VAR_13+1) >> 1);
    } else if (VAR_17->respic)
        FUNC_2(VAR_17->s.avctx,
                              "Asymmetric WMV9 rectangle subsampling");

    FUNC_0(VAR_19->linesize[1] == VAR_19->linesize[2]);

    if (VAR_14 != -1)
        VAR_15->dsp.mss2_blit_wmv9_masked(VAR_16->rgb_pic + VAR_11 * VAR_16->rgb_stride + VAR_10 * 3,
                                       VAR_16->rgb_stride, VAR_14,
                                       VAR_16->pal_pic + VAR_11 * VAR_16->pal_stride + VAR_10,
                                       VAR_16->pal_stride,
                                       VAR_19->data[0], VAR_19->linesize[0],
                                       VAR_19->data[1], VAR_19->data[2], VAR_19->linesize[1],
                                       VAR_12, VAR_13);
    else
        VAR_15->dsp.mss2_blit_wmv9(VAR_16->rgb_pic + VAR_11 * VAR_16->rgb_stride + VAR_10 * 3,
                                VAR_16->rgb_stride,
                                VAR_19->data[0], VAR_19->linesize[0],
                                VAR_19->data[1], VAR_19->data[2], VAR_19->linesize[1],
                                VAR_12, VAR_13);

    VAR_7->pix_fmt = VAR_5;

    return 0;
}
