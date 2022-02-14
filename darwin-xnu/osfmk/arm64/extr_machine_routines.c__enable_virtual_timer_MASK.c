
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(void)
{
 uint64_t VAR_1 = VAR_0;

 __asm__ volatile ("msr CNTP_CTL_EL0, %0" : : "r"(VAR_1));
}
