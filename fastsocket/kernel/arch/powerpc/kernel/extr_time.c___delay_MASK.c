
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 unsigned long FUNC_3 () ;
 unsigned long FUNC_4 () ;

void FUNC_5(unsigned long VAR_0)
{
 unsigned long VAR_1;
 int VAR_2;

 if (FUNC_2()) {
  VAR_1 = FUNC_3();
  do {

   VAR_2 = FUNC_3() - VAR_1;
   if (VAR_2 < 0)
    VAR_2 += 1000000000;
  } while (VAR_2 < VAR_0);
 } else {
  VAR_1 = FUNC_4();
  while (FUNC_4() - VAR_1 < VAR_0)
   FUNC_0();
  FUNC_1();
 }
}
