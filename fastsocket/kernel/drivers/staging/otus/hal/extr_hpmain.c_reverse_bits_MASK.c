
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u32_t ;



u32_t FUNC_0(u32_t VAR_0)
{

    u32_t VAR_1 = 0;
 u8_t VAR_2;

 for (VAR_2=0; VAR_2<8; VAR_2++)
        VAR_1 |= ((VAR_0>>(7-VAR_2) & 0x1) << VAR_2);
 return VAR_1;
}
