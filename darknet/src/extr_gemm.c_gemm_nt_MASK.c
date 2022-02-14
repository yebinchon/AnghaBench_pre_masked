
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(int VAR_0, int VAR_1, int VAR_2, float VAR_3,
        float *VAR_4, int VAR_5,
        float *VAR_6, int VAR_7,
        float *VAR_8, int VAR_9)
{
    int VAR_10,VAR_11,VAR_12;
#pragma omp parallel for
 for(VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10){
        for(VAR_11 = 0; VAR_11 < VAR_1; ++VAR_11){
            register float VAR_13 = 0;
            for(VAR_12 = 0; VAR_12 < VAR_2; ++VAR_12){
                VAR_13 += VAR_3*VAR_4[VAR_10*VAR_5+VAR_12]*VAR_6[VAR_11*VAR_7 + VAR_12];
            }
            VAR_8[VAR_10*VAR_9+VAR_11] += VAR_13;
        }
    }
}
