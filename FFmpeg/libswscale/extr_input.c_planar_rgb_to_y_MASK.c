
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int int32_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static void FUNC_0(uint8_t *VAR_4, const uint8_t *VAR_5[4], int VAR_6, int32_t *VAR_7)
{
    uint16_t *VAR_8 = (uint16_t *)VAR_4;
    int32_t VAR_9 = VAR_7[VAR_3], VAR_10 = VAR_7[VAR_1], VAR_11 = VAR_7[VAR_0];
    int VAR_12;
    for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
        int VAR_13 = VAR_5[0][VAR_12];
        int VAR_14 = VAR_5[1][VAR_12];
        int VAR_15 = VAR_5[2][VAR_12];

        VAR_8[VAR_12] = (VAR_9*VAR_15 + VAR_10*VAR_13 + VAR_11*VAR_14 + (0x801<<(VAR_2-7))) >> (VAR_2-6);
    }
}
