
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(int VAR_1, int VAR_2, int VAR_3)
{
 if (FUNC_1(FUNC_0(VAR_0)))
 {
  if (VAR_2 > 0)
  {
   if (VAR_3 == 0)
    FUNC_2("\033[0;32mall test case(s) passed, %d test case(s) skipped, congratulations!\033[0;0m\n", VAR_2);
   else
    FUNC_2("\033[0;31m%d of %d test case(s) passed, %d test case(s) skipped\033[0;0m\n", VAR_1, VAR_3 + VAR_1, VAR_2);
  } else {
   if (VAR_3 == 0)
    FUNC_2("\033[0;32mall test case(s) passed, congratulations!\033[0;0m\n");
   else
    FUNC_2("\033[0;31m%d of %d test case(s) passed\033[0;0m\n", VAR_1, VAR_3 + VAR_1);
  }
 } else {
  if (VAR_2 > 0)
  {
   if (VAR_3 == 0)
    FUNC_2("all test case(s) passed, %d test case(s) skipped, congratulations!\n", VAR_2);
   else
    FUNC_2("%d of %d test case(s) passed, %d test case(s) skipped\n", VAR_1, VAR_3 + VAR_1, VAR_2);
  } else {
   if (VAR_3 == 0)
    FUNC_2("all test case(s) passed, congratulations!\n");
   else
    FUNC_2("%d of %d test case(s) passed\n", VAR_1, VAR_3 + VAR_1);
  }
 }
}
