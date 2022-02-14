
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float) ;

void FUNC_1(float *VAR_0, float *VAR_1, float *VAR_2, float *VAR_3, float *VAR_4, int VAR_5, int VAR_6, int VAR_7, float *VAR_8)
{
    int VAR_9, VAR_10, VAR_11;
    for(VAR_10 = 0; VAR_10 < VAR_5; ++VAR_10){
        for(VAR_9 = 0; VAR_9 < VAR_6; ++VAR_9){
            for(VAR_11 = 0; VAR_11 < VAR_7; ++VAR_11){
                int VAR_12 = VAR_10*VAR_6*VAR_7 + VAR_9*VAR_7 + VAR_11;
                VAR_8[VAR_12] = VAR_8[VAR_12] * 1./(FUNC_0(VAR_2[VAR_9] + .00001f)) + VAR_4[VAR_9] * 2. * (VAR_0[VAR_12] - VAR_1[VAR_9]) / (VAR_7 * VAR_5) + VAR_3[VAR_9]/(VAR_7*VAR_5);
            }
        }
    }
}
