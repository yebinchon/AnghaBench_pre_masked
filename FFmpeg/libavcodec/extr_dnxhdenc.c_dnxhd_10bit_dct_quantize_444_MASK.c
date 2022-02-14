
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
struct TYPE_9__ {int** q_intra_matrix; int** q_chroma_intra_matrix; int intra_quant_bias; int max_qcoeff; TYPE_3__ idsp; TYPE_2__ fdsp; TYPE_1__ intra_scantable; } ;
typedef TYPE_4__ MpegEncContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int*,int ,int const*,int) ;
 int FUNC_1 (int*) ;

__attribute__((used)) static int FUNC_2(MpegEncContext *VAR_1, int16_t *VAR_2,
                                        int VAR_3, int VAR_4, int *VAR_5)
{
    int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    const int *VAR_11;
    const uint8_t *VAR_12= VAR_1->intra_scantable.scantable;
    int VAR_13;
    int VAR_14 = 0;
    unsigned int VAR_15, VAR_16;

    VAR_1->fdsp.fdct(VAR_2);

    VAR_2[0] = (VAR_2[0] + 2) >> 2;
    VAR_10 = 1;
    VAR_9 = 0;
    VAR_11 = VAR_3 < 4 ? VAR_1->q_intra_matrix[VAR_4] : VAR_1->q_chroma_intra_matrix[VAR_4];
    VAR_13= VAR_1->intra_quant_bias * (1 << (16 - 8));
    VAR_15 = (1 << 16) - VAR_13 - 1;
    VAR_16 = (VAR_15 << 1);

    for (VAR_6 = 63; VAR_6 >= VAR_10; VAR_6--) {
        VAR_7 = VAR_12[VAR_6];
        VAR_8 = VAR_2[VAR_7] * VAR_11[VAR_7];

        if (((unsigned)(VAR_8 + VAR_15)) > VAR_16) {
            VAR_9 = VAR_6;
            break;
        } else{
            VAR_2[VAR_7]=0;
        }
    }

    for (VAR_6 = VAR_10; VAR_6 <= VAR_9; VAR_6++) {
        VAR_7 = VAR_12[VAR_6];
        VAR_8 = VAR_2[VAR_7] * VAR_11[VAR_7];

        if (((unsigned)(VAR_8 + VAR_15)) > VAR_16) {
            if (VAR_8 > 0) {
                VAR_8 = (VAR_13 + VAR_8) >> 16;
                VAR_2[VAR_7] = VAR_8;
            } else{
                VAR_8 = (VAR_13 - VAR_8) >> 16;
                VAR_2[VAR_7] = -VAR_8;
            }
            VAR_14 |= VAR_8;
        } else {
            VAR_2[VAR_7] = 0;
        }
    }
    *VAR_5 = VAR_1->max_qcoeff < VAR_14;


    if (VAR_1->idsp.perm_type != VAR_0)
        FUNC_0(VAR_2, VAR_1->idsp.idct_permutation,
                         VAR_12, VAR_9);

    return VAR_9;
}
