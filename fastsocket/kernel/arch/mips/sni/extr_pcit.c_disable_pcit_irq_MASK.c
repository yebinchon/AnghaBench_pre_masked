
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int volatile u32 ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;

void FUNC_0(unsigned int VAR_2)
{
 u32 VAR_3 = 1 << (VAR_2 - VAR_1 + 24);

 *(volatile u32 *)VAR_0 &= ~VAR_3;
}
