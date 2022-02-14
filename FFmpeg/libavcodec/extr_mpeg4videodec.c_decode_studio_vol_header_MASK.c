
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {void* den; void* num; } ;
struct TYPE_12__ {int bits_per_raw_sample; TYPE_3__ sample_aspect_ratio; int pix_fmt; } ;
struct TYPE_9__ {scalar_t__ chroma_format; int width; int height; int context_reinit; size_t aspect_ratio_info; void* mpeg_quant; void* low_delay; TYPE_6__* avctx; } ;
struct TYPE_10__ {void* shape; void* rgb; TYPE_1__ m; } ;
typedef TYPE_1__ MpegEncContext ;
typedef TYPE_2__ Mpeg4DecContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 void* VAR_9 ;
 int FUNC_0 (TYPE_6__*,int ,char*) ;
 int FUNC_1 (TYPE_6__*,char*,int) ;
 int FUNC_2 (TYPE_6__*,int *,char*) ;
 int FUNC_3 (TYPE_1__*,int *,int) ;
 TYPE_3__* VAR_10 ;
 void* FUNC_4 (int *,int) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(Mpeg4DecContext *VAR_11, GetBitContext *VAR_12)
{
    MpegEncContext *VAR_13 = &VAR_11->m;
    int VAR_14, VAR_15;
    int VAR_16;



            FUNC_7(VAR_12, 4);
            VAR_11->shape = FUNC_4(VAR_12, 2);
            FUNC_7(VAR_12, 4);
            FUNC_8(VAR_12);
            if (VAR_11->shape != VAR_6) {
                VAR_11->rgb = FUNC_5(VAR_12);
                VAR_13->chroma_format = FUNC_4(VAR_12, 2);
                if (!VAR_13->chroma_format) {
                    FUNC_0(VAR_13->avctx, VAR_2, "illegal chroma format\n");
                    return VAR_0;
                }

                VAR_16 = FUNC_4(VAR_12, 4);
                if (VAR_16 == 10) {
                    if (VAR_11->rgb) {
                        VAR_13->avctx->pix_fmt = VAR_3;
                    }
                    else {
                        VAR_13->avctx->pix_fmt = VAR_13->chroma_format == VAR_7 ? VAR_4 : VAR_5;
                    }
                }
                else {
                    FUNC_1(VAR_13->avctx, "MPEG-4 Studio profile bit-depth %u", VAR_16);
                    return VAR_1;
                }
                VAR_13->avctx->bits_per_raw_sample = VAR_16;
            }
            if (VAR_11->shape == VAR_9) {
                FUNC_2(VAR_13->avctx, VAR_12, "before video_object_layer_width");
                VAR_14 = FUNC_4(VAR_12, 14);
                FUNC_2(VAR_13->avctx, VAR_12, "before video_object_layer_height");
                VAR_15 = FUNC_4(VAR_12, 14);
                FUNC_2(VAR_13->avctx, VAR_12, "after video_object_layer_height");


                if (VAR_14 && VAR_15) {
                    if (VAR_13->width && VAR_13->height &&
                        (VAR_13->width != VAR_14 || VAR_13->height != VAR_15))
                        VAR_13->context_reinit = 1;
                    VAR_13->width = VAR_14;
                    VAR_13->height = VAR_15;
                }
            }
            VAR_13->aspect_ratio_info = FUNC_4(VAR_12, 4);
            if (VAR_13->aspect_ratio_info == VAR_8) {
                VAR_13->avctx->sample_aspect_ratio.num = FUNC_4(VAR_12, 8);
                VAR_13->avctx->sample_aspect_ratio.den = FUNC_4(VAR_12, 8);
            } else {
                VAR_13->avctx->sample_aspect_ratio = VAR_10[VAR_13->aspect_ratio_info];
            }
            FUNC_7(VAR_12, 4);
            FUNC_7(VAR_12, 15);
            FUNC_2(VAR_13->avctx, VAR_12, "after first_half_bit_rate");
            FUNC_7(VAR_12, 15);
            FUNC_2(VAR_13->avctx, VAR_12, "after latter_half_bit_rate");
            FUNC_7(VAR_12, 15);
            FUNC_2(VAR_13->avctx, VAR_12, "after first_half_vbv_buffer_size");
            FUNC_7(VAR_12, 3);
            FUNC_7(VAR_12, 11);
            FUNC_2(VAR_13->avctx, VAR_12, "after first_half_vbv_buffer_size");
            FUNC_7(VAR_12, 15);
            FUNC_2(VAR_13->avctx, VAR_12, "after latter_half_vbv_occupancy");
            VAR_13->low_delay = FUNC_5(VAR_12);
            VAR_13->mpeg_quant = FUNC_5(VAR_12);

            FUNC_6(VAR_12);
            FUNC_3(VAR_13, VAR_12, 2);

    return 0;
}
