
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int VP56RangeCoder ;
struct TYPE_6__ {size_t** coeff_dccv; size_t*** coeff_dcct; size_t**** coeff_ract; size_t***** coeff_acct; } ;
typedef TYPE_2__ VP56Model ;
struct TYPE_7__ {size_t* idct_scantable; int** coeff_ctx; size_t* above_block_idx; int dequant_ac; int** block_coeff; int* coeff_ctx_last; int* idct_selector; TYPE_1__* above_blocks; int avctx; TYPE_2__* modelp; int c; } ;
typedef TYPE_3__ VP56Context ;
struct TYPE_5__ {int not_null_dc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,char*) ;
 size_t* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 size_t** VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,size_t) ;
 scalar_t__ FUNC_4 (int *,size_t) ;
 int FUNC_5 (int *,int ,size_t*) ;
 int* VAR_7 ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(VP56Context *VAR_8)
{
    VP56RangeCoder *VAR_9 = &VAR_8->c;
    VP56Model *VAR_10 = VAR_8->modelp;
    uint8_t *VAR_11 = VAR_8->idct_scantable;
    uint8_t *VAR_12, *VAR_13;
    int VAR_14, VAR_15, VAR_16;
    int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
    int VAR_23 = 0;

    if (FUNC_6(VAR_9)) {
        FUNC_1(VAR_8->avctx, VAR_1, "End of AC stream reached in vp5_parse_coeff\n");
        return VAR_0;
    }

    for (VAR_17=0; VAR_17<6; VAR_17++) {
        int VAR_24 = 1;

        if (VAR_17 > 3) VAR_23 = 1;

        VAR_21 = 6*VAR_8->coeff_ctx[VAR_2[VAR_17]][0]
              + VAR_8->above_blocks[VAR_8->above_block_idx[VAR_17]].not_null_dc;
        VAR_12 = VAR_10->coeff_dccv[VAR_23];
        VAR_13 = VAR_10->coeff_dcct[VAR_23][VAR_21];

        VAR_16 = 0;
        for (;;) {
            if (FUNC_4(VAR_9, VAR_13[0])) {
                if (FUNC_4(VAR_9, VAR_13[2])) {
                    if (FUNC_4(VAR_9, VAR_13[3])) {
                        VAR_8->coeff_ctx[VAR_2[VAR_17]][VAR_16] = 4;
                        VAR_20 = FUNC_5(VAR_9, VAR_6, VAR_12);
                        VAR_15 = FUNC_2(VAR_9);
                        VAR_14 = VAR_3[VAR_20+5];
                        for (VAR_18=VAR_4[VAR_20]; VAR_18>=0; VAR_18--)
                            VAR_14 += FUNC_3(VAR_9, VAR_5[VAR_20][VAR_18]) << VAR_18;
                    } else {
                        if (FUNC_4(VAR_9, VAR_13[4])) {
                            VAR_14 = 3 + FUNC_3(VAR_9, VAR_12[5]);
                            VAR_8->coeff_ctx[VAR_2[VAR_17]][VAR_16] = 3;
                        } else {
                            VAR_14 = 2;
                            VAR_8->coeff_ctx[VAR_2[VAR_17]][VAR_16] = 2;
                        }
                        VAR_15 = FUNC_2(VAR_9);
                    }
                    VAR_24 = 2;
                } else {
                    VAR_24 = 1;
                    VAR_8->coeff_ctx[VAR_2[VAR_17]][VAR_16] = 1;
                    VAR_15 = FUNC_2(VAR_9);
                    VAR_14 = 1;
                }
                VAR_14 = (VAR_14 ^ -VAR_15) + VAR_15;
                if (VAR_16)
                    VAR_14 *= VAR_8->dequant_ac;
                VAR_8->block_coeff[VAR_17][VAR_11[VAR_16]] = VAR_14;
            } else {
                if (VAR_24 && !FUNC_4(VAR_9, VAR_13[1]))
                    break;
                VAR_24 = 0;
                VAR_8->coeff_ctx[VAR_2[VAR_17]][VAR_16] = 0;
            }
            VAR_16++;
            if (VAR_16 >= 64)
                break;

            VAR_19 = VAR_7[VAR_16];
            VAR_21 = VAR_8->coeff_ctx[VAR_2[VAR_17]][VAR_16];
            VAR_12 = VAR_10->coeff_ract[VAR_23][VAR_24][VAR_19];
            VAR_13 = VAR_19 > 2 ? VAR_12 : VAR_10->coeff_acct[VAR_23][VAR_24][VAR_19][VAR_21];
        }

        VAR_22 = FUNC_0(VAR_8->coeff_ctx_last[VAR_2[VAR_17]], 24);
        VAR_8->coeff_ctx_last[VAR_2[VAR_17]] = VAR_16;
        if (VAR_16 < VAR_22)
            for (VAR_18=VAR_16; VAR_18<=VAR_22; VAR_18++)
                VAR_8->coeff_ctx[VAR_2[VAR_17]][VAR_18] = 5;
        VAR_8->above_blocks[VAR_8->above_block_idx[VAR_17]].not_null_dc = VAR_8->coeff_ctx[VAR_2[VAR_17]][0];
        VAR_8->idct_selector[VAR_17] = 63;
    }
    return 0;
}
