
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;
typedef unsigned int uint32_t ;
typedef unsigned int uint16_t ;
typedef unsigned int int32_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;

__attribute__((used)) static void FUNC_0(uint8_t *VAR_7, uint8_t *VAR_8,
                         const uint8_t *VAR_9, const uint8_t *VAR_10, const uint8_t *VAR_11,
                         int VAR_12, uint32_t *VAR_13)
{
    uint16_t *VAR_14 = (uint16_t *)VAR_7;
    uint16_t *VAR_15 = (uint16_t *)VAR_8;
    int32_t VAR_16 = VAR_13[VAR_5], VAR_17 = VAR_13[VAR_2], VAR_18 = VAR_13[VAR_0];
    int32_t VAR_19 = VAR_13[VAR_6], VAR_20 = VAR_13[VAR_3], VAR_21 = VAR_13[VAR_1];

    int VAR_22;
    for (VAR_22 = 0; VAR_22 < VAR_12; VAR_22++) {
        unsigned int VAR_23 = VAR_9[2*VAR_22] + VAR_9[2*VAR_22+1];
        unsigned int VAR_24 = VAR_10[2*VAR_22] + VAR_10[2*VAR_22+1];
        unsigned int VAR_25 = VAR_11[2*VAR_22] + VAR_11[2*VAR_22+1];

        VAR_14[VAR_22] = (VAR_16*VAR_25 + VAR_17*VAR_23 + VAR_18*VAR_24 + (0x4001<<(VAR_4-6))) >> (VAR_4-6+1);
        VAR_15[VAR_22] = (VAR_19*VAR_25 + VAR_20*VAR_23 + VAR_21*VAR_24 + (0x4001<<(VAR_4-6))) >> (VAR_4-6+1);
    }
}
