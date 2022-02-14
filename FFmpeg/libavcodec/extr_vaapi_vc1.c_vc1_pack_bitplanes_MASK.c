
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static inline void FUNC_0(uint8_t *VAR_0, int VAR_1, const uint8_t *VAR_2[3], int VAR_3, int VAR_4, int VAR_5)
{
    const int VAR_6 = VAR_1 / 2;
    const int VAR_7 = VAR_4 * VAR_5 + VAR_3;
    uint8_t VAR_8 = 0;
    if (VAR_2[0])
        VAR_8 = VAR_2[0][VAR_7];
    if (VAR_2[1])
        VAR_8 |= VAR_2[1][VAR_7] << 1;
    if (VAR_2[2])
        VAR_8 |= VAR_2[2][VAR_7] << 2;
    VAR_0[VAR_6] = (VAR_0[VAR_6] << 4) | VAR_8;
}
