
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



uint64_t FUNC_0()
{
 uint64_t VAR_0;




 __asm__ volatile("isb\n"
    "mrs %0, CNTPCT_EL0"
    : "=r"(VAR_0));

 return VAR_0;
}
