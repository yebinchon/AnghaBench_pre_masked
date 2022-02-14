
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int proc_t ;
typedef int errno_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_8 ;

__attribute__((used)) static errno_t
FUNC_8(void)
{
 int VAR_9 = 0;

 FUNC_2();

 if ((VAR_9 = FUNC_5(FUNC_1(), VAR_4, 0))) {
  return VAR_9;
 }





 if (VAR_8) {
  if (VAR_7 == VAR_3) {






   if (FUNC_3() == VAR_1) {
    return VAR_0;
   }
  }
  VAR_8 = 0;
 }

 proc_t VAR_10 = FUNC_0();

 VAR_6 = FUNC_7(VAR_10);
 VAR_5 = FUNC_6(VAR_10);

 if (VAR_7 == VAR_2) {
  FUNC_4(VAR_10);
 }

 return 0;
}
