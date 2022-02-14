
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
typedef int FPU_REG ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int,int ,int ,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,scalar_t__) ;
 int FUNC_13 (int *,scalar_t__) ;
 int FUNC_14 (int *,int ) ;

__attribute__((used)) static int FUNC_15(FPU_REG *VAR_6, u_char VAR_7)
{
 u_char VAR_8 = FUNC_8(VAR_6);

 if (VAR_7 == VAR_2) {
  int VAR_9;

  if (FUNC_7(VAR_6) > -40) {
   if ((VAR_9 = FUNC_14(VAR_6, 0)) == -1) {

    return 1;
   }

   FUNC_9(VAR_6);

   if (VAR_9 & 2)
    FUNC_5(VAR_6);

   FUNC_12(VAR_6, FUNC_8(VAR_6) ^ VAR_8);


   FUNC_10();
   return 0;
  } else {

   FUNC_10();
   return 0;
  }
 }

 if (VAR_7 == VAR_3) {
  FUNC_11(0);
  return 0;
 }

 if (VAR_7 == VAR_1)
  VAR_7 = FUNC_0(VAR_6);

 if (VAR_7 == VAR_4) {
  if (FUNC_6() < 0)
   return 1;



  FUNC_3(VAR_6, VAR_6);

  VAR_7 = FUNC_1(VAR_6, 1, 0, VAR_0, VAR_8);

  FUNC_2(VAR_7);

  return 0;
 } else if (VAR_7 == VAR_5) {

  FUNC_4(0);
  return 1;
 } else {
  FUNC_13(VAR_6, VAR_7);
  return 1;
 }
}
