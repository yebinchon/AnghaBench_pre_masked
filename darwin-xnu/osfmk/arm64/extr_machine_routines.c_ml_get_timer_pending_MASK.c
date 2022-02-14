
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

boolean_t
FUNC_0()
{
 uint64_t VAR_3;

 __asm__ volatile("mrs %0, CNTP_CTL_EL0" : "=r"(VAR_3));
 return ((VAR_3 & VAR_0) != 0) ? VAR_2 : VAR_1;
}
