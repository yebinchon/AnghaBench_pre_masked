
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef size_t uint32_t ;
typedef int UINT64 ;
typedef int DWORD ;


 int FUNC_0 (int*,size_t) ;

void FUNC_1(DWORD *VAR_0, DWORD *VAR_1, DWORD *VAR_2, uint32_t VAR_3)
{
    DWORD VAR_4;
    DWORD VAR_5;
    DWORD VAR_6;

    VAR_5 = VAR_6 = VAR_4 = 0;
    FUNC_0(VAR_0, VAR_3);


    for (uint32_t VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
        VAR_5 = 0;
        for (uint32_t VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
            uint64_t VAR_9;
            VAR_9 = ((UINT64)VAR_1[VAR_7]) * ((uint64_t) VAR_2[VAR_8]);
            VAR_4 = VAR_9 >> 32;
            VAR_6 = VAR_1[VAR_7] * VAR_2[VAR_8];
            VAR_6 = VAR_6 + VAR_5;
            VAR_5 = (VAR_6 < VAR_5);
            VAR_5 += VAR_4;
            VAR_6 = VAR_6 + VAR_0[VAR_7 + VAR_8];
            VAR_5 += (VAR_6 < VAR_0[VAR_7 + VAR_8]);
            VAR_0[VAR_7 + VAR_8] = VAR_6;
        }
        VAR_0[VAR_7 + VAR_3] = VAR_5;
    }
}
