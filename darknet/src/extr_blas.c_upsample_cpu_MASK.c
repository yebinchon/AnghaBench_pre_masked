
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(float *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, float VAR_7, float *VAR_8)
{
    int VAR_9, VAR_10, VAR_11, VAR_12;
    for(VAR_12 = 0; VAR_12 < VAR_4; ++VAR_12){
        for(VAR_11 = 0; VAR_11 < VAR_3; ++VAR_11){
            for(VAR_10 = 0; VAR_10 < VAR_2*VAR_5; ++VAR_10){
                for(VAR_9 = 0; VAR_9 < VAR_1*VAR_5; ++VAR_9){
                    int VAR_13 = VAR_12*VAR_1*VAR_2*VAR_3 + VAR_11*VAR_1*VAR_2 + (VAR_10/VAR_5)*VAR_1 + VAR_9/VAR_5;
                    int VAR_14 = VAR_12*VAR_1*VAR_2*VAR_3*VAR_5*VAR_5 + VAR_11*VAR_1*VAR_2*VAR_5*VAR_5 + VAR_10*VAR_1*VAR_5 + VAR_9;
                    if(VAR_6) VAR_8[VAR_14] = VAR_7*VAR_0[VAR_13];
                    else VAR_0[VAR_13] += VAR_7*VAR_8[VAR_14];
                }
            }
        }
    }
}
