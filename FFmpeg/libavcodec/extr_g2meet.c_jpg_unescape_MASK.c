
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static void FUNC_0(const uint8_t *VAR_0, int VAR_1,
                         uint8_t *VAR_2, int *VAR_3)
{
    const uint8_t *VAR_4 = VAR_0 + VAR_1;
    uint8_t *VAR_5 = VAR_2;

    while (VAR_0 < VAR_4) {
        uint8_t VAR_6 = *VAR_0++;

        *VAR_2++ = VAR_6;

        if (VAR_6 == 0xFF && !*VAR_0)
            VAR_0++;
    }
    *VAR_3 = VAR_2 - VAR_5;
}
