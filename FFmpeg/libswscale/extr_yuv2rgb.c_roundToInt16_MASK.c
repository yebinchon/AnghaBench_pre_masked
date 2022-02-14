
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int int64_t ;



__attribute__((used)) static uint16_t FUNC_0(int64_t VAR_0)
{
    int VAR_1 = (VAR_0 + (1 << 15)) >> 16;

    if (VAR_1 < -0x7FFF)
        return 0x8000;
    else if (VAR_1 > 0x7FFF)
        return 0x7FFF;
    else
        return VAR_1;
}
