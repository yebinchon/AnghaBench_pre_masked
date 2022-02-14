
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint32_t ;
typedef size_t uint16_t ;
typedef size_t int16_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, uint8_t *VAR_1,
                           const uint8_t *VAR_2, const uint8_t *VAR_3, const uint8_t *VAR_4,
                      int VAR_5, uint32_t *VAR_6)
{
    uint16_t *VAR_7 = (uint16_t *)VAR_0;
    int16_t *VAR_8 = (int16_t *)VAR_1;
    int VAR_9;
    FUNC_0(VAR_3 == VAR_4);
    for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
        int VAR_10 = VAR_6[VAR_3[VAR_9]];

        VAR_7[VAR_9] = (uint8_t)(VAR_10>> 8)<<6;
        VAR_8[VAR_9] = (uint8_t)(VAR_10>>16)<<6;
    }
}
