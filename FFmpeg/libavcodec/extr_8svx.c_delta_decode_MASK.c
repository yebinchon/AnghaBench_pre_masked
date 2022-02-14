
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int8_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, const uint8_t *VAR_1, int VAR_2,
                         uint8_t *VAR_3, const int8_t *VAR_4)
{
    uint8_t VAR_5 = *VAR_3;

    while (VAR_2--) {
        uint8_t VAR_6 = *VAR_1++;
        VAR_5 = FUNC_0(VAR_5 + VAR_4[VAR_6 & 0xF]);
        *VAR_0++ = VAR_5;
        VAR_5 = FUNC_0(VAR_5 + VAR_4[VAR_6 >> 4]);
        *VAR_0++ = VAR_5;
    }

    *VAR_3 = VAR_5;
}
