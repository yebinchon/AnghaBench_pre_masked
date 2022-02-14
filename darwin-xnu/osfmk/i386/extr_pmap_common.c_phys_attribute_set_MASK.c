
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ppnum_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int* VAR_0 ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void
FUNC_6(
 ppnum_t VAR_3,
 int VAR_4)
{
 int VAR_5;

 FUNC_4();
 FUNC_3(VAR_3 != VAR_1);
 if (VAR_3 == VAR_2)
  return;

 VAR_5 = FUNC_5(VAR_3);

 if (!FUNC_0(VAR_5)) {

  return;
 }

 FUNC_1(VAR_5);
 VAR_0[VAR_5] |= VAR_4;
 FUNC_2(VAR_5);
}
