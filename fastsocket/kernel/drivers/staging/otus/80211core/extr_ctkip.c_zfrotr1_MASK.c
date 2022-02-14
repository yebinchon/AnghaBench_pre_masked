
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16_t ;



u16_t FUNC_0(u16_t VAR_0)

{
    u16_t VAR_1;

    if (VAR_0 & 0x01)
    {
        VAR_1 = (VAR_0 >> 1) | 0x8000;
    }
    else
    {
        VAR_1 = (VAR_0 >> 1) & 0x7fff;
    }
    return VAR_1;
}
