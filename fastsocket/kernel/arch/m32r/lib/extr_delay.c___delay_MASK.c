
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(unsigned long VAR_0)
{
 __asm__ __volatile__ (
  "beqz	%0, 2f			\n\t"
  " .fillinsn			\n\t"
  "1:				\n\t"
  "addi	%0, #-1			\n\t"
  "blez	%0, 2f			\n\t"
  "addi	%0, #-1			\n\t"
  "blez	%0, 2f			\n\t"
  "addi	%0, #-1			\n\t"
  "blez	%0, 2f			\n\t"
  "addi	%0, #-1			\n\t"
  "bgtz	%0, 1b			\n\t"
  " .fillinsn			\n\t"
  "2:				\n\t"
  : "+r" (VAR_0)
  : "r" (0)
 );

}
