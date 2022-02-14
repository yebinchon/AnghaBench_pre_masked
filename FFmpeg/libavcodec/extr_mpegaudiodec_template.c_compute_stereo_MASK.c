
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int scalefac_compress; int short_start; int long_end; int* scale_factors; scalar_t__* sb_hybrid; } ;
struct TYPE_8__ {int mode_ext; size_t sample_rate_index; TYPE_1__* fdsp; int lsf; } ;
struct TYPE_7__ {int (* butterflies_float ) (scalar_t__*,scalar_t__*,int) ;} ;
typedef scalar_t__ SUINTFLOAT ;
typedef TYPE_2__ MPADecodeContext ;
typedef scalar_t__ INTFLOAT ;
typedef TYPE_3__ GranuleDef ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int** VAR_4 ;
 int** VAR_5 ;
 scalar_t__** VAR_6 ;
 scalar_t__*** VAR_7 ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static void FUNC_2(MPADecodeContext *VAR_8, GranuleDef *VAR_9, GranuleDef *VAR_10)
{
    int VAR_11, VAR_12, VAR_13, VAR_14;
    int VAR_15, VAR_16, VAR_17, VAR_18;
    INTFLOAT (*VAR_19)[16], *VAR_20, *VAR_21, VAR_22, VAR_23;
    SUINTFLOAT VAR_24, VAR_25;
    int VAR_26[3];


    if (VAR_8->mode_ext & VAR_2) {
        if (!VAR_8->lsf) {
            VAR_19 = VAR_6;
            VAR_15 = 7;
        } else {
            VAR_19 = VAR_7[VAR_10->scalefac_compress & 1];
            VAR_15 = 16;
        }

        VAR_20 = VAR_9->sb_hybrid + 576;
        VAR_21 = VAR_10->sb_hybrid + 576;

        VAR_26[0] = 0;
        VAR_26[1] = 0;
        VAR_26[2] = 0;
        VAR_13 = (13 - VAR_10->short_start) * 3 + VAR_10->long_end - 3;
        for (VAR_11 = 12; VAR_11 >= VAR_10->short_start; VAR_11--) {

            if (VAR_11 != 11)
                VAR_13 -= 3;
            VAR_17 = VAR_5[VAR_8->sample_rate_index][VAR_11];
            for (VAR_14 = 2; VAR_14 >= 0; VAR_14--) {
                VAR_20 -= VAR_17;
                VAR_21 -= VAR_17;
                if (!VAR_26[VAR_14]) {

                    for (VAR_12 = 0; VAR_12 < VAR_17; VAR_12++) {
                        if (VAR_21[VAR_12] != 0) {
                            VAR_26[VAR_14] = 1;
                            goto found1;
                        }
                    }
                    VAR_16 = VAR_10->scale_factors[VAR_13 + VAR_14];
                    if (VAR_16 >= VAR_15)
                        goto found1;

                    VAR_22 = VAR_19[0][VAR_16];
                    VAR_23 = VAR_19[1][VAR_16];
                    for (VAR_12 = 0; VAR_12 < VAR_17; VAR_12++) {
                        VAR_24 = VAR_20[VAR_12];
                        VAR_20[VAR_12] = FUNC_0(VAR_24, VAR_22, VAR_0);
                        VAR_21[VAR_12] = FUNC_0(VAR_24, VAR_23, VAR_0);
                    }
                } else {
found1:
                    if (VAR_8->mode_ext & VAR_3) {


                        for (VAR_12 = 0; VAR_12 < VAR_17; VAR_12++) {
                            VAR_24 = VAR_20[VAR_12];
                            VAR_25 = VAR_21[VAR_12];
                            VAR_20[VAR_12] = FUNC_0(VAR_24 + VAR_25, VAR_1, VAR_0);
                            VAR_21[VAR_12] = FUNC_0(VAR_24 - VAR_25, VAR_1, VAR_0);
                        }
                    }
                }
            }
        }

        VAR_18 = VAR_26[0] |
                         VAR_26[1] |
                         VAR_26[2];

        for (VAR_11 = VAR_10->long_end - 1;VAR_11 >= 0;VAR_11--) {
            VAR_17 = VAR_4[VAR_8->sample_rate_index][VAR_11];
            VAR_20 -= VAR_17;
            VAR_21 -= VAR_17;

            if (!VAR_18) {
                for (VAR_12 = 0; VAR_12 < VAR_17; VAR_12++) {
                    if (VAR_21[VAR_12] != 0) {
                        VAR_18 = 1;
                        goto found2;
                    }
                }

                VAR_13 = (VAR_11 == 21) ? 20 : VAR_11;
                VAR_16 = VAR_10->scale_factors[VAR_13];
                if (VAR_16 >= VAR_15)
                    goto found2;
                VAR_22 = VAR_19[0][VAR_16];
                VAR_23 = VAR_19[1][VAR_16];
                for (VAR_12 = 0; VAR_12 < VAR_17; VAR_12++) {
                    VAR_24 = VAR_20[VAR_12];
                    VAR_20[VAR_12] = FUNC_0(VAR_24, VAR_22, VAR_0);
                    VAR_21[VAR_12] = FUNC_0(VAR_24, VAR_23, VAR_0);
                }
            } else {
found2:
                if (VAR_8->mode_ext & VAR_3) {


                    for (VAR_12 = 0; VAR_12 < VAR_17; VAR_12++) {
                        VAR_24 = VAR_20[VAR_12];
                        VAR_25 = VAR_21[VAR_12];
                        VAR_20[VAR_12] = FUNC_0(VAR_24 + VAR_25, VAR_1, VAR_0);
                        VAR_21[VAR_12] = FUNC_0(VAR_24 - VAR_25, VAR_1, VAR_0);
                    }
                }
            }
        }
    } else if (VAR_8->mode_ext & VAR_3) {






        VAR_20 = VAR_9->sb_hybrid;
        VAR_21 = VAR_10->sb_hybrid;
        for (VAR_11 = 0; VAR_11 < 576; VAR_11++) {
            VAR_24 = VAR_20[VAR_11];
            VAR_25 = VAR_21[VAR_11];
            VAR_20[VAR_11] = VAR_24 + VAR_25;
            VAR_21[VAR_11] = VAR_24 - VAR_25;
        }

    }
}
