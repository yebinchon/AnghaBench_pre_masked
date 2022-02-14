
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int int8_t ;
typedef int int16_t ;
struct TYPE_10__ {size_t* permutated; } ;
struct TYPE_13__ {size_t* idct_permutation; } ;
struct TYPE_14__ {size_t* permutated; } ;
struct TYPE_12__ {size_t* permutated; } ;
struct TYPE_11__ {int* qscale_table; } ;
struct TYPE_15__ {int* block_last_index; int*** ac_val; int* block_index; int mb_x; int mb_y; int mb_stride; int* block_wrap; int qscale; TYPE_1__ intra_v_scantable; TYPE_4__ idsp; TYPE_5__ intra_h_scantable; TYPE_3__ intra_scantable; TYPE_2__ current_picture; } ;
typedef TYPE_6__ MpegEncContext ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (TYPE_6__*,int*,int,size_t*) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (TYPE_6__*,int**,int const*,size_t**,int*) ;

__attribute__((used)) static inline int FUNC_4(MpegEncContext *VAR_0, int16_t VAR_1[6][64],
                                 const int VAR_2[6], uint8_t *VAR_3[6],
                                 int VAR_4[6])
{
    int VAR_5 = 0;
    int VAR_6, VAR_7;
    int8_t *const VAR_8 = VAR_0->current_picture.qscale_table;

    FUNC_2(VAR_4, VAR_0->block_last_index, sizeof(int) * 6);

    for (VAR_7 = 0; VAR_7 < 6; VAR_7++) {
        int16_t *VAR_9, *VAR_10;

        VAR_5 -= FUNC_1(VAR_0, VAR_1[VAR_7], VAR_0->block_last_index[VAR_7],
                                VAR_0->intra_scantable.permutated);

        VAR_9 = VAR_0->ac_val[0][0] + VAR_0->block_index[VAR_7] * 16;
        VAR_10 = VAR_9;
        if (VAR_2[VAR_7]) {
            const int VAR_11 = VAR_0->mb_x + VAR_0->mb_y * VAR_0->mb_stride - VAR_0->mb_stride;

            VAR_9 -= VAR_0->block_wrap[VAR_7] * 16;
            if (VAR_0->mb_y == 0 || VAR_0->qscale == VAR_8[VAR_11] || VAR_7 == 2 || VAR_7 == 3) {

                for (VAR_6 = 1; VAR_6 < 8; VAR_6++) {
                    const int VAR_12 = VAR_1[VAR_7][VAR_0->idsp.idct_permutation[VAR_6]];
                    VAR_1[VAR_7][VAR_0->idsp.idct_permutation[VAR_6]] = VAR_12 - VAR_9[VAR_6 + 8];
                    VAR_10[VAR_6] = VAR_1[VAR_7][VAR_0->idsp.idct_permutation[VAR_6 << 3]];
                    VAR_10[VAR_6 + 8] = VAR_12;
                }
            } else {

                for (VAR_6 = 1; VAR_6 < 8; VAR_6++) {
                    const int VAR_13 = VAR_1[VAR_7][VAR_0->idsp.idct_permutation[VAR_6]];
                    VAR_1[VAR_7][VAR_0->idsp.idct_permutation[VAR_6]] = VAR_13 - FUNC_0(VAR_9[VAR_6 + 8] * VAR_8[VAR_11], VAR_0->qscale);
                    VAR_10[VAR_6] = VAR_1[VAR_7][VAR_0->idsp.idct_permutation[VAR_6 << 3]];
                    VAR_10[VAR_6 + 8] = VAR_13;
                }
            }
            VAR_3[VAR_7] = VAR_0->intra_h_scantable.permutated;
        } else {
            const int VAR_14 = VAR_0->mb_x - 1 + VAR_0->mb_y * VAR_0->mb_stride;

            VAR_9 -= 16;
            if (VAR_0->mb_x == 0 || VAR_0->qscale == VAR_8[VAR_14] || VAR_7 == 1 || VAR_7 == 3) {

                for (VAR_6 = 1; VAR_6 < 8; VAR_6++) {
                    const int VAR_15 = VAR_1[VAR_7][VAR_0->idsp.idct_permutation[VAR_6 << 3]];
                    VAR_1[VAR_7][VAR_0->idsp.idct_permutation[VAR_6 << 3]] = VAR_15 - VAR_9[VAR_6];
                    VAR_10[VAR_6] = VAR_15;
                    VAR_10[VAR_6 + 8] = VAR_1[VAR_7][VAR_0->idsp.idct_permutation[VAR_6]];
                }
            } else {

                for (VAR_6 = 1; VAR_6 < 8; VAR_6++) {
                    const int VAR_16 = VAR_1[VAR_7][VAR_0->idsp.idct_permutation[VAR_6 << 3]];
                    VAR_1[VAR_7][VAR_0->idsp.idct_permutation[VAR_6 << 3]] = VAR_16 - FUNC_0(VAR_9[VAR_6] * VAR_8[VAR_14], VAR_0->qscale);
                    VAR_10[VAR_6] = VAR_16;
                    VAR_10[VAR_6 + 8] = VAR_1[VAR_7][VAR_0->idsp.idct_permutation[VAR_6]];
                }
            }
            VAR_3[VAR_7] = VAR_0->intra_v_scantable.permutated;
        }

        for (VAR_6 = 63; VAR_6 > 0; VAR_6--)
            if (VAR_1[VAR_7][VAR_3[VAR_7][VAR_6]])
                break;
        VAR_0->block_last_index[VAR_7] = VAR_6;

        VAR_5 += FUNC_1(VAR_0, VAR_1[VAR_7], VAR_0->block_last_index[VAR_7], VAR_3[VAR_7]);
    }

    if (VAR_5 < 0) {
        return 1;
    } else {
        FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
        return 0;
    }
}
