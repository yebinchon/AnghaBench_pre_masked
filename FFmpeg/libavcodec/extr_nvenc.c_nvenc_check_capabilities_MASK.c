
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int width; int height; int max_b_frames; int flags; scalar_t__ refs; TYPE_1__* priv_data; } ;
struct TYPE_7__ {scalar_t__ preset; scalar_t__ rc_lookahead; scalar_t__ temporal_aq; scalar_t__ weighted_pred; scalar_t__ coder; scalar_t__ b_ref_mode; void* support_dyn_bitrate; int data_pix_fmt; } ;
typedef TYPE_1__ NvencContext ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_3 (TYPE_2__*,int ,char*,...) ;
 void* FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_22)
{
    NvencContext *VAR_23 = VAR_22->priv_data;
    int VAR_24;

    VAR_24 = FUNC_5(VAR_22);
    if (VAR_24 < 0) {
        FUNC_3(VAR_22, VAR_1, "Codec not supported\n");
        return VAR_24;
    }

    VAR_24 = FUNC_4(VAR_22, VAR_17);
    if (FUNC_2(VAR_23->data_pix_fmt) && VAR_24 <= 0) {
        FUNC_3(VAR_22, VAR_1, "YUV444P not supported\n");
        return FUNC_0(VAR_2);
    }

    VAR_24 = FUNC_4(VAR_22, VAR_13);
    if (VAR_23->preset >= VAR_21 && VAR_24 <= 0) {
        FUNC_3(VAR_22, VAR_1, "Lossless encoding not supported\n");
        return FUNC_0(VAR_2);
    }

    VAR_24 = FUNC_4(VAR_22, VAR_18);
    if (VAR_24 < VAR_22->width) {
        FUNC_3(VAR_22, VAR_1, "Width %d exceeds %d\n",
               VAR_22->width, VAR_24);
        return FUNC_0(VAR_2);
    }

    VAR_24 = FUNC_4(VAR_22, VAR_5);
    if (VAR_24 < VAR_22->height) {
        FUNC_3(VAR_22, VAR_1, "Height %d exceeds %d\n",
               VAR_22->height, VAR_24);
        return FUNC_0(VAR_2);
    }

    VAR_24 = FUNC_4(VAR_22, VAR_6);
    if (VAR_24 < VAR_22->max_b_frames) {
        FUNC_3(VAR_22, VAR_1, "Max B-frames %d exceed %d\n",
               VAR_22->max_b_frames, VAR_24);

        return FUNC_0(VAR_2);
    }

    VAR_24 = FUNC_4(VAR_22, VAR_11);
    if (VAR_24 < 1 && VAR_22->flags & VAR_0) {
        FUNC_3(VAR_22, VAR_1,
               "Interlaced encoding is not supported. Supported level: %d\n",
               VAR_24);
        return FUNC_0(VAR_2);
    }

    VAR_24 = FUNC_4(VAR_22, VAR_7);
    if (FUNC_1(VAR_23->data_pix_fmt) && VAR_24 <= 0) {
        FUNC_3(VAR_22, VAR_1, "10 bit encode not supported\n");
        return FUNC_0(VAR_2);
    }

    VAR_24 = FUNC_4(VAR_22, VAR_12);
    if (VAR_23->rc_lookahead > 0 && VAR_24 <= 0) {
        FUNC_3(VAR_22, VAR_1, "RC lookahead not supported\n");
        return FUNC_0(VAR_2);
    }

    VAR_24 = FUNC_4(VAR_22, VAR_15);
    if (VAR_23->temporal_aq > 0 && VAR_24 <= 0) {
        FUNC_3(VAR_22, VAR_1, "Temporal AQ not supported\n");
        return FUNC_0(VAR_2);
    }

    VAR_24 = FUNC_4(VAR_22, VAR_16);
    if (VAR_23->weighted_pred > 0 && VAR_24 <= 0) {
        FUNC_3 (VAR_22, VAR_1, "Weighted Prediction not supported\n");
        return FUNC_0(VAR_2);
    }

    VAR_24 = FUNC_4(VAR_22, VAR_9);
    if (VAR_23->coder == VAR_19 && VAR_24 <= 0) {
        FUNC_3(VAR_22, VAR_1, "CABAC entropy coding not supported\n");
        return FUNC_0(VAR_2);
    }
    if (VAR_23->b_ref_mode != 0) {
        FUNC_3(VAR_22, VAR_1, "B frames as references need SDK 8.1 at build time\n");
        return FUNC_0(VAR_2);
    }
    if(VAR_22->refs != 0) {
        FUNC_3(VAR_22, VAR_1, "Multiple reference frames need SDK 9.1 at build time\n");
        return FUNC_0(VAR_2);
    }


    VAR_23->support_dyn_bitrate = FUNC_4(VAR_22, VAR_10);

    return 0;
}
