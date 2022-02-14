
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ FUNC_0 (scalar_t__ const) ;

__attribute__((used)) static void FUNC_1(const uint8_t *VAR_0, uint8_t *VAR_1, const uint8_t *VAR_2, const uint8_t *VAR_3, int VAR_4)
{
    for (int VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
        VAR_1[VAR_5] = FUNC_0(VAR_0[VAR_5] - VAR_3[VAR_5]) > FUNC_0(VAR_0[VAR_5] - VAR_2[VAR_5]) ? VAR_3[VAR_5] : VAR_2[VAR_5];
}
