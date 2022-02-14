
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Task ;
typedef int List ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

bool
FUNC_7(List *VAR_2)
{
 bool VAR_3 = 0;

 if (!VAR_0)
 {
  return 0;
 }

 if (VAR_1)
 {
  FUNC_1(FUNC_3() || FUNC_2());







  return 1;
 }

 VAR_3 = (FUNC_6(VAR_2) == 1);
 if (VAR_3 && FUNC_4((Task *) FUNC_5(VAR_2)))
 {
  return !FUNC_0();
 }

 if (!VAR_3)
 {






  FUNC_1(!VAR_1);

  return 0;
 }

 return 0;
}
