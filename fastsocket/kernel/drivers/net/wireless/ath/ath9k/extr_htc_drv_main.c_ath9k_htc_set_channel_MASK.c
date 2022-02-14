
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {struct ieee80211_channel* chan; } ;
struct TYPE_9__ {int flags; TYPE_2__ chandef; } ;
struct ieee80211_hw {TYPE_4__ conf; } ;
struct ieee80211_conf {int dummy; } ;
struct ieee80211_channel {int center_freq; } ;
struct ath_hw {TYPE_3__* curchan; } ;
struct ath_common {TYPE_1__* hw; } ;
struct ath9k_hw_cal_data {int dummy; } ;
struct TYPE_10__ {int cleanup_timer; } ;
struct ath9k_htc_priv {TYPE_5__ tx; int op_flags; int htc; int curtxpow; int txpowlimit; struct ath9k_hw_cal_data caldata; struct ath_hw* ah; } ;
struct ath9k_channel {int dummy; } ;
typedef enum htc_phymode { ____Placeholder_htc_phymode } htc_phymode ;
typedef int __be16 ;
struct TYPE_8__ {int channel; } ;
struct TYPE_6__ {struct ieee80211_conf conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct ath_hw*,int ,int ,int *) ;
 int FUNC_3 (struct ath9k_htc_priv*) ;
 int FUNC_4 (struct ath9k_htc_priv*,struct ath9k_channel*) ;
 int FUNC_5 (struct ath9k_htc_priv*) ;
 int FUNC_6 (struct ath9k_htc_priv*) ;
 int FUNC_7 (struct ath9k_htc_priv*) ;
 int FUNC_8 (struct ath9k_htc_priv*) ;
 struct ath_common* FUNC_9 (struct ath_hw*) ;
 int FUNC_10 (struct ath_hw*,struct ath9k_channel*,struct ath9k_hw_cal_data*,int) ;
 int FUNC_11 (struct ath9k_htc_priv*) ;
 int FUNC_12 (struct ath_common*,int ,char*,int ,int ,int ,int ,int) ;
 int FUNC_13 (struct ath_common*,char*,int ,int) ;
 int FUNC_14 (struct ieee80211_conf*) ;
 int FUNC_15 (struct ieee80211_conf*) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_19 (int *,scalar_t__) ;
 scalar_t__ FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int ,int *) ;

__attribute__((used)) static int FUNC_22(struct ath9k_htc_priv *VAR_13,
     struct ieee80211_hw *VAR_14,
     struct ath9k_channel *VAR_15)
{
 struct ath_hw *VAR_16 = VAR_13->ah;
 struct ath_common *VAR_17 = FUNC_9(VAR_16);
 struct ieee80211_conf *VAR_18 = &VAR_17->hw->conf;
 bool VAR_19;
 struct ieee80211_channel *VAR_20 = VAR_14->conf.chandef.chan;
 struct ath9k_hw_cal_data *VAR_21 = ((void*)0);
 enum htc_phymode VAR_22;
 __be16 VAR_23;
 u8 VAR_24;
 int VAR_25;

 if (FUNC_21(VAR_4, &VAR_13->op_flags))
  return -VAR_2;

 VAR_19 = !!(VAR_14->conf.flags & VAR_3);

 FUNC_6(VAR_13);

 FUNC_17(&VAR_13->tx.cleanup_timer);
 FUNC_7(VAR_13);

 FUNC_0(VAR_6);
 FUNC_0(VAR_7);
 FUNC_0(VAR_11);

 FUNC_11(VAR_13);

 FUNC_12(VAR_17, VAR_1,
  "(%u MHz) -> (%u MHz), HT: %d, HT40: %d fastcc: %d\n",
  VAR_13->ah->curchan->channel,
  VAR_20->center_freq, FUNC_14(VAR_18), FUNC_15(VAR_18),
  VAR_19);

 if (!VAR_19)
  VAR_21 = &VAR_13->caldata;

 VAR_25 = FUNC_10(VAR_16, VAR_15, VAR_21, VAR_19);
 if (VAR_25) {
  FUNC_13(VAR_17,
   "Unable to reset channel (%u Mhz) reset status %d\n",
   VAR_20->center_freq, VAR_25);
  goto err;
 }

 FUNC_2(VAR_16, VAR_13->curtxpow, VAR_13->txpowlimit,
          &VAR_13->curtxpow);

 FUNC_0(VAR_10);
 if (VAR_25)
  goto err;

 FUNC_3(VAR_13);

 VAR_22 = FUNC_4(VAR_13, VAR_15);
 VAR_23 = FUNC_16(VAR_22);
 FUNC_1(VAR_9, &VAR_23);
 if (VAR_25)
  goto err;

 FUNC_0(VAR_8);
 if (VAR_25)
  goto err;

 FUNC_18(VAR_13->htc);

 if (!FUNC_21(VAR_5, &VAR_13->op_flags) &&
     !(VAR_14->conf.flags & VAR_3))
  FUNC_8(VAR_13);

 FUNC_19(&VAR_13->tx.cleanup_timer,
    VAR_12 + FUNC_20(VAR_0));

err:
 FUNC_5(VAR_13);
 return VAR_25;
}
