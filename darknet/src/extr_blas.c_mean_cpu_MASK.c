
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(float *VAR_0, int VAR_1, int VAR_2, int VAR_3, float *VAR_4)
{
    float VAR_5 = 1./(VAR_1 * VAR_3);
    int VAR_6,VAR_7,VAR_8;
    for(VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6){
        VAR_4[VAR_6] = 0;
        for(VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7){
            for(VAR_8 = 0; VAR_8 < VAR_3; ++VAR_8){
                int VAR_9 = VAR_7*VAR_2*VAR_3 + VAR_6*VAR_3 + VAR_8;
                VAR_4[VAR_6] += VAR_0[VAR_9];
            }
        }
        VAR_4[VAR_6] *= VAR_5;
    }
}
