
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
typedef int FPU_REG ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int *) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_8 () ;
 int VAR_14 ;
 int FUNC_9 (long*,int) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int *) ;
 long FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_21(FPU_REG *VAR_15, u_char VAR_16)
{
 FPU_REG *VAR_17;
 u_char VAR_18;
 register FPU_REG *VAR_19 = VAR_15;

 if (VAR_6) {
  FUNC_5();
  return;
 }

 FUNC_8();

 if (VAR_16 == VAR_9) {
  long VAR_20;

  FUNC_14();
  VAR_18 = FUNC_13(VAR_19);
  FUNC_16(VAR_19, VAR_17);
  FUNC_17(VAR_17, FUNC_11(VAR_17));

       denormal_arg:

  VAR_20 = FUNC_12(VAR_17);
  FUNC_9(&VAR_20, 1);
  FUNC_18(VAR_17, 0);
  FUNC_20(VAR_17, VAR_18);
  FUNC_4(VAR_9);
  return;
 } else if (VAR_16 == VAR_10) {
  VAR_18 = FUNC_13(VAR_15);

  if (FUNC_3(0, VAR_5) < 0)
   return;

  FUNC_14();
  FUNC_2(&VAR_1, VAR_10);
  FUNC_20(VAR_17, VAR_18);
  return;
 }

 if (VAR_16 == VAR_8)
  VAR_16 = FUNC_1(VAR_15);

 if (VAR_16 == VAR_11) {
  if (FUNC_10() < 0)
   return;

  FUNC_14();
  VAR_18 = FUNC_13(VAR_19);
  FUNC_7(VAR_19, VAR_17);
  goto denormal_arg;
 } else if (VAR_16 == VAR_12) {
  VAR_18 = FUNC_13(VAR_15);
  FUNC_19(VAR_15);
  FUNC_14();
  FUNC_2(&VAR_0, VAR_8);
  FUNC_20(VAR_17, VAR_18);
  return;
 } else if (VAR_16 == VAR_13) {
  if (FUNC_15(VAR_15) < 0)
   return;

  FUNC_14();
  FUNC_2(VAR_15, VAR_8);
  return;
 } else if (VAR_16 == VAR_7) {

  if (VAR_14 & VAR_3) {
   FUNC_6();
   FUNC_14();
   FUNC_6();
  } else
   FUNC_0(VAR_4);
 }




}
