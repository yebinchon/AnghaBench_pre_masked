
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int boolean_t ;


 unsigned long VAR_0 ;

boolean_t FUNC_0(void)
{
  unsigned long VAR_1;

  __asm__ volatile("pushf; pop	%0" : "=r" (VAR_1));
  return (VAR_1 & VAR_0) != 0;
}
