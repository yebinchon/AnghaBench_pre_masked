
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int WARegVal; int (* external_reset ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_hw*,int ) ;
 int FUNC_7 (struct ath_hw*,int ,int ,int) ;
 int FUNC_8 (struct ath_hw*,int ,int) ;
 int VAR_24 ;
 int FUNC_9 (struct ath_hw*) ;
 int FUNC_10 (struct ath_hw*) ;
 scalar_t__ FUNC_11 (struct ath_hw*) ;
 int FUNC_12 (struct ath_hw*,int) ;
 int FUNC_13 (struct ath_hw*,int ,int ,int ,int ) ;
 int FUNC_14 (int ,int ,char*) ;
 int FUNC_15 (int ,char*,int) ;
 int FUNC_16 () ;
 int FUNC_17 (int) ;

__attribute__((used)) static bool FUNC_18(struct ath_hw *VAR_25, int VAR_26)
{
 u32 VAR_27;
 u32 VAR_28;

 if (FUNC_0(VAR_25)) {
  FUNC_7(VAR_25, VAR_10,
         VAR_11, 1);
  (void)FUNC_6(VAR_25, VAR_10);
 }

 FUNC_4(VAR_25);

 if (FUNC_1(VAR_25)) {
  FUNC_8(VAR_25, VAR_22, VAR_25->WARegVal);
  FUNC_17(10);
 }

 FUNC_8(VAR_25, VAR_12, VAR_13 |
    VAR_14);

 if (FUNC_0(VAR_25)) {
  VAR_27 = VAR_19 | VAR_18 |
   VAR_16 | VAR_20;
 } else {
  VAR_28 = FUNC_6(VAR_25, VAR_2);
  if (FUNC_3(VAR_25))
   VAR_28 &= VAR_1;
  else
   VAR_28 &= VAR_4 |
      VAR_5;

  if (VAR_28) {
   u32 VAR_29;
   FUNC_8(VAR_25, VAR_3, 0);

   VAR_29 = VAR_9;
   if (!FUNC_1(VAR_25))
    VAR_29 |= VAR_8;
   FUNC_8(VAR_25, VAR_7, VAR_29);

  } else if (!FUNC_1(VAR_25))
   FUNC_8(VAR_25, VAR_7, VAR_8);

  VAR_27 = VAR_19;
  if (VAR_26 == VAR_23)
   VAR_27 |= VAR_18;
 }

 if (FUNC_2(VAR_25)) {
  int VAR_30 = 0;
  int VAR_31;







  for (VAR_31 = 0; VAR_31 < VAR_6; VAR_31++) {
   VAR_30 = FUNC_12(VAR_25, VAR_31);
   if (VAR_30)
    break;
  }

  if (VAR_25->external_reset &&
      (VAR_30 || VAR_26 == VAR_23)) {
   int VAR_32 = 0;

   FUNC_14(FUNC_10(VAR_25), VAR_24,
    "reset MAC via external reset\n");

   VAR_32 = VAR_25->external_reset();
   if (VAR_32) {
    FUNC_15(FUNC_10(VAR_25),
     "External reset failed, err=%d\n",
     VAR_32);
    return 0;
   }

   FUNC_8(VAR_25, VAR_21, 1);
  }
 }

 if (FUNC_11(VAR_25))
  FUNC_9(VAR_25);

 FUNC_8(VAR_25, VAR_15, VAR_27);

 FUNC_5(VAR_25);

 FUNC_17(50);

 FUNC_8(VAR_25, VAR_15, 0);
 if (!FUNC_13(VAR_25, VAR_15, VAR_17, 0, VAR_0)) {
  FUNC_14(FUNC_10(VAR_25), VAR_24, "RTC stuck in MAC reset\n");
  return 0;
 }

 if (!FUNC_0(VAR_25))
  FUNC_8(VAR_25, VAR_7, 0);

 if (FUNC_0(VAR_25))
  FUNC_17(50);

 return 1;
}
