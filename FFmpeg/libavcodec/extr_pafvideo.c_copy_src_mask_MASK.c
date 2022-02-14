
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0, int VAR_1, uint8_t VAR_2, const uint8_t *VAR_3)
{
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
        if (VAR_2 & (1 << (7 - VAR_4)))
            VAR_0[VAR_4] = VAR_3[VAR_4];
        if (VAR_2 & (1 << (3 - VAR_4)))
            VAR_0[VAR_1 + VAR_4] = VAR_3[VAR_1 + VAR_4];
    }
}
