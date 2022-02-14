
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

void FUNC_1(int VAR_0, int VAR_1, int VAR_2, int VAR_3, float *VAR_4, int VAR_5, int VAR_6, int VAR_7, float VAR_8, float VAR_9, float *VAR_10)
{
    int VAR_11 = VAR_1/VAR_5;
    int VAR_12 = VAR_5/VAR_1;
    FUNC_0(VAR_11 == VAR_2/VAR_6);
    FUNC_0(VAR_12 == VAR_6/VAR_2);
    if(VAR_11 < 1) VAR_11 = 1;
    if(VAR_12 < 1) VAR_12 = 1;
    int VAR_13 = (VAR_1 < VAR_5) ? VAR_1 : VAR_5;
    int VAR_14 = (VAR_2 < VAR_6) ? VAR_2 : VAR_6;
    int VAR_15 = (VAR_3 < VAR_7) ? VAR_3 : VAR_7;

    int VAR_16,VAR_17,VAR_18,VAR_19;
    for(VAR_19 = 0; VAR_19 < VAR_0; ++VAR_19){
        for(VAR_18 = 0; VAR_18 < VAR_15; ++VAR_18){
            for(VAR_17 = 0; VAR_17 < VAR_14; ++VAR_17){
                for(VAR_16 = 0; VAR_16 < VAR_13; ++VAR_16){
                    int VAR_20 = VAR_16*VAR_12 + VAR_5*(VAR_17*VAR_12 + VAR_6*(VAR_18 + VAR_7*VAR_19));
                    int VAR_21 = VAR_16*VAR_11 + VAR_1*(VAR_17*VAR_11 + VAR_2*(VAR_18 + VAR_3*VAR_19));
                    VAR_10[VAR_20] = VAR_8*VAR_10[VAR_20] + VAR_9*VAR_4[VAR_21];
                }
            }
        }
    }
}
