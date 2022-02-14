
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {size_t b1; int* b1_mant; size_t b2; int* b2_mant; int b4; int b4_mant; } ;
typedef TYPE_1__ mant_groups ;
typedef int int8_t ;
typedef int int32_t ;
struct TYPE_6__ {int* start_freq; int* end_freq; int** bap; int** dexps; int** fixed_coeffs; int avctx; int dith_state; int gbc; scalar_t__* dither_flag; } ;
typedef int GetBitContext ;
typedef TYPE_2__ AC3DecodeContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,char*,int) ;
 void*** VAR_2 ;
 void*** VAR_3 ;
 int* VAR_4 ;
 void*** VAR_5 ;
 int* VAR_6 ;
 size_t FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int * VAR_7 ;

__attribute__((used)) static void FUNC_4(AC3DecodeContext *VAR_8, int VAR_9, mant_groups *VAR_10)
{
    int VAR_11 = VAR_8->start_freq[VAR_9];
    int VAR_12 = VAR_8->end_freq[VAR_9];
    uint8_t *VAR_13 = VAR_8->bap[VAR_9];
    int8_t *VAR_14 = VAR_8->dexps[VAR_9];
    int32_t *VAR_15 = VAR_8->fixed_coeffs[VAR_9];
    int VAR_16 = (VAR_9 == VAR_1) || VAR_8->dither_flag[VAR_9];
    GetBitContext *VAR_17 = &VAR_8->gbc;
    int VAR_18;

    for (VAR_18 = VAR_11; VAR_18 < VAR_12; VAR_18++) {
        int VAR_19 = VAR_13[VAR_18];
        int VAR_20;
        switch (VAR_19) {
        case 0:

            if (VAR_16)
                VAR_20 = (((FUNC_0(&VAR_8->dith_state)>>8)*181)>>8) - 5931008;
            else
                VAR_20 = 0;
            break;
        case 1:
            if (VAR_10->b1) {
                VAR_10->b1--;
                VAR_20 = VAR_10->b1_mant[VAR_10->b1];
            } else {
                int VAR_21 = FUNC_2(VAR_17, 5);
                VAR_20 = VAR_2[VAR_21][0];
                VAR_10->b1_mant[1] = VAR_2[VAR_21][1];
                VAR_10->b1_mant[0] = VAR_2[VAR_21][2];
                VAR_10->b1 = 2;
            }
            break;
        case 2:
            if (VAR_10->b2) {
                VAR_10->b2--;
                VAR_20 = VAR_10->b2_mant[VAR_10->b2];
            } else {
                int VAR_22 = FUNC_2(VAR_17, 7);
                VAR_20 = VAR_3[VAR_22][0];
                VAR_10->b2_mant[1] = VAR_3[VAR_22][1];
                VAR_10->b2_mant[0] = VAR_3[VAR_22][2];
                VAR_10->b2 = 2;
            }
            break;
        case 3:
            VAR_20 = VAR_4[FUNC_2(VAR_17, 3)];
            break;
        case 4:
            if (VAR_10->b4) {
                VAR_10->b4 = 0;
                VAR_20 = VAR_10->b4_mant;
            } else {
                int VAR_23 = FUNC_2(VAR_17, 7);
                VAR_20 = VAR_5[VAR_23][0];
                VAR_10->b4_mant = VAR_5[VAR_23][1];
                VAR_10->b4 = 1;
            }
            break;
        case 5:
            VAR_20 = VAR_6[FUNC_2(VAR_17, 4)];
            break;
        default:

            if (VAR_19 > 15) {
                FUNC_1(VAR_8->avctx, VAR_0, "bap %d is invalid in plain AC-3\n", VAR_19);
                VAR_19 = 15;
            }
            VAR_20 = (unsigned)FUNC_3(VAR_17, VAR_7[VAR_19]) << (24 - VAR_7[VAR_19]);
            break;
        }
        VAR_15[VAR_18] = VAR_20 >> VAR_14[VAR_18];
    }
}
