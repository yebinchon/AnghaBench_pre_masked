
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int VP56RangeCoder ;
struct TYPE_8__ {size_t** coeff_dccv; size_t*** coeff_dcct; int* coeff_index_to_pos; size_t** coeff_runv; size_t**** coeff_ract; int * coeff_index_to_idct_selector; } ;
typedef TYPE_3__ VP56Model ;
struct TYPE_9__ {size_t* idct_scantable; size_t* above_block_idx; int dequant_ac; int** block_coeff; int * idct_selector; TYPE_2__* above_blocks; TYPE_1__* left_block; int avctx; TYPE_3__* modelp; int * ccp; } ;
typedef TYPE_4__ VP56Context ;
struct TYPE_7__ {int not_null_dc; } ;
struct TYPE_6__ {int not_null_dc; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int,int) ;
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
 int VAR_8 ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(VP56Context *VAR_9)
{
    VP56RangeCoder *VAR_10 = VAR_9->ccp;
    VP56Model *VAR_11 = VAR_9->modelp;
    uint8_t *VAR_12 = VAR_9->idct_scantable;
    uint8_t *VAR_13, *VAR_14, *VAR_15;
    int VAR_16, VAR_17, VAR_18;
    int VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
    int VAR_24 = 0;

    if (FUNC_6(VAR_10)) {
        FUNC_1(VAR_9->avctx, VAR_1, "End of AC stream reached in vp6_parse_coeff\n");
        return VAR_0;
    }

    for (VAR_19=0; VAR_19<6; VAR_19++) {
        int VAR_25 = 1;
        int VAR_26 = 1;

        if (VAR_19 > 3) VAR_24 = 1;

        VAR_23 = VAR_9->left_block[VAR_2[VAR_19]].not_null_dc
              + VAR_9->above_blocks[VAR_9->above_block_idx[VAR_19]].not_null_dc;
        VAR_13 = VAR_11->coeff_dccv[VAR_24];
        VAR_14 = VAR_11->coeff_dcct[VAR_24][VAR_23];

        VAR_18 = 0;
        for (;;) {
            if ((VAR_18>1 && VAR_25==0) || FUNC_4(VAR_10, VAR_14[0])) {

                if (FUNC_4(VAR_10, VAR_14[2])) {
                    if (FUNC_4(VAR_10, VAR_14[3])) {
                        VAR_22 = FUNC_5(VAR_10, VAR_6, VAR_13);
                        VAR_16 = VAR_3[VAR_22+5];
                        for (VAR_20=VAR_4[VAR_22]; VAR_20>=0; VAR_20--)
                            VAR_16 += FUNC_3(VAR_10, VAR_5[VAR_22][VAR_20]) << VAR_20;
                    } else {
                        if (FUNC_4(VAR_10, VAR_14[4]))
                            VAR_16 = 3 + FUNC_3(VAR_10, VAR_13[5]);
                        else
                            VAR_16 = 2;
                    }
                    VAR_25 = 2;
                } else {
                    VAR_25 = 1;
                    VAR_16 = 1;
                }
                VAR_17 = FUNC_2(VAR_10);
                VAR_16 = (VAR_16 ^ -VAR_17) + VAR_17;
                if (VAR_18)
                    VAR_16 *= VAR_9->dequant_ac;
                VAR_22 = VAR_11->coeff_index_to_pos[VAR_18];
                VAR_9->block_coeff[VAR_19][VAR_12[VAR_22]] = VAR_16;
                VAR_26 = 1;
            } else {

                VAR_25 = 0;
                if (VAR_18 > 0) {
                    if (!FUNC_4(VAR_10, VAR_14[1]))
                        break;

                    VAR_15 = VAR_11->coeff_runv[VAR_18 >= 6];
                    VAR_26 = FUNC_5(VAR_10, VAR_8, VAR_15);
                    if (!VAR_26)
                        for (VAR_26=9, VAR_20=0; VAR_20<6; VAR_20++)
                            VAR_26 += FUNC_3(VAR_10, VAR_15[VAR_20+8]) << VAR_20;
                }
            }
            VAR_18 += VAR_26;
            if (VAR_18 >= 64)
                break;
            VAR_21 = VAR_7[VAR_18];
            VAR_13 = VAR_14 = VAR_11->coeff_ract[VAR_24][VAR_25][VAR_21];
        }

        VAR_9->left_block[VAR_2[VAR_19]].not_null_dc =
        VAR_9->above_blocks[VAR_9->above_block_idx[VAR_19]].not_null_dc = !!VAR_9->block_coeff[VAR_19][0];
        VAR_9->idct_selector[VAR_19] = VAR_11->coeff_index_to_idct_selector[FUNC_0(VAR_18, 63)];
    }
    return 0;
}
