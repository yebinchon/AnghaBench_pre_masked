
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int* VAR_0 ;

uint8_t FUNC_0(const uint8_t *VAR_1, size_t VAR_2)
{
    uint8_t VAR_3 = 0;
    for (size_t VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
        VAR_3 = VAR_0[(VAR_3 << 1) ^ VAR_1[VAR_4]];
    }
    return VAR_3;
}
