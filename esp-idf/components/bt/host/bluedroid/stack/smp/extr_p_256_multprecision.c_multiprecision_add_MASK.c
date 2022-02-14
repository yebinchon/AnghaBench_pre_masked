
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef scalar_t__ DWORD ;



DWORD FUNC_0(DWORD *VAR_0, DWORD *VAR_1, DWORD *VAR_2, uint32_t VAR_3)
{
    DWORD VAR_4;
    DWORD VAR_5;

    VAR_4 = 0;
    for (uint32_t VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
        VAR_5 = VAR_1[VAR_6] + VAR_4;
        VAR_4 = (VAR_5 < VAR_4);
        VAR_5 += VAR_2[VAR_6];
        VAR_4 |= (VAR_5 < VAR_2[VAR_6]);
        VAR_0[VAR_6] = VAR_5;
    }

    return VAR_4;
}
