
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* idct_permutation; } ;
struct TYPE_5__ {int* intra_matrix; int* chroma_intra_matrix; TYPE_1__ idsp; } ;
typedef TYPE_2__ MpegEncContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 size_t* VAR_1 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(MpegEncContext *VAR_2, GetBitContext *VAR_3)
{
    int VAR_4, VAR_5, VAR_6;

    if (FUNC_1(VAR_3)) {
        if (FUNC_2(VAR_3) < 64*8)
            return VAR_0;

        for (VAR_4 = 0; VAR_4 < 64; VAR_4++) {
            VAR_6 = FUNC_0(VAR_3, 8);
            VAR_5 = VAR_2->idsp.idct_permutation[VAR_1[VAR_4]];
            VAR_2->intra_matrix[VAR_5] = VAR_6;
            VAR_2->chroma_intra_matrix[VAR_5] = VAR_6;
        }
    }

    if (FUNC_1(VAR_3)) {
        if (FUNC_2(VAR_3) < 64*8)
            return VAR_0;

        for (VAR_4 = 0; VAR_4 < 64; VAR_4++) {
            FUNC_0(VAR_3, 8);
        }
    }

    if (FUNC_1(VAR_3)) {
        if (FUNC_2(VAR_3) < 64*8)
            return VAR_0;

        for (VAR_4 = 0; VAR_4 < 64; VAR_4++) {
            VAR_6 = FUNC_0(VAR_3, 8);
            VAR_5 = VAR_2->idsp.idct_permutation[VAR_1[VAR_4]];
            VAR_2->chroma_intra_matrix[VAR_5] = VAR_6;
        }
    }

    if (FUNC_1(VAR_3)) {
        if (FUNC_2(VAR_3) < 64*8)
            return VAR_0;

        for (VAR_4 = 0; VAR_4 < 64; VAR_4++) {
            FUNC_0(VAR_3, 8);
        }
    }

    FUNC_3(VAR_3);
    return 0;
}
