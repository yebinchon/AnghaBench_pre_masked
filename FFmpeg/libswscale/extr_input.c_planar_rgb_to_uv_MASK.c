
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int int32_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;

__attribute__((used)) static void FUNC_0(uint8_t *VAR_7, uint8_t *VAR_8, const uint8_t *VAR_9[4], int VAR_10, int32_t *VAR_11)
{
    uint16_t *VAR_12 = (uint16_t *)VAR_7;
    uint16_t *VAR_13 = (uint16_t *)VAR_8;
    int32_t VAR_14 = VAR_11[VAR_5], VAR_15 = VAR_11[VAR_2], VAR_16 = VAR_11[VAR_0];
    int32_t VAR_17 = VAR_11[VAR_6], VAR_18 = VAR_11[VAR_3], VAR_19 = VAR_11[VAR_1];
    int VAR_20;
    for (VAR_20 = 0; VAR_20 < VAR_10; VAR_20++) {
        int VAR_21 = VAR_9[0][VAR_20];
        int VAR_22 = VAR_9[1][VAR_20];
        int VAR_23 = VAR_9[2][VAR_20];

        VAR_12[VAR_20] = (VAR_14*VAR_23 + VAR_15*VAR_21 + VAR_16*VAR_22 + (0x4001<<(VAR_4-7))) >> (VAR_4-6);
        VAR_13[VAR_20] = (VAR_17*VAR_23 + VAR_18*VAR_21 + VAR_19*VAR_22 + (0x4001<<(VAR_4-7))) >> (VAR_4-6);
    }
}
