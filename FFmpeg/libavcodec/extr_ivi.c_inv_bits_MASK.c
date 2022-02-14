
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;


 int* VAR_0 ;

__attribute__((used)) static uint16_t FUNC_0(uint16_t VAR_1, int VAR_2)
{
    uint16_t VAR_3;

    if (VAR_2 <= 8) {
        VAR_3 = VAR_0[VAR_1] >> (8 - VAR_2);
    } else
        VAR_3 = ((VAR_0[VAR_1 & 0xFF] << 8) +
               (VAR_0[VAR_1 >> 8])) >> (16 - VAR_2);

    return VAR_3;
}
