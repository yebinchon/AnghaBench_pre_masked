
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



int FUNC_0(intptr_t VAR_0)
{
    if (VAR_0 < 0x20000000 || VAR_0 >= 0x80000000) {

        return -1;
    }
    uint32_t VAR_1 = *(uint32_t *)(VAR_0 & (~3));
    uint32_t VAR_2 = (VAR_0 & 3) * 8;
    return (VAR_1 >> VAR_2) & 0xff;
}
