
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {struct ieee80211_channel* chan; } ;
struct TYPE_5__ {TYPE_1__ chandef; } ;
struct ieee80211_hw {TYPE_2__ conf; struct ath9k_htc_priv* priv; } ;
struct ieee80211_channel {int center_freq; } ;
struct ath_hw {int caldata; } ;
struct ath_common {int dummy; } ;
struct TYPE_6__ {int cleanup_timer; int tx_lock; int flags; } ;
struct ath9k_htc_priv {int mutex; TYPE_3__ tx; int htc; int op_flags; int curtxpow; int txpowlimit; struct ath_hw* ah; } ;
struct ath9k_channel {int dummy; } ;
typedef enum htc_phymode { ____Placeholder_htc_phymode } htc_phymode ;
typedef int __be16 ;


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
 struct ath9k_channel* FUNC_2 (struct ieee80211_hw*,struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*,int ,int ,int *) ;
 int FUNC_4 (struct ath9k_htc_priv*) ;
 int FUNC_5 (struct ath9k_htc_priv*,struct ath9k_channel*) ;
 int FUNC_6 (struct ath9k_htc_priv*,int ) ;
 int FUNC_7 (struct ath9k_htc_priv*) ;
 int FUNC_8 (struct ath9k_htc_priv*,int ) ;
 struct ath_common* FUNC_9 (struct ath_hw*) ;
 int FUNC_10 (struct ath_hw*,struct ath9k_channel*,int ,int) ;
 int FUNC_11 (struct ath_common*,int ,char*,...) ;
 int FUNC_12 (struct ath_common*,char*,int,int ) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct ieee80211_hw*) ;
 scalar_t__ VAR_9 ;
 int FUNC_17 (int *,scalar_t__) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static int FUNC_23(struct ieee80211_hw *VAR_10)
{
 struct ath9k_htc_priv *VAR_11 = VAR_10->priv;
 struct ath_hw *VAR_12 = VAR_11->ah;
 struct ath_common *VAR_13 = FUNC_9(VAR_12);
 struct ieee80211_channel *VAR_14 = VAR_10->conf.chandef.chan;
 struct ath9k_channel *VAR_15;
 int VAR_16 = 0;
 enum htc_phymode VAR_17;
 __be16 VAR_18;
 u8 VAR_19;

 FUNC_19(&VAR_11->mutex);

 FUNC_11(VAR_13, VAR_3,
  "Starting driver with initial channel: %d MHz\n",
  VAR_14->center_freq);


 FUNC_6(VAR_11, VAR_2);
 FUNC_0(VAR_6);


 VAR_15 = FUNC_2(VAR_10, VAR_12);

 VAR_16 = FUNC_10(VAR_12, VAR_15, VAR_12->caldata, 0);
 if (VAR_16) {
  FUNC_12(VAR_13,
   "Unable to reset hardware; reset status %d (freq %u MHz)\n",
   VAR_16, VAR_14->center_freq);
  FUNC_20(&VAR_11->mutex);
  return VAR_16;
 }

 FUNC_3(VAR_12, VAR_11->curtxpow, VAR_11->txpowlimit,
          &VAR_11->curtxpow);

 VAR_17 = FUNC_5(VAR_11, VAR_15);
 VAR_18 = FUNC_14(VAR_17);
 FUNC_1(VAR_7, &VAR_18);
 FUNC_0(VAR_5);
 FUNC_0(VAR_8);

 FUNC_4(VAR_11);

 VAR_16 = FUNC_8(VAR_11, 0);
 if (VAR_16)
  FUNC_11(VAR_13, VAR_3,
   "Failed to update capability in target\n");

 FUNC_13(VAR_4, &VAR_11->op_flags);
 FUNC_15(VAR_11->htc);

 FUNC_21(&VAR_11->tx.tx_lock);
 VAR_11->tx.flags &= ~VAR_0;
 FUNC_22(&VAR_11->tx.tx_lock);

 FUNC_16(VAR_10);

 FUNC_17(&VAR_11->tx.cleanup_timer,
    VAR_9 + FUNC_18(VAR_1));

 FUNC_7(VAR_11);

 FUNC_20(&VAR_11->mutex);

 return VAR_16;
}
