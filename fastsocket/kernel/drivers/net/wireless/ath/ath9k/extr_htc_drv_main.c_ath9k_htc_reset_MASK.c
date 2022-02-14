
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_channel {int center_freq; } ;
struct ath_hw {int curchan; } ;
struct ath_common {int dummy; } ;
struct ath9k_hw_cal_data {int dummy; } ;
struct TYPE_8__ {int cleanup_timer; } ;
struct ath9k_htc_priv {int mutex; TYPE_3__ tx; TYPE_4__* hw; int htc; int curtxpow; int txpowlimit; struct ath9k_hw_cal_data caldata; struct ath_hw* ah; } ;
typedef enum htc_phymode { ____Placeholder_htc_phymode } htc_phymode ;
typedef int __be16 ;
struct TYPE_6__ {struct ieee80211_channel* chan; } ;
struct TYPE_7__ {TYPE_1__ chandef; } ;
struct TYPE_9__ {TYPE_2__ conf; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct ath_hw*,int ,int ,int *) ;
 int FUNC_3 (struct ath9k_htc_priv*) ;
 int FUNC_4 (struct ath9k_htc_priv*,int ) ;
 int FUNC_5 (struct ath9k_htc_priv*) ;
 int FUNC_6 (struct ath9k_htc_priv*) ;
 int FUNC_7 (struct ath9k_htc_priv*) ;
 int FUNC_8 (struct ath9k_htc_priv*) ;
 int FUNC_9 (struct ath9k_htc_priv*) ;
 struct ath_common* FUNC_10 (struct ath_hw*) ;
 int FUNC_11 (struct ath_hw*,int ,struct ath9k_hw_cal_data*,int) ;
 int FUNC_12 (struct ath9k_htc_priv*) ;
 int FUNC_13 (struct ath_common*,char*,int ,int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (TYPE_4__*) ;
 int FUNC_18 (TYPE_4__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_19 (int *,scalar_t__) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;

void FUNC_23(struct ath9k_htc_priv *VAR_8)
{
 struct ath_hw *VAR_9 = VAR_8->ah;
 struct ath_common *VAR_10 = FUNC_10(VAR_9);
 struct ieee80211_channel *VAR_11 = VAR_8->hw->conf.chandef.chan;
 struct ath9k_hw_cal_data *VAR_12 = ((void*)0);
 enum htc_phymode VAR_13;
 __be16 VAR_14;
 u8 VAR_15;
 int VAR_16;

 FUNC_21(&VAR_8->mutex);
 FUNC_6(VAR_8);

 FUNC_7(VAR_8);
 FUNC_17(VAR_8->hw);

 FUNC_15(&VAR_8->tx.cleanup_timer);
 FUNC_8(VAR_8);

 FUNC_0(VAR_1);
 FUNC_0(VAR_2);
 FUNC_0(VAR_6);

 FUNC_12(VAR_8);

 VAR_12 = &VAR_8->caldata;
 VAR_16 = FUNC_11(VAR_9, VAR_9->curchan, VAR_12, 0);
 if (VAR_16) {
  FUNC_13(VAR_10,
   "Unable to reset device (%u Mhz) reset status %d\n",
   VAR_11->center_freq, VAR_16);
 }

 FUNC_2(VAR_9, VAR_8->curtxpow, VAR_8->txpowlimit,
          &VAR_8->curtxpow);

 FUNC_0(VAR_5);
 FUNC_3(VAR_8);

 VAR_13 = FUNC_4(VAR_8, VAR_9->curchan);
 VAR_14 = FUNC_14(VAR_13);
 FUNC_1(VAR_4, &VAR_14);

 FUNC_0(VAR_3);
 FUNC_16(VAR_8->htc);
 FUNC_9(VAR_8);
 FUNC_18(VAR_8->hw);

 FUNC_19(&VAR_8->tx.cleanup_timer,
    VAR_7 + FUNC_20(VAR_0));

 FUNC_5(VAR_8);
 FUNC_22(&VAR_8->mutex);
}
