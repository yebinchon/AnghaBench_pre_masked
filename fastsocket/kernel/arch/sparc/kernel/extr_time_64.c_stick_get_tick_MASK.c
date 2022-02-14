
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;

__attribute__((used)) static unsigned long long FUNC_0(void)
{
 unsigned long VAR_1;

 __asm__ __volatile__("rd	%%asr24, %0"
        : "=r" (VAR_1));

 return VAR_1 & ~VAR_0;
}
