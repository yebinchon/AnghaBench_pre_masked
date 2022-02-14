
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpumask_t ;
typedef scalar_t__ cpu_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (int *) ;
 int VAR_3 ;

void
FUNC_8(cpumask_t VAR_4)
{
 cpu_t VAR_5;
 boolean_t VAR_6 = VAR_0;

 VAR_6 = FUNC_5(VAR_0);
 FUNC_6(&VAR_3);

 for (VAR_5 = 0; VAR_5 < (cpu_t) VAR_2; VAR_5++) {
  if ((VAR_5 == (cpu_t) FUNC_2())
   || ((FUNC_3(VAR_5) & VAR_4) == 0)
   || !FUNC_1(VAR_5))
  {
    continue;
  }

  FUNC_4(VAR_5, FUNC_0(VAR_1));
 }

 FUNC_7(&VAR_3);
 FUNC_5(VAR_6);
}
