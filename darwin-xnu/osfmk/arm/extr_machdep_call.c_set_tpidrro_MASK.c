
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ,uintptr_t,int,int ,int) ;

void
FUNC_1(uintptr_t VAR_0)
{



 __asm__ volatile("msr TPIDRRO_EL0, %0" : : "r" (VAR_0));

}
