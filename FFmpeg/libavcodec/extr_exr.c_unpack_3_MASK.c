
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;



__attribute__((used)) static void FUNC_0(const uint8_t VAR_0[3], uint16_t VAR_1[16])
{
    int VAR_2;

    VAR_1[0] = (VAR_0[0] << 8) | VAR_0[1];

    if (VAR_1[0] & 0x8000)
        VAR_1[0] &= 0x7fff;
    else
        VAR_1[0] = ~VAR_1[0];

    for (VAR_2 = 1; VAR_2 < 16; VAR_2++)
        VAR_1[VAR_2] = VAR_1[0];
}
