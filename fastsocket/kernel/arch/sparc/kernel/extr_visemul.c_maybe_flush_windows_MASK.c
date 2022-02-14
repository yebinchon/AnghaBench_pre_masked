
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;

__attribute__((used)) static inline void FUNC_1(unsigned int VAR_0, unsigned int VAR_1,
           unsigned int VAR_2, int VAR_3)
{
 if (VAR_1 >= 16 || VAR_0 >= 16 || VAR_2 >= 16) {
  if (VAR_3 != 0)
   __asm__ __volatile__("flushw");
  else
   FUNC_0();
 }
}
