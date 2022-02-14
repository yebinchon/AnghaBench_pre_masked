
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (int const) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, uint8_t *VAR_1, const uint8_t *VAR_2, const uint8_t *VAR_3,
                        const uint8_t *VAR_4, int VAR_5, uint32_t *VAR_6)
{
    int VAR_7;
    const uint16_t *VAR_8 = (const uint16_t *)VAR_3,
    *VAR_9 = (const uint16_t *)VAR_4;
    uint16_t *VAR_10 = (uint16_t *)VAR_0, *VAR_11 = (uint16_t *)VAR_1;
    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
        VAR_10[VAR_7] = FUNC_0(VAR_8[VAR_7]);
        VAR_11[VAR_7] = FUNC_0(VAR_9[VAR_7]);
    }
}
