
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int ,int ,int ,int ) ;

uint32_t
FUNC_1(void)
{



 uint64_t VAR_0;
 __asm__ volatile("mrs	%0, MIDR_EL1" : "=r" (VAR_0));

 return (uint32_t)VAR_0;
}
