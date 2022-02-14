
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int NNEDIContext ;


 scalar_t__ FUNC_0 (float,float) ;
 int FUNC_1 (int *,float*,float const*,float*,int,int,float*) ;
 int FUNC_2 (int *,float const*,float const*,float*,int,int,float*) ;
 int FUNC_3 (float*,int) ;

__attribute__((used)) static void FUNC_4(NNEDIContext *VAR_0, const float *VAR_1, const float *VAR_2, uint8_t *VAR_3)
{
    const float *VAR_4 = VAR_2 + 2 * 48;
    float VAR_5, VAR_6[12], VAR_7 = 1.0f;

    FUNC_2(VAR_0, VAR_1, VAR_2, VAR_6, 4, 48, &VAR_7);
    VAR_5 = VAR_6[0];
    FUNC_3(VAR_6, 4);
    VAR_6[0] = VAR_5;
    FUNC_1(VAR_0, VAR_6, VAR_4 + 8, VAR_6 + 4, 4, 4, &VAR_7);
    FUNC_3(VAR_6 + 4, 4);
    FUNC_1(VAR_0, VAR_6, VAR_4 + 8 + 4 * 5, VAR_6 + 8, 4, 8, &VAR_7);
    if (FUNC_0(VAR_6[10], VAR_6[11]) <= FUNC_0(VAR_6[8], VAR_6[9]))
        VAR_3[0] = 1;
    else
        VAR_3[0] = 0;
}
