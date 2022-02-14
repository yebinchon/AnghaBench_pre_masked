
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int NNEDIContext ;


 scalar_t__ FUNC_0 (float,float) ;
 int FUNC_1 (int *,float const*,float const*,float*,int,int,float*) ;
 int FUNC_2 (float*,int) ;

__attribute__((used)) static void FUNC_3(NNEDIContext *VAR_0, const float *VAR_1, const float *VAR_2, uint8_t *VAR_3)
{
    float VAR_4, VAR_5[12], VAR_6 = 1.0f;

    FUNC_1(VAR_0, VAR_1, VAR_2, VAR_5, 4, 48, &VAR_6);
    VAR_4 = VAR_5[0];
    FUNC_2(VAR_5, 4);
    VAR_5[0] = VAR_4;
    FUNC_1(VAR_0, VAR_5, VAR_2 + 4 * 49, VAR_5 + 4, 4, 4, &VAR_6);
    FUNC_2(VAR_5 + 4, 4);
    FUNC_1(VAR_0, VAR_5, VAR_2 + 4 * 49 + 4 * 5, VAR_5 + 8, 4, 8, &VAR_6);
    if (FUNC_0(VAR_5[10], VAR_5[11]) <= FUNC_0(VAR_5[8], VAR_5[9]))
        VAR_3[0] = 1;
    else
        VAR_3[0] = 0;
}
