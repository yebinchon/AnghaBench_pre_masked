
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(const double *VAR_0, int VAR_1, int VAR_2,
                                   double *VAR_3)
{
    int VAR_4, VAR_5;

    for(VAR_5=0; VAR_5<VAR_2; VAR_5+=2){
        double VAR_6 = 1.0, VAR_7 = 1.0;
        for(VAR_4=VAR_5; VAR_4<VAR_1; VAR_4++){
            VAR_6 += VAR_0[VAR_4] * VAR_0[VAR_4-VAR_5];
            VAR_7 += VAR_0[VAR_4] * VAR_0[VAR_4-VAR_5-1];
        }
        VAR_3[VAR_5 ] = VAR_6;
        VAR_3[VAR_5+1] = VAR_7;
    }

    if(VAR_5==VAR_2){
        double VAR_8 = 1.0;
        for(VAR_4=VAR_5-1; VAR_4<VAR_1; VAR_4+=2){
            VAR_8 += VAR_0[VAR_4 ] * VAR_0[VAR_4-VAR_5 ]
                 + VAR_0[VAR_4+1] * VAR_0[VAR_4-VAR_5+1];
        }
        VAR_3[VAR_5] = VAR_8;
    }
}
