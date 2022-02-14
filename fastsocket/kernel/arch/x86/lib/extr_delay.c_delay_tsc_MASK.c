
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_0)
{
 unsigned long VAR_1, VAR_2;
 int VAR_3;

 FUNC_0();
 VAR_3 = FUNC_5();
 FUNC_2();
 FUNC_3(VAR_1);
 for (;;) {
  FUNC_2();
  FUNC_3(VAR_2);
  if ((VAR_2 - VAR_1) >= VAR_0)
   break;


  FUNC_1();
  FUNC_4();
  FUNC_0();
  if (FUNC_6(VAR_3 != FUNC_5())) {
   VAR_0 -= (VAR_2 - VAR_1);
   VAR_3 = FUNC_5();
   FUNC_2();
   FUNC_3(VAR_1);
  }
 }
 FUNC_1();
}
