
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int int16_t ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0, const uint8_t *VAR_1, const uint8_t *VAR_2, const uint8_t *VAR_3, int VAR_4, uint32_t *VAR_5)
{
    int16_t *VAR_6 = (int16_t *)VAR_0;
    int VAR_7;
    for (VAR_7=0; VAR_7<VAR_4; VAR_7++) {
        int VAR_8= VAR_1[VAR_7];

        VAR_6[VAR_7]= (VAR_5[VAR_8] >> 24)<<6;
    }
}
