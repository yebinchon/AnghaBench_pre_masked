
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, uint8_t *VAR_1, const uint8_t *VAR_2, const uint8_t *VAR_3,
                       const uint8_t *VAR_4, int VAR_5, uint32_t *VAR_6)
{
    int VAR_7;
    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
        VAR_1[VAR_7] = VAR_3[4 * VAR_7 + 1];
        VAR_0[VAR_7] = VAR_3[4 * VAR_7 + 3];
    }
    FUNC_0(VAR_3 == VAR_4);
}
