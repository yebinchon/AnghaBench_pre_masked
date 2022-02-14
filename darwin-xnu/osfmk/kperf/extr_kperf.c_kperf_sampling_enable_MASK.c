
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,scalar_t__) ;
 scalar_t__ VAR_4 ;

int
FUNC_4(void)
{
 if (VAR_4 == VAR_2) {
  return 0;
 }

 if (VAR_4 != VAR_1) {
  FUNC_3("kperf: sampling was %d when asked to enable", VAR_4);
 }


 if (!VAR_3 || (FUNC_0() == 0)) {
  return VAR_0;
 }


 VAR_4 = VAR_2;
 FUNC_1();


 FUNC_2();

 return 0;
}
