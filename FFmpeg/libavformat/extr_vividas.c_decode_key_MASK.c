
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 unsigned int* VAR_0 ;

__attribute__((used)) static uint32_t FUNC_0(uint8_t *VAR_1)
{
    uint32_t VAR_2 = 0;

    for (int VAR_3 = 0; VAR_3 < 32; VAR_3++) {
        unsigned VAR_4 = VAR_0[VAR_3];
        VAR_2 |= ((VAR_1[VAR_4] >> ((VAR_3*5+3)&7)) & 1u) << VAR_3;
    }

    return VAR_2;
}
