
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int8_t ;
struct TYPE_4__ {float* lspcodebook; int lsp_bit1; int n_lsp; int lsp_bit2; int lsp_split; } ;
typedef TYPE_1__ TwinVQModeTab ;
struct TYPE_5__ {TYPE_1__* mtab; } ;
typedef TYPE_2__ TwinVQContext ;


 int FUNC_0 (float*,int) ;
 int FUNC_1 (int,float*,double) ;

__attribute__((used)) static void FUNC_2(TwinVQContext *VAR_0, int VAR_1, uint8_t *VAR_2,
                       int VAR_3, float *VAR_4, float *VAR_5)
{
    const TwinVQModeTab *VAR_6 = VAR_0->mtab;
    int VAR_7, VAR_8;

    const float *VAR_9 = VAR_6->lspcodebook;
    const float *VAR_10 = VAR_9 + (1 << VAR_6->lsp_bit1) * VAR_6->n_lsp;
    const float *VAR_11 = VAR_10 + (1 << VAR_6->lsp_bit2) * VAR_6->n_lsp;

    const int8_t VAR_12[4] = {
        -2,
        VAR_6->lsp_split == 4 ? -2 : 1,
        VAR_6->lsp_split == 4 ? -2 : 1,
        0
    };

    VAR_8 = 0;
    for (VAR_7 = 0; VAR_7 < VAR_6->lsp_split; VAR_7++) {
        int VAR_13 = ((VAR_7 + 1) * VAR_6->n_lsp + VAR_12[VAR_7]) /
                        VAR_6->lsp_split;
        for (; VAR_8 < VAR_13; VAR_8++)
            VAR_4[VAR_8] = VAR_9[VAR_1 * VAR_6->n_lsp + VAR_8] +
                     VAR_10[VAR_2[VAR_7] * VAR_6->n_lsp + VAR_8];
    }

    FUNC_1(VAR_6->n_lsp, VAR_4, 0.0001);

    for (VAR_7 = 0; VAR_7 < VAR_6->n_lsp; VAR_7++) {
        float VAR_14 = 1.0 - VAR_11[VAR_3 * VAR_6->n_lsp + VAR_7];
        float VAR_15 = VAR_5[VAR_7] * VAR_11[VAR_3 * VAR_6->n_lsp + VAR_7];
        VAR_5[VAR_7] = VAR_4[VAR_7];
        VAR_4[VAR_7] = VAR_4[VAR_7] * VAR_14 + VAR_15;
    }

    FUNC_1(VAR_6->n_lsp, VAR_4, 0.0001);
    FUNC_1(VAR_6->n_lsp, VAR_4, 0.000095);
    FUNC_0(VAR_4, VAR_6->n_lsp);
}
