
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int int16_t ;


 int FUNC_0 (int *,int *,int) ;

void FUNC_1(uint8_t *VAR_0, int16_t VAR_1[4][16],
                               ptrdiff_t VAR_2)
{
    FUNC_0(VAR_0, &VAR_1[0][0], VAR_2);
    FUNC_0(VAR_0 + 4, &VAR_1[1][0], VAR_2);
    FUNC_0(VAR_0 + VAR_2 * 4, &VAR_1[2][0], VAR_2);
    FUNC_0(VAR_0 + VAR_2 * 4 + 4, &VAR_1[3][0], VAR_2);
}
