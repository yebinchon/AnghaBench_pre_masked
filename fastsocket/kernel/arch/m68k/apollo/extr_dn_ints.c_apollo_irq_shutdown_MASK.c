
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_0(unsigned int VAR_2)
{
 if (VAR_2 < 8)
  *(volatile unsigned char *)(VAR_0+1) |= (1 << VAR_2);
 else
  *(volatile unsigned char *)(VAR_1+1) |= (1 << (VAR_2 - 8));
}
