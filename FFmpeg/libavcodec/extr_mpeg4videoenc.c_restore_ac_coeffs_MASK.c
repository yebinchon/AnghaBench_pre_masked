
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_6__ {size_t* idct_permutation; } ;
struct TYPE_5__ {int * permutated; } ;
struct TYPE_7__ {int* block_index; TYPE_2__ idsp; TYPE_1__ intra_scantable; int *** ac_val; int block_last_index; } ;
typedef TYPE_3__ MpegEncContext ;


 int FUNC_0 (int ,int const*,int) ;

__attribute__((used)) static inline void FUNC_1(MpegEncContext *VAR_0, int16_t VAR_1[6][64],
                                     const int VAR_2[6], uint8_t *VAR_3[6],
                                     const int VAR_4[6])
{
    int VAR_5, VAR_6;
    FUNC_0(VAR_0->block_last_index, VAR_4, sizeof(int) * 6);

    for (VAR_6 = 0; VAR_6 < 6; VAR_6++) {
        int16_t *VAR_7 = VAR_0->ac_val[0][0] + VAR_0->block_index[VAR_6] * 16;

        VAR_3[VAR_6] = VAR_0->intra_scantable.permutated;
        if (VAR_2[VAR_6]) {

            for (VAR_5 = 1; VAR_5 < 8; VAR_5++)
                VAR_1[VAR_6][VAR_0->idsp.idct_permutation[VAR_5]] = VAR_7[VAR_5 + 8];
        } else {

            for (VAR_5 = 1; VAR_5 < 8; VAR_5++)
                VAR_1[VAR_6][VAR_0->idsp.idct_permutation[VAR_5 << 3]] = VAR_7[VAR_5];
        }
    }
}
