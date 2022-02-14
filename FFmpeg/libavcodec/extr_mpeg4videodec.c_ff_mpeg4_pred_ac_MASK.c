
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int8_t ;
typedef int int16_t ;
struct TYPE_6__ {size_t* idct_permutation; } ;
struct TYPE_5__ {int* qscale_table; } ;
struct TYPE_7__ {int*** ac_val; int* block_index; int mb_x; int mb_y; int mb_stride; int qscale; int* block_wrap; TYPE_2__ idsp; scalar_t__ ac_pred; TYPE_1__ current_picture; } ;
typedef TYPE_3__ MpegEncContext ;


 scalar_t__ FUNC_0 (int,int) ;

void FUNC_1(MpegEncContext *VAR_0, int16_t *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4;
    int16_t *VAR_5, *VAR_6;
    int8_t *const VAR_7 = VAR_0->current_picture.qscale_table;


    VAR_5 = &VAR_0->ac_val[0][0][0] + VAR_0->block_index[VAR_2] * 16;
    VAR_6 = VAR_5;
    if (VAR_0->ac_pred) {
        if (VAR_3 == 0) {
            const int VAR_8 = VAR_0->mb_x - 1 + VAR_0->mb_y * VAR_0->mb_stride;

            VAR_5 -= 16;

            if (VAR_0->mb_x == 0 || VAR_0->qscale == VAR_7[VAR_8] ||
                VAR_2 == 1 || VAR_2 == 3) {

                for (VAR_4 = 1; VAR_4 < 8; VAR_4++)
                    VAR_1[VAR_0->idsp.idct_permutation[VAR_4 << 3]] += VAR_5[VAR_4];
            } else {

                for (VAR_4 = 1; VAR_4 < 8; VAR_4++)
                    VAR_1[VAR_0->idsp.idct_permutation[VAR_4 << 3]] += FUNC_0(VAR_5[VAR_4] * VAR_7[VAR_8], VAR_0->qscale);
            }
        } else {
            const int VAR_9 = VAR_0->mb_x + VAR_0->mb_y * VAR_0->mb_stride - VAR_0->mb_stride;

            VAR_5 -= 16 * VAR_0->block_wrap[VAR_2];

            if (VAR_0->mb_y == 0 || VAR_0->qscale == VAR_7[VAR_9] ||
                VAR_2 == 2 || VAR_2 == 3) {

                for (VAR_4 = 1; VAR_4 < 8; VAR_4++)
                    VAR_1[VAR_0->idsp.idct_permutation[VAR_4]] += VAR_5[VAR_4 + 8];
            } else {

                for (VAR_4 = 1; VAR_4 < 8; VAR_4++)
                    VAR_1[VAR_0->idsp.idct_permutation[VAR_4]] += FUNC_0(VAR_5[VAR_4 + 8] * VAR_7[VAR_9], VAR_0->qscale);
            }
        }
    }

    for (VAR_4 = 1; VAR_4 < 8; VAR_4++)
        VAR_6[VAR_4] = VAR_1[VAR_0->idsp.idct_permutation[VAR_4 << 3]];


    for (VAR_4 = 1; VAR_4 < 8; VAR_4++)
        VAR_6[8 + VAR_4] = VAR_1[VAR_0->idsp.idct_permutation[VAR_4]];
}
