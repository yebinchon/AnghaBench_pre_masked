
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int proc_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_5 () ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_7 (int ) ;

int
FUNC_8(uint32_t VAR_9)
{
 FUNC_4();
 FUNC_0(VAR_9 != 0);

 proc_t VAR_10 = FUNC_1();


 if (FUNC_7(VAR_10) == VAR_7) {
  VAR_4 |= VAR_9;
  return 0;
 }


 if (FUNC_7(VAR_10) == VAR_5 &&
     VAR_8 == VAR_3)
 {
  return VAR_0;
 }

 FUNC_5();


 if (VAR_7 == 0 || VAR_8 == VAR_2) {
  if (!FUNC_3(FUNC_2())) {
   return VAR_1;
  }

  VAR_6 = 0;
  FUNC_6(VAR_10);
  VAR_4 |= VAR_9;
  return 0;
 }


 return VAR_0;
}
