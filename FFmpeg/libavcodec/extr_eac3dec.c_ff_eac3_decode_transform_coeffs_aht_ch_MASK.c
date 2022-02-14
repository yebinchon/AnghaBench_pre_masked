
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {int* start_freq; int* end_freq; int** bap; int*** pre_mantissa; int dith_state; int avctx; int gbc; } ;
typedef int GetBitContext ;
typedef TYPE_1__ AC3DecodeContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,char*) ;
 int** VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int** VAR_9 ;
 int** VAR_10 ;
 int*** VAR_11 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int*) ;

__attribute__((used)) static void FUNC_6(AC3DecodeContext *VAR_12, int VAR_13)
{
    int VAR_14, VAR_15, VAR_16;
    int VAR_17, VAR_18;
    GetBitContext *VAR_19 = &VAR_12->gbc;
    int VAR_20[VAR_0];

    VAR_18 = FUNC_2(VAR_19, 2);
    VAR_17 = (VAR_18 < 2) ? 12 : 17;



    VAR_16 = 0;
    if (VAR_18 == VAR_2 || VAR_18 == VAR_4) {

        for (VAR_14 = VAR_12->start_freq[VAR_13]; VAR_14 < VAR_12->end_freq[VAR_13]; VAR_14++) {
            if (VAR_12->bap[VAR_13][VAR_14] > 7 && VAR_12->bap[VAR_13][VAR_14] < VAR_17)
                VAR_20[VAR_16++] = FUNC_3(VAR_19) << (VAR_18-1);
        }
    } else if (VAR_18 == VAR_3) {

        int VAR_21 = 2;
        for (VAR_14 = VAR_12->start_freq[VAR_13]; VAR_14 < VAR_12->end_freq[VAR_13]; VAR_14++) {
            if (VAR_12->bap[VAR_13][VAR_14] > 7 && VAR_12->bap[VAR_13][VAR_14] < 17) {
                if (VAR_21++ == 2) {
                    int VAR_22 = FUNC_2(VAR_19, 5);
                    if (VAR_22 > 26) {
                        FUNC_1(VAR_12->avctx, VAR_1, "GAQ gain group code out-of-range\n");
                        VAR_22 = 26;
                    }
                    VAR_20[VAR_16++] = VAR_6[VAR_22][0];
                    VAR_20[VAR_16++] = VAR_6[VAR_22][1];
                    VAR_20[VAR_16++] = VAR_6[VAR_22][2];
                    VAR_21 = 0;
                }
            }
        }
    }

    VAR_16=0;
    for (VAR_14 = VAR_12->start_freq[VAR_13]; VAR_14 < VAR_12->end_freq[VAR_13]; VAR_14++) {
        int VAR_23 = VAR_12->bap[VAR_13][VAR_14];
        int VAR_24 = VAR_7[VAR_23];
        if (!VAR_23) {

            for (VAR_15 = 0; VAR_15 < 6; VAR_15++) {
                VAR_12->pre_mantissa[VAR_13][VAR_14][VAR_15] = (FUNC_0(&VAR_12->dith_state) & 0x7FFFFF) - 0x400000;
            }
        } else if (VAR_23 < 8) {

            int VAR_25 = FUNC_2(VAR_19, VAR_24);
            for (VAR_15 = 0; VAR_15 < 6; VAR_15++) {
                VAR_12->pre_mantissa[VAR_13][VAR_14][VAR_15] = VAR_11[VAR_23][VAR_25][VAR_15] * (1 << 8);
            }
        } else {

            int VAR_26, VAR_27;
            if (VAR_18 != VAR_5 && VAR_23 < VAR_17) {
                VAR_27 = VAR_20[VAR_16++];
            } else {
                VAR_27 = 0;
            }
            VAR_26 = VAR_24 - VAR_27;

            for (VAR_15 = 0; VAR_15 < 6; VAR_15++) {
                int VAR_28 = FUNC_4(VAR_19, VAR_26);
                if (VAR_27 && VAR_28 == -(1 << (VAR_26-1))) {

                    int VAR_29;
                    int VAR_30 = VAR_24 - (2 - VAR_27);
                    VAR_28 = FUNC_4(VAR_19, VAR_30);
                    VAR_28 = ((unsigned)VAR_28) << (23 - (VAR_30 - 1));

                    if (VAR_28 >= 0)
                        VAR_29 = 1 << (23 - VAR_27);
                    else
                        VAR_29 = VAR_10[VAR_23-8][VAR_27-1] * (1 << 8);
                    VAR_28 += ((VAR_9[VAR_23-8][VAR_27-1] * (int64_t)VAR_28) >> 15) + VAR_29;
                } else {

                    VAR_28 *= (1 << (24 - VAR_24));
                    if (!VAR_27) {

                        VAR_28 += (VAR_8[VAR_23-8] * (int64_t)VAR_28) >> 15;
                    }
                }
                VAR_12->pre_mantissa[VAR_13][VAR_14][VAR_15] = VAR_28;
            }
        }
        FUNC_5(VAR_12->pre_mantissa[VAR_13][VAR_14]);
    }
}
