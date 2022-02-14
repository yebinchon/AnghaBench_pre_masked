
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;

void
FUNC_0(void)
{

 uint32_t VAR_1 = 0;


 __asm__ volatile("mrc p15, 0, %0, c1, c0, 0"
                  : "=r"(VAR_1));

 VAR_1 &= ~VAR_0;

 __asm__ volatile("mcr p15, 0, %0, c1, c0, 0\n"
                  "isb"
                  :: "r"(VAR_1));

}
