
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned long,scalar_t__) ;

int FUNC_1(unsigned long VAR_1, unsigned char *VAR_2,
         unsigned char *VAR_3)
{
 unsigned long VAR_4 = 0, VAR_5 = 0, VAR_6, VAR_7;

 VAR_6 = *(unsigned long *)VAR_2;
 VAR_7 = *(unsigned long *)VAR_3;

 __asm__ __volatile__ (
  "1:  ldr    %1, [%2]  \n"
  "    cmp    %1, %4    \n"
  "2:  streq  %3, [%2]  \n"
  "    cmpne  %1, %3    \n"
  "    movne  %0, #2    \n"
  "3:\n"

  ".section .fixup, \"ax\"\n"
  "4:  mov  %0, #1  \n"
  "    b    3b      \n"
  ".previous\n"

  ".section __ex_table, \"a\"\n"
  "    .long 1b, 4b \n"
  "    .long 2b, 4b \n"
  ".previous\n"

  : "=r"(VAR_4), "=r"(VAR_5)
  : "r"(VAR_1), "r"(VAR_7), "r"(VAR_6), "0"(VAR_4), "1"(VAR_5)
  : "memory");

 if (!VAR_4 && (VAR_5 == VAR_6))
  FUNC_0(VAR_1, VAR_1 + VAR_0);

 return VAR_4;
}
