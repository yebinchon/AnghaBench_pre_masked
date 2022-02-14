
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_8__ {scalar_t__ perm_type; int idct_permutation; } ;
struct TYPE_7__ {int (* fdct ) (int*) ;} ;
struct TYPE_6__ {int* scantable; } ;
struct TYPE_9__ {int** q_intra_matrix; int** q_chroma_intra_matrix; TYPE_3__ idsp; TYPE_2__ fdsp; TYPE_1__ intra_scantable; } ;
typedef TYPE_4__ MpegEncContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int ,int const*,int) ;
 int FUNC_2 (int*) ;

__attribute__((used)) static int FUNC_3(MpegEncContext *VAR_2, int16_t *VAR_3,
                                    int VAR_4, int VAR_5, int *VAR_6)
{
    const uint8_t *VAR_7= VAR_2->intra_scantable.scantable;
    const int *VAR_8 = VAR_4<4 ? VAR_2->q_intra_matrix[VAR_5] : VAR_2->q_chroma_intra_matrix[VAR_5];
    int VAR_9 = 0;
    int VAR_10;

    VAR_2->fdsp.fdct(VAR_3);


    VAR_3[0] = (VAR_3[0] + 2) >> 2;

    for (VAR_10 = 1; VAR_10 < 64; ++VAR_10) {
        int VAR_11 = VAR_7[VAR_10];
        int VAR_12 = FUNC_0(VAR_3[VAR_11]);
        int VAR_13 = (VAR_3[VAR_11] ^ VAR_12) - VAR_12;
        VAR_13 = VAR_13 * VAR_8[VAR_11] >> VAR_0;
        VAR_3[VAR_11] = (VAR_13 ^ VAR_12) - VAR_12;
        if (VAR_13)
            VAR_9 = VAR_10;
    }


    if (VAR_2->idsp.perm_type != VAR_1)
        FUNC_1(VAR_3, VAR_2->idsp.idct_permutation,
                         VAR_7, VAR_9);

    return VAR_9;
}
