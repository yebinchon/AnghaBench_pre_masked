
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0, ptrdiff_t VAR_1, const uint8_t *VAR_2,
                           ptrdiff_t VAR_3, ptrdiff_t VAR_4, int VAR_5)
{
    const uint8_t *VAR_6 = VAR_2 + VAR_3;
    const uint8_t *VAR_7 = VAR_2 + VAR_4;
    int VAR_8;
    for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {



        VAR_0[VAR_8] = (1 + VAR_2[VAR_8] + VAR_2[VAR_8] + VAR_6[VAR_8] + VAR_7[VAR_8]) >> 2;
    }
}
