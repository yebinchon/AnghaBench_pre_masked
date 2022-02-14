
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int DWORD ;


 int VAR_0 ;

void FUNC_0(DWORD *VAR_1, DWORD *VAR_2, uint32_t VAR_3)
{
    int VAR_4;
    DWORD VAR_5 = 1;

    VAR_4 = VAR_0 - VAR_5;

    DWORD VAR_6 = 0;
    DWORD VAR_7;
    for (int VAR_8 = VAR_3 - 1; VAR_8 >= 0; VAR_8--) {
        VAR_7 = VAR_2[VAR_8];
        VAR_1[VAR_8] = (VAR_7 >> VAR_5) | VAR_6;
        VAR_6 = VAR_7 << VAR_4;
    }
}
