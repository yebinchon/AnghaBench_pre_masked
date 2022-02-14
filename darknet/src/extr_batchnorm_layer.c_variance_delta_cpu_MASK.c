
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (float,float) ;

void FUNC_1(float *VAR_0, float *VAR_1, float *VAR_2, float *VAR_3, int VAR_4, int VAR_5, int VAR_6, float *VAR_7)
{

    int VAR_8,VAR_9,VAR_10;
    for(VAR_8 = 0; VAR_8 < VAR_5; ++VAR_8){
        VAR_7[VAR_8] = 0;
        for(VAR_9 = 0; VAR_9 < VAR_4; ++VAR_9){
            for(VAR_10 = 0; VAR_10 < VAR_6; ++VAR_10){
                int VAR_11 = VAR_9*VAR_5*VAR_6 + VAR_8*VAR_6 + VAR_10;
                VAR_7[VAR_8] += VAR_1[VAR_11]*(VAR_0[VAR_11] - VAR_2[VAR_8]);
            }
        }
        VAR_7[VAR_8] *= -.5 * FUNC_0(VAR_3[VAR_8] + .00001f, (float)(-3./2.));
    }
}
