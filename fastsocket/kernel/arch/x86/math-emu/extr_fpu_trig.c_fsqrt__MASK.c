
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
typedef int FPU_REG ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int VAR_6 ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,scalar_t__) ;
 scalar_t__ FUNC_12 (int *,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_13(FPU_REG *VAR_7, u_char VAR_8)
{
 int VAR_9;

 FUNC_5();

 if (VAR_8 == VAR_2) {
  u_char VAR_10;

  if (FUNC_10(VAR_7)) {
   FUNC_4(0);
   return;
  }


  VAR_9 = FUNC_7(VAR_7);

       denormal_arg:

  FUNC_9(VAR_7, (VAR_9 & 1));


  VAR_10 = FUNC_12(VAR_7, 0, 0, VAR_6, VAR_0);
  FUNC_3(VAR_7, VAR_9 >> 1);
  FUNC_1(VAR_10);
  return;
 }

 if (VAR_8 == VAR_3)
  return;

 if (VAR_8 == VAR_1)
  VAR_8 = FUNC_0(VAR_7);

 if (VAR_8 == VAR_5) {
  if (FUNC_10(VAR_7))
   FUNC_4(0);
  return;
 } else if (VAR_8 == VAR_4) {
  if (FUNC_10(VAR_7)) {
   FUNC_4(0);
   return;
  }

  if (FUNC_6() < 0)
   return;

  FUNC_2(VAR_7, VAR_7);

  VAR_9 = FUNC_8(VAR_7);

  goto denormal_arg;
 }

 FUNC_11(VAR_7, VAR_8);

}
