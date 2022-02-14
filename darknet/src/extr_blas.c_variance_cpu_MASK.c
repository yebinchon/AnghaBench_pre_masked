
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (float,int) ;

void FUNC_1(float *VAR_0, float *VAR_1, int VAR_2, int VAR_3, int VAR_4, float *VAR_5)
{
    float VAR_6 = 1./(VAR_2 * VAR_4 - 1);
    int VAR_7,VAR_8,VAR_9;
    for(VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7){
        VAR_5[VAR_7] = 0;
        for(VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8){
            for(VAR_9 = 0; VAR_9 < VAR_4; ++VAR_9){
                int VAR_10 = VAR_8*VAR_3*VAR_4 + VAR_7*VAR_4 + VAR_9;
                VAR_5[VAR_7] += FUNC_0((VAR_0[VAR_10] - VAR_1[VAR_7]), 2);
            }
        }
        VAR_5[VAR_7] *= VAR_6;
    }
}
