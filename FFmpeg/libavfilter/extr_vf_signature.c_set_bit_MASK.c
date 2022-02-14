
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static void FUNC_0(uint8_t* VAR_0, size_t VAR_1)
{
    uint8_t VAR_2 = 1 << (7-(VAR_1%8));
    VAR_0[VAR_1/8] |= VAR_2;
}
