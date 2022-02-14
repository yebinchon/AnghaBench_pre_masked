
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_5__ {int bits_per_raw_sample; } ;
struct TYPE_4__ {int chroma_y_shift; int chroma_x_shift; int* last_dc; int dct_precision; int intra_dc_precision; TYPE_3__* avctx; int gb; } ;
typedef TYPE_1__ MpegEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,int) ;

__attribute__((used)) static int FUNC_6(MpegEncContext *VAR_2, int16_t VAR_3[256], int VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9 = 0;
    int VAR_10, VAR_11, VAR_12, VAR_13,
        VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
    VAR_8 = 16 >> (VAR_4 ? VAR_2->chroma_y_shift : 0);
    VAR_7 = 16 >> (VAR_4 ? VAR_2->chroma_x_shift : 0);

    VAR_10 = FUNC_3(&VAR_2->gb, VAR_2->avctx->bits_per_raw_sample);
    if (VAR_10 == 0){
        FUNC_2(VAR_2->avctx, VAR_1, "Forbidden block_mean\n");
        return VAR_0;
    }
    VAR_2->last_dc[VAR_4] = VAR_10 * (1 << (VAR_2->dct_precision + VAR_2->intra_dc_precision));

    VAR_11 = FUNC_3(&VAR_2->gb, 4);
    if (VAR_11 == 0) {
        FUNC_2(VAR_2->avctx, VAR_1, "Forbidden rice_parameter\n");
        return VAR_0;
    }

    if (VAR_11 == 15)
        VAR_11 = 0;

    if (VAR_11 > 11) {
        FUNC_2(VAR_2->avctx, VAR_1, "Forbidden rice_parameter\n");
        return VAR_0;
    }

    for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++) {
        VAR_22 = 1 << (VAR_2->avctx->bits_per_raw_sample - 1);
        VAR_16 = 1 << (VAR_2->avctx->bits_per_raw_sample - 1);

        for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
            VAR_15 = VAR_22;
            VAR_17 = VAR_16;

            VAR_12 = FUNC_5(&VAR_2->gb, 1, 12);


            if (VAR_12 == 11)
                VAR_14 = FUNC_3(&VAR_2->gb, VAR_2->avctx->bits_per_raw_sample);
            else {
                if (VAR_12 == 12) {
                    FUNC_2(VAR_2->avctx, VAR_1, "Forbidden rice_prefix_code\n");
                    return VAR_0;
                }
                VAR_13 = FUNC_4(&VAR_2->gb, VAR_11);
                VAR_14 = (VAR_12 << VAR_11) + VAR_13;
            }


            if (VAR_14 & 1)
                VAR_14 = (-1 * VAR_14) >> 1;
            else
                VAR_14 = (VAR_14 >> 1);

            if (VAR_5 != 0)
                VAR_16 = VAR_3[VAR_9-VAR_7];

            VAR_20 = VAR_15 + VAR_16 - VAR_17;
            VAR_18 = FUNC_1(VAR_15, VAR_16);
            if (VAR_20 < VAR_18)
                VAR_20 = VAR_18;

            VAR_19 = FUNC_0(VAR_15, VAR_16);
            if (VAR_20 > VAR_19)
                VAR_20 = VAR_19;

            VAR_21 = (FUNC_1(VAR_18, VAR_17) + FUNC_0(VAR_19, VAR_17)) >> 1;
            if (VAR_21 == VAR_20)
                VAR_21 = VAR_10;

            if (VAR_21 > VAR_20)
                VAR_14 *= -1;

            VAR_3[VAR_9++] = VAR_22 = (VAR_14 + VAR_20) & ((1 << VAR_2->avctx->bits_per_raw_sample) - 1);
        }
    }

    return 0;
}
