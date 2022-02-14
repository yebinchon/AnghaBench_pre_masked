
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 uintptr_t FUNC_0 (int,int ,int,int ,int) ;

uintptr_t
FUNC_1(void)
{
 uintptr_t VAR_0;



 __asm__ volatile("mrs %0, TPIDRRO_EL0" : "=r" (VAR_0));

 return VAR_0;
}
