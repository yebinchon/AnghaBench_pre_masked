
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* idct_permutation; } ;
struct MpegEncContext {int * chroma_inter_matrix; int * chroma_intra_matrix; int * inter_matrix; int * intra_matrix; TYPE_1__ idsp; } ;
struct TYPE_5__ {int* bNewQmatrix; int ** Qmatrix; } ;
typedef TYPE_2__ DXVA_QmatrixData ;
typedef int AVDXVAContext ;
typedef int AVCodecContext ;


 size_t* VAR_0 ;

__attribute__((used)) static void FUNC_0(AVCodecContext *VAR_1,
                                       AVDXVAContext *VAR_2,
                                       const struct MpegEncContext *VAR_3,
                                       DXVA_QmatrixData *VAR_4)
{
    int VAR_5;
    for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
        VAR_4->bNewQmatrix[VAR_5] = 1;
    for (VAR_5 = 0; VAR_5 < 64; VAR_5++) {
        int VAR_6 = VAR_3->idsp.idct_permutation[VAR_0[VAR_5]];
        VAR_4->Qmatrix[0][VAR_5] = VAR_3->intra_matrix[VAR_6];
        VAR_4->Qmatrix[1][VAR_5] = VAR_3->inter_matrix[VAR_6];
        VAR_4->Qmatrix[2][VAR_5] = VAR_3->chroma_intra_matrix[VAR_6];
        VAR_4->Qmatrix[3][VAR_5] = VAR_3->chroma_inter_matrix[VAR_6];
    }
}
