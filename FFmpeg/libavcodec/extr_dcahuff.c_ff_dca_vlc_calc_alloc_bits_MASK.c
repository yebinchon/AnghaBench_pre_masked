
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint32_t ;


 scalar_t__** VAR_0 ;

uint32_t FUNC_0(int *VAR_1, uint8_t VAR_2, uint8_t VAR_3)
{
    uint8_t VAR_4, VAR_5;
    uint32_t VAR_6 = 0;
    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        VAR_5 = VAR_1[VAR_4] - 1;
        VAR_6 += VAR_0[VAR_3][VAR_5];
    }
    return VAR_6;
}
