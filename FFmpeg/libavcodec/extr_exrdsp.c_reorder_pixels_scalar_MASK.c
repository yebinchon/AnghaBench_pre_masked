
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0, const uint8_t *VAR_1, ptrdiff_t VAR_2)
{
    const uint8_t *VAR_3 = VAR_1;
    int VAR_4 = VAR_2 / 2;
    const uint8_t *VAR_5 = VAR_1 + VAR_4;
    uint8_t *VAR_6 = VAR_0;
    int VAR_7;

    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
        *(VAR_6++) = *(VAR_3++);
        *(VAR_6++) = *(VAR_5++);
    }
}
