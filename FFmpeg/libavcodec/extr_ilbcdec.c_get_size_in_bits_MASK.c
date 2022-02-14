
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int16_t ;



__attribute__((used)) static int16_t FUNC_0(uint32_t VAR_0)
{
    int16_t VAR_1;

    if (0xFFFF0000 & VAR_0) {
        VAR_1 = 16;
    } else {
        VAR_1 = 0;
    }

    if (0x0000FF00 & (VAR_0 >> VAR_1)) VAR_1 += 8;
    if (0x000000F0 & (VAR_0 >> VAR_1)) VAR_1 += 4;
    if (0x0000000C & (VAR_0 >> VAR_1)) VAR_1 += 2;
    if (0x00000002 & (VAR_0 >> VAR_1)) VAR_1 += 1;
    if (0x00000001 & (VAR_0 >> VAR_1)) VAR_1 += 1;

    return VAR_1;
}
