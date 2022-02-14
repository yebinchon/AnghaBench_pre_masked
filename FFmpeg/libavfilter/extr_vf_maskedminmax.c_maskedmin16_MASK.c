
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;


 scalar_t__ FUNC_0 (scalar_t__ const) ;

__attribute__((used)) static void FUNC_1(const uint8_t *VAR_0, uint8_t *VAR_1, const uint8_t *VAR_2, const uint8_t *VAR_3, int VAR_4)
{
    const uint16_t *VAR_5 = (const uint16_t *)VAR_0;
    const uint16_t *VAR_6 = (const uint16_t *)VAR_2;
    const uint16_t *VAR_7 = (const uint16_t *)VAR_3;
    uint16_t *VAR_8 = (uint16_t *)VAR_1;

    for (int VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
        VAR_8[VAR_9] = FUNC_0(VAR_5[VAR_9] - VAR_7[VAR_9]) < FUNC_0(VAR_5[VAR_9] - VAR_6[VAR_9]) ? VAR_7[VAR_9] : VAR_6[VAR_9];
}
