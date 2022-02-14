
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float const* dct_table; } ;
typedef TYPE_1__ AudioRNNContext ;


 int VAR_0 ;
 float FUNC_0 (float) ;

__attribute__((used)) static void FUNC_1(AudioRNNContext *VAR_1, float *VAR_2, const float *VAR_3)
{
    for (int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        float VAR_5 = 0.f;

        for (int VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
            VAR_5 += VAR_3[VAR_6] * VAR_1->dct_table[VAR_6 * VAR_0 + VAR_4];
        }
        VAR_2[VAR_4] = VAR_5 * FUNC_0(2.f / 22);
    }
}
