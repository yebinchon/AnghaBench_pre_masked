
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int int32_t ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0, const uint8_t *VAR_1[4], int VAR_2, int32_t *VAR_3)
{
    uint16_t *VAR_4 = (uint16_t *)VAR_0;
    int VAR_5;
    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
        VAR_4[VAR_5] = VAR_1[3][VAR_5] << 6;
}
