
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {TYPE_2__* chan; } ;
struct ieee80211_conf {TYPE_3__ chandef; } ;
struct ath_hw {scalar_t__ misc_mode; int slottime; int coverage_class; scalar_t__ globaltxtimeout; struct ath9k_channel* curchan; } ;
struct ath_common {int clockrate; TYPE_1__* hw; } ;
struct ath9k_channel {int dummy; } ;
struct TYPE_5__ {scalar_t__ band; } ;
struct TYPE_4__ {struct ieee80211_conf conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 (struct ath9k_channel const*) ;
 scalar_t__ FUNC_3 (struct ath_hw*,struct ath9k_channel const*) ;
 scalar_t__ FUNC_4 (struct ath9k_channel const*) ;
 scalar_t__ FUNC_5 (struct ath9k_channel const*) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (struct ath_hw*,int ) ;
 int FUNC_8 (struct ath_hw*,int ,int,int) ;
 int FUNC_9 (struct ath_hw*,int ,scalar_t__) ;
 int FUNC_10 (struct ath_hw*,int ,int ) ;
 int VAR_9 ;
 int FUNC_11 (int,int) ;
 struct ath_common* FUNC_12 (struct ath_hw*) ;
 int FUNC_13 (struct ath_hw*,int) ;
 int FUNC_14 (struct ath_hw*,int) ;
 int FUNC_15 (struct ath_hw*,int) ;
 int FUNC_16 (struct ath_hw*,scalar_t__) ;
 int FUNC_17 (struct ath_hw*,int) ;
 int FUNC_18 (struct ath_hw*,int) ;
 int FUNC_19 (struct ath_common*,int ,char*,scalar_t__) ;

void FUNC_20(struct ath_hw *VAR_10)
{
 struct ath_common *VAR_11 = FUNC_12(VAR_10);
 struct ieee80211_conf *VAR_12 = &VAR_11->hw->conf;
 const struct ath9k_channel *VAR_13 = VAR_10->curchan;
 int VAR_14, VAR_15, VAR_16 = 0;
 int VAR_17;
 int VAR_18;
 int VAR_19 = 0, VAR_20 = 0, VAR_21 = 0;
 u32 VAR_22;

 FUNC_19(FUNC_12(VAR_10), VAR_9, "ah->misc_mode 0x%x\n",
  VAR_10->misc_mode);

 if (!VAR_13)
  return;

 if (VAR_10->misc_mode != 0)
  FUNC_9(VAR_10, VAR_2, VAR_10->misc_mode);

 if (FUNC_3(VAR_10, VAR_13))
  VAR_19 = 41;
 else
  VAR_19 = 37;
 VAR_20 = 54;

 if (FUNC_2(VAR_13))
  VAR_18 = 16;
 else
  VAR_18 = 10;

 if (FUNC_4(VAR_13)) {
  VAR_21 = 175;
  VAR_19 *= 2;
  VAR_20 *= 2;
  if (FUNC_3(VAR_10, VAR_13))
      VAR_20 += 11;

  VAR_18 *= 2;
  VAR_16 = 16;
  VAR_17 = 13;
 } else if (FUNC_5(VAR_13)) {
  VAR_21 = 340;
  VAR_19 = (VAR_19 * 4) - 1;
  VAR_20 *= 4;
  if (FUNC_3(VAR_10, VAR_13))
      VAR_20 += 22;

  VAR_18 *= 4;
  VAR_16 = 32;
  VAR_17 = 21;
 } else {
  if (FUNC_0(VAR_10) && FUNC_1(VAR_10)) {
   VAR_21 = VAR_1;
   VAR_22 = VAR_4;
  } else {
   VAR_21 = FUNC_7(VAR_10, VAR_0)/
    VAR_11->clockrate;
   VAR_22 = FUNC_7(VAR_10, VAR_3);
  }
  VAR_19 = FUNC_6(VAR_22, VAR_5);
  VAR_20 = FUNC_6(VAR_22, VAR_6);

  VAR_17 = VAR_10->slottime;
 }


 VAR_17 += 3 * VAR_10->coverage_class;
 VAR_14 = VAR_17 + VAR_18 + VAR_16;
 VAR_15 = VAR_14;
 if (VAR_12->chandef.chan &&
     VAR_12->chandef.chan->band == VAR_8 &&
     !FUNC_4(VAR_13) && !FUNC_5(VAR_13)) {
  VAR_14 += 64 - VAR_18 - VAR_10->slottime;
  VAR_15 += 48 - VAR_18 - VAR_10->slottime;
 }


 FUNC_17(VAR_10, VAR_18);
 FUNC_18(VAR_10, VAR_17);
 FUNC_14(VAR_10, VAR_14);
 FUNC_15(VAR_10, VAR_15);
 if (VAR_10->globaltxtimeout != (u32) -1)
  FUNC_16(VAR_10, VAR_10->globaltxtimeout);

 FUNC_10(VAR_10, VAR_0, FUNC_13(VAR_10, VAR_21));
 FUNC_8(VAR_10, VAR_3,
  (VAR_11->clockrate - 1) |
  FUNC_11(VAR_19, VAR_5) |
  FUNC_11(VAR_20, VAR_6),
  VAR_6 | VAR_5 | VAR_7);

}
