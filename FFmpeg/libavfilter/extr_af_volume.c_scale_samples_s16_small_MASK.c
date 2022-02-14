
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;


 int FUNC_0 (int const) ;

__attribute__((used)) static inline void FUNC_1(uint8_t *VAR_0, const uint8_t *VAR_1,
                                           int VAR_2, int VAR_3)
{
    int VAR_4;
    int16_t *VAR_5 = (int16_t *)VAR_0;
    const int16_t *VAR_6 = (const int16_t *)VAR_1;
    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
        VAR_5[VAR_4] = FUNC_0((VAR_6[VAR_4] * VAR_3 + 128) >> 8);
}
