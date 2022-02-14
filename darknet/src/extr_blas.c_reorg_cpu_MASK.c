
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(float *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, float *VAR_7)
{
    int VAR_8,VAR_9,VAR_10,VAR_11;
    int VAR_12 = VAR_3/(VAR_5*VAR_5);

    for(VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8){
        for(VAR_11 = 0; VAR_11 < VAR_3; ++VAR_11){
            for(VAR_10 = 0; VAR_10 < VAR_2; ++VAR_10){
                for(VAR_9 = 0; VAR_9 < VAR_1; ++VAR_9){
                    int VAR_13 = VAR_9 + VAR_1*(VAR_10 + VAR_2*(VAR_11 + VAR_3*VAR_8));
                    int VAR_14 = VAR_11 % VAR_12;
                    int VAR_15 = VAR_11 / VAR_12;
                    int VAR_16 = VAR_9*VAR_5 + VAR_15 % VAR_5;
                    int VAR_17 = VAR_10*VAR_5 + VAR_15 / VAR_5;
                    int VAR_18 = VAR_16 + VAR_1*VAR_5*(VAR_17 + VAR_2*VAR_5*(VAR_14 + VAR_12*VAR_8));
                    if(VAR_6) VAR_7[VAR_18] = VAR_0[VAR_13];
                    else VAR_7[VAR_13] = VAR_0[VAR_18];
                }
            }
        }
    }
}
