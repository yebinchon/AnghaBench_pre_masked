
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 () ;
 size_t FUNC_5 () ;
 void** VAR_2 ;

void FUNC_6(void)
{
 unsigned long VAR_3;

 if (FUNC_1())
  return;

 FUNC_3(VAR_3);

 if (FUNC_4()) {
  void *VAR_4, *VAR_5 = VAR_2[FUNC_5()];

  VAR_5 += VAR_1 - 192 - VAR_0;

  __asm__ __volatile__("mov %%sp, %0\n\t"
         "mov %1, %%sp"
         : "=&r" (VAR_4)
         : "r" (VAR_5));
  FUNC_0();
  __asm__ __volatile__("mov %0, %%sp"
         : : "r" (VAR_4));
 }

 FUNC_2(VAR_3);
}
