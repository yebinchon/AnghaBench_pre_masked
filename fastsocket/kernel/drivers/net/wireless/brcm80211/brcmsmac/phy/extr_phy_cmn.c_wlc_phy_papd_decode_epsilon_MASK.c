
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int s32 ;



void
FUNC_0(u32 VAR_0, s32 *VAR_1, s32 *VAR_2)
{
 *VAR_2 = (VAR_0 >> 13);
 if (*VAR_2 > 0xfff)
  *VAR_2 -= 0x2000;

 *VAR_1 = (VAR_0 & 0x1fff);
 if (*VAR_1 > 0xfff)
  *VAR_1 -= 0x2000;
}
