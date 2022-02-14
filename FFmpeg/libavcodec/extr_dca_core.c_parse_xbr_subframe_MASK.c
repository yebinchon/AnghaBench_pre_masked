
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
struct TYPE_4__ {int* nsubsubframes; int npcmblocks; int* scale_factor_sel; int*** transition_mode; int avctx; int gb; scalar_t__ sync_ssf; scalar_t__** subband_samples; } ;
typedef TYPE_1__ DCACoreDecoder ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (scalar_t__,int *,int ,int ,int,int) ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_3 (int *,int *,int,int) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int *,int) ;

__attribute__((used)) static int FUNC_7(DCACoreDecoder *VAR_9, int VAR_10, int VAR_11,
                              int *VAR_12, int VAR_13, int VAR_14, int *VAR_15)
{
    int VAR_16[VAR_3];
    int VAR_17[VAR_3][VAR_4];
    int VAR_18[VAR_3];
    int32_t VAR_19[VAR_3][VAR_4][2];
    int VAR_20, VAR_21, VAR_22, VAR_23;


    if (*VAR_15 + VAR_9->nsubsubframes[VAR_14] * VAR_5 > VAR_9->npcmblocks) {
        FUNC_1(VAR_9->avctx, VAR_1, "Subband sample buffer overflow\n");
        return VAR_0;
    }

    if (FUNC_5(&VAR_9->gb) < 0)
        return VAR_0;


    for (VAR_21 = VAR_10; VAR_21 < VAR_11; VAR_21++)
        VAR_16[VAR_21] = FUNC_4(&VAR_9->gb, 2) + 2;


    for (VAR_21 = VAR_10; VAR_21 < VAR_11; VAR_21++) {
        for (VAR_22 = 0; VAR_22 < VAR_12[VAR_21]; VAR_22++) {
            VAR_17[VAR_21][VAR_22] = FUNC_4(&VAR_9->gb, VAR_16[VAR_21]);
            if (VAR_17[VAR_21][VAR_22] > VAR_2) {
                FUNC_1(VAR_9->avctx, VAR_1, "Invalid XBR bit allocation index\n");
                return VAR_0;
            }
        }
    }


    for (VAR_21 = VAR_10; VAR_21 < VAR_11; VAR_21++) {
        VAR_18[VAR_21] = FUNC_4(&VAR_9->gb, 3);
        if (!VAR_18[VAR_21]) {
            FUNC_1(VAR_9->avctx, VAR_1, "Invalid number of bits for XBR scale factor index\n");
            return VAR_0;
        }
    }


    for (VAR_21 = VAR_10; VAR_21 < VAR_11; VAR_21++) {
        const uint32_t *VAR_24;
        int VAR_25;


        if (VAR_9->scale_factor_sel[VAR_21] > 5) {
            VAR_24 = VAR_8;
            VAR_25 = FUNC_0(VAR_8);
        } else {
            VAR_24 = VAR_7;
            VAR_25 = FUNC_0(VAR_7);
        }



        for (VAR_22 = 0; VAR_22 < VAR_12[VAR_21]; VAR_22++) {
            if (VAR_17[VAR_21][VAR_22]) {
                int VAR_26 = FUNC_4(&VAR_9->gb, VAR_18[VAR_21]);
                if (VAR_26 >= VAR_25) {
                    FUNC_1(VAR_9->avctx, VAR_1, "Invalid XBR scale factor index\n");
                    return VAR_0;
                }
                VAR_19[VAR_21][VAR_22][0] = VAR_24[VAR_26];
                if (VAR_13 && VAR_9->transition_mode[VAR_14][VAR_21][VAR_22]) {
                    VAR_26 = FUNC_4(&VAR_9->gb, VAR_18[VAR_21]);
                    if (VAR_26 >= VAR_25) {
                        FUNC_1(VAR_9->avctx, VAR_1, "Invalid XBR scale factor index\n");
                        return VAR_0;
                    }
                    VAR_19[VAR_21][VAR_22][1] = VAR_24[VAR_26];
                }
            }
        }
    }


    for (VAR_20 = 0, VAR_23 = *VAR_15; VAR_20 < VAR_9->nsubsubframes[VAR_14]; VAR_20++) {
        for (VAR_21 = VAR_10; VAR_21 < VAR_11; VAR_21++) {
            if (FUNC_5(&VAR_9->gb) < 0)
                return VAR_0;

            for (VAR_22 = 0; VAR_22 < VAR_12[VAR_21]; VAR_22++) {
                int VAR_27, VAR_28, VAR_29 = VAR_17[VAR_21][VAR_22];
                int32_t VAR_30[VAR_5], VAR_31, VAR_32;


                if (VAR_29 > 7) {

                    FUNC_3(&VAR_9->gb, VAR_30, VAR_5, VAR_29 - 3);
                } else if (VAR_29 > 0) {

                    if ((VAR_27 = FUNC_6(VAR_9, VAR_30, VAR_29)) < 0)
                        return VAR_27;
                } else {

                    continue;
                }


                VAR_31 = VAR_6[VAR_29];


                if (VAR_13)
                    VAR_28 = VAR_9->transition_mode[VAR_14][VAR_21][VAR_22];
                else
                    VAR_28 = 0;


                if (VAR_28 == 0 || VAR_20 < VAR_28)
                    VAR_32 = VAR_19[VAR_21][VAR_22][0];
                else
                    VAR_32 = VAR_19[VAR_21][VAR_22][1];

                FUNC_2(VAR_9->subband_samples[VAR_21][VAR_22] + VAR_23,
                           VAR_30, VAR_31, VAR_32, 1, VAR_5);
            }
        }


        if ((VAR_20 == VAR_9->nsubsubframes[VAR_14] - 1 || VAR_9->sync_ssf) && FUNC_4(&VAR_9->gb, 16) != 0xffff) {
            FUNC_1(VAR_9->avctx, VAR_1, "XBR-DSYNC check failed\n");
            return VAR_0;
        }

        VAR_23 += VAR_5;
    }


    *VAR_15 = VAR_23;
    return 0;
}
