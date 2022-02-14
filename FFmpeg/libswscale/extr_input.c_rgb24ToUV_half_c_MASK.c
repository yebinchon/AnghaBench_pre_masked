
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;
typedef int int16_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_7, uint8_t *VAR_8, const uint8_t *VAR_9, const uint8_t *VAR_10,
                             const uint8_t *VAR_11, int VAR_12, uint32_t *VAR_13)
{
    int16_t *VAR_14 = (int16_t *)VAR_7;
    int16_t *VAR_15 = (int16_t *)VAR_8;
    int VAR_16;
    int32_t VAR_17 = VAR_13[VAR_5], VAR_18 = VAR_13[VAR_2], VAR_19 = VAR_13[VAR_0];
    int32_t VAR_20 = VAR_13[VAR_6], VAR_21 = VAR_13[VAR_3], VAR_22 = VAR_13[VAR_1];
    FUNC_0(VAR_10 == VAR_11);
    for (VAR_16 = 0; VAR_16 < VAR_12; VAR_16++) {
        int VAR_23 = VAR_10[6 * VAR_16 + 0] + VAR_10[6 * VAR_16 + 3];
        int VAR_24 = VAR_10[6 * VAR_16 + 1] + VAR_10[6 * VAR_16 + 4];
        int VAR_25 = VAR_10[6 * VAR_16 + 2] + VAR_10[6 * VAR_16 + 5];

        VAR_14[VAR_16] = (VAR_17*VAR_23 + VAR_18*VAR_24 + VAR_19*VAR_25 + (256<<VAR_4) + (1<<(VAR_4-6)))>>(VAR_4-5);
        VAR_15[VAR_16] = (VAR_20*VAR_23 + VAR_21*VAR_24 + VAR_22*VAR_25 + (256<<VAR_4) + (1<<(VAR_4-6)))>>(VAR_4-5);
    }
}
