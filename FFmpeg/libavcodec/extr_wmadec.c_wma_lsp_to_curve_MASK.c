
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float* lsp_cos_table; } ;
typedef TYPE_1__ WMACodecContext ;


 int VAR_0 ;
 float FUNC_0 (TYPE_1__*,float) ;

__attribute__((used)) static void FUNC_1(WMACodecContext *VAR_1, float *VAR_2, float *VAR_3,
                             int VAR_4, float *VAR_5)
{
    int VAR_6, VAR_7;
    float VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

    VAR_12 = 0;
    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
        VAR_8 = 0.5f;
        VAR_9 = 0.5f;
        VAR_10 = VAR_1->lsp_cos_table[VAR_6];
        for (VAR_7 = 1; VAR_7 < VAR_0; VAR_7 += 2) {
            VAR_9 *= VAR_10 - VAR_5[VAR_7 - 1];
            VAR_8 *= VAR_10 - VAR_5[VAR_7];
        }
        VAR_8 *= VAR_8 * (2.0f - VAR_10);
        VAR_9 *= VAR_9 * (2.0f + VAR_10);
        VAR_11 = VAR_8 + VAR_9;
        VAR_11 = FUNC_0(VAR_1, VAR_11);
        if (VAR_11 > VAR_12)
            VAR_12 = VAR_11;
        VAR_2[VAR_6] = VAR_11;
    }
    *VAR_3 = VAR_12;
}
