
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* idct_permutation; } ;
struct TYPE_5__ {int* intra_matrix; int* chroma_intra_matrix; int* inter_matrix; int* chroma_inter_matrix; TYPE_1__ idsp; } ;
typedef TYPE_2__ MpegEncContext ;


 int* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_0(MpegEncContext *VAR_2)
{
    int VAR_3, VAR_4;


    for (VAR_3 = 0; VAR_3 < 64; VAR_3++) {
        int VAR_5 = VAR_2->idsp.idct_permutation[VAR_3];
        VAR_4 = VAR_0[VAR_3];
        VAR_2->intra_matrix[VAR_5] = VAR_4;
        VAR_2->chroma_intra_matrix[VAR_5] = VAR_4;

        VAR_4 = VAR_1[VAR_3];
        VAR_2->inter_matrix[VAR_5] = VAR_4;
        VAR_2->chroma_inter_matrix[VAR_5] = VAR_4;
    }
}
