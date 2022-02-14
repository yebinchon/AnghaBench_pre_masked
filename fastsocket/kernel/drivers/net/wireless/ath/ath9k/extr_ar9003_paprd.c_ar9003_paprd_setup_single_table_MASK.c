
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int max_txchains; } ;
struct ath_hw {int paprd_ratemask; int paprd_target_power; int paprd_training_power; int paprd_ratemask_ht40; int curchan; TYPE_1__ caps; } ;
struct ath_common {int dummy; } ;


 int const VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int VAR_9 ;
 int VAR_10 ;
 int const VAR_11 ;
 int VAR_12 ;
 int const VAR_13 ;
 int const VAR_14 ;
 int const VAR_15 ;
 int const VAR_16 ;
 int const VAR_17 ;
 int const VAR_18 ;
 int const VAR_19 ;
 int const VAR_20 ;
 int VAR_21 ;
 int const VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int const VAR_30 ;
 int VAR_31 ;
 int const VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int const VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 scalar_t__ FUNC_5 (struct ath_hw*) ;
 int VAR_44 ;
 int VAR_45 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct ath_hw*,int const,int ,int) ;
 int FUNC_8 (struct ath_hw*) ;
 int FUNC_9 (struct ath_hw*) ;
 int FUNC_10 (struct ath_hw*,int) ;
 struct ath_common* FUNC_11 (struct ath_hw*) ;
 int FUNC_12 (struct ath_common*,int ,char*,...) ;

__attribute__((used)) static int FUNC_13(struct ath_hw *VAR_46)
{
 struct ath_common *VAR_47 = FUNC_11(VAR_46);
 static const u32 VAR_48[3] = {
  133,
  132,
  131
 };
 static const u32 VAR_49[3] = {
  130,
  129,
  128
 };
 int VAR_50;
 int VAR_51, VAR_52;
 u32 VAR_53 = VAR_46->paprd_ratemask;

 if (FUNC_6(VAR_46->curchan))
  VAR_50 = FUNC_8(VAR_46);
 else
  VAR_50 = FUNC_9(VAR_46);

 FUNC_12(VAR_47, VAR_44, "Training power: %d, Target power: %d\n",
  VAR_50, VAR_46->paprd_target_power);

 if (VAR_50 < 0) {
  FUNC_12(VAR_47, VAR_44,
   "PAPRD target power delta out of range\n");
  return -VAR_45;
 }
 VAR_46->paprd_training_power = VAR_50;

 if (FUNC_0(VAR_46))
  VAR_53 = 0;

 FUNC_7(VAR_46, VAR_0, VAR_1,
        VAR_46->paprd_ratemask);
 FUNC_7(VAR_46, VAR_2, VAR_3,
        VAR_53);
 FUNC_7(VAR_46, VAR_11, VAR_12,
        VAR_46->paprd_ratemask_ht40);

 FUNC_12(VAR_47, VAR_44, "PAPRD HT20 mask: 0x%x, HT40 mask: 0x%x\n",
  VAR_46->paprd_ratemask, VAR_46->paprd_ratemask_ht40);

 for (VAR_51 = 0; VAR_51 < VAR_46->caps.max_txchains; VAR_51++) {
  FUNC_7(VAR_46, VAR_48[VAR_51],
         VAR_5, 1);
  FUNC_7(VAR_46, VAR_49[VAR_51],
         VAR_7, 1);
  FUNC_7(VAR_46, VAR_49[VAR_51],
         VAR_6, 1);
  FUNC_7(VAR_46, VAR_49[VAR_51],
         VAR_8, 0);
  FUNC_7(VAR_46, VAR_49[VAR_51],
         VAR_10, 181);
  FUNC_7(VAR_46, VAR_49[VAR_51],
         VAR_9, 361);
  FUNC_7(VAR_46, VAR_49[VAR_51],
         VAR_8, 0);
  FUNC_7(VAR_46, VAR_48[VAR_51],
         VAR_4, 3);
 }

 FUNC_10(VAR_46, 0);

 FUNC_7(VAR_46, VAR_22,
        VAR_27, 0x30);
 FUNC_7(VAR_46, VAR_22,
        VAR_26, 1);
 FUNC_7(VAR_46, VAR_22,
        VAR_29, 1);
 FUNC_7(VAR_46, VAR_22,
        VAR_28, 0);
 FUNC_7(VAR_46, VAR_22,
        VAR_25, 0);
 FUNC_7(VAR_46, VAR_22,
        VAR_24, 28);
 FUNC_7(VAR_46, VAR_22,
        VAR_23, 1);

 if (FUNC_3(VAR_46)) {
  VAR_52 = 148;
 } else {
  if (FUNC_6(VAR_46->curchan)) {
   if (FUNC_2(VAR_46) || FUNC_5(VAR_46))
    VAR_52 = 145;
   else
    VAR_52 = 147;
  } else {
   VAR_52 = 137;
  }
 }

 FUNC_7(VAR_46, VAR_30,
        VAR_31, VAR_52);
 FUNC_7(VAR_46, VAR_32,
        VAR_36, 4);
 FUNC_7(VAR_46, VAR_32,
        VAR_35, 4);
 FUNC_7(VAR_46, VAR_32,
        VAR_38, 7);
 FUNC_7(VAR_46, VAR_32,
        VAR_37, 1);

 if (FUNC_3(VAR_46) ||
     FUNC_2(VAR_46) ||
     FUNC_5(VAR_46) ||
     FUNC_4(VAR_46) ||
     FUNC_0(VAR_46) ||
     FUNC_1(VAR_46))
  FUNC_7(VAR_46, VAR_32,
         VAR_39, -3);
 else
  FUNC_7(VAR_46, VAR_32,
         VAR_39, -6);

 VAR_52 = -10;

 if (FUNC_6(VAR_46->curchan) && !FUNC_2(VAR_46) && !FUNC_5(VAR_46))
  VAR_52 = -15;

 FUNC_7(VAR_46, VAR_32,
        VAR_33,
        VAR_52);
 FUNC_7(VAR_46, VAR_32,
        VAR_34, 1);
 FUNC_7(VAR_46, VAR_40,
        VAR_43, 0);
 FUNC_7(VAR_46, VAR_40,
        VAR_41, 400);
 FUNC_7(VAR_46, VAR_40,
        VAR_42,
        100);
 FUNC_7(VAR_46, VAR_13,
        VAR_21, 261376);
 FUNC_7(VAR_46, VAR_14,
        VAR_21, 248079);
 FUNC_7(VAR_46, VAR_15,
        VAR_21, 233759);
 FUNC_7(VAR_46, VAR_16,
        VAR_21, 220464);
 FUNC_7(VAR_46, VAR_17,
        VAR_21, 208194);
 FUNC_7(VAR_46, VAR_18,
        VAR_21, 196949);
 FUNC_7(VAR_46, VAR_19,
        VAR_21, 185706);
 FUNC_7(VAR_46, VAR_20,
        VAR_21, 175487);
 return 0;
}
