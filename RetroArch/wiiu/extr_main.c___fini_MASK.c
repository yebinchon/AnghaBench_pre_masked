
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;

__attribute__((weak))
void FUNC_1(void)
{
   extern void (*const VAR_0)(void);
   extern void (*const VAR_1)(void);

   void (*const *VAR_2)(void) = &VAR_0;
   while (VAR_2 < &VAR_1) {
      (*VAR_2++)();
   }
}
