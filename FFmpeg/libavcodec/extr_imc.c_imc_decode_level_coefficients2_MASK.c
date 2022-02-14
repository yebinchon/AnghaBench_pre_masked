
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IMCContext ;


 int VAR_0 ;
 float* VAR_1 ;

__attribute__((used)) static void FUNC_0(IMCContext *VAR_2, int *VAR_3,
                                           float *VAR_4, float *VAR_5,
                                           float *VAR_6)
{
    int VAR_7;




    for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
        VAR_5[VAR_7] = 0;
        if (VAR_3[VAR_7] < 16) {
            VAR_5[VAR_7] = VAR_1[VAR_3[VAR_7]] * VAR_4[VAR_7];
            VAR_6[VAR_7] = (VAR_3[VAR_7] - 7) * 0.83048 + VAR_6[VAR_7];
        } else {
            VAR_5[VAR_7] = VAR_4[VAR_7];
        }
    }
}
