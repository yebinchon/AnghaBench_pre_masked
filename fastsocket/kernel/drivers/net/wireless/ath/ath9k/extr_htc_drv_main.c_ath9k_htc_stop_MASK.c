
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_hw {struct ath9k_htc_priv* priv; } ;
struct ath_hw {scalar_t__ is_monitoring; } ;
struct ath_common {int dummy; } ;
struct TYPE_2__ {int cleanup_timer; } ;
struct ath9k_htc_priv {int mutex; int op_flags; struct ath_hw* ah; int led_work; int ps_work; int fatal_work; TYPE_1__ tx; int rx_tasklet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ath9k_htc_priv*) ;
 int FUNC_2 (struct ath9k_htc_priv*) ;
 int FUNC_3 (struct ath9k_htc_priv*) ;
 int FUNC_4 (struct ath9k_htc_priv*,int ) ;
 int FUNC_5 (struct ath9k_htc_priv*) ;
 int FUNC_6 (struct ath9k_htc_priv*) ;
 int FUNC_7 (struct ath9k_htc_priv*) ;
 struct ath_common* FUNC_8 (struct ath_hw*) ;
 int FUNC_9 (struct ath_hw*) ;
 int FUNC_10 (struct ath_hw*) ;
 int FUNC_11 (struct ath9k_htc_priv*) ;
 int FUNC_12 (struct ath_common*,int ,char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int ,int *) ;

__attribute__((used)) static void FUNC_20(struct ieee80211_hw *VAR_7)
{
 struct ath9k_htc_priv *VAR_8 = VAR_7->priv;
 struct ath_hw *VAR_9 = VAR_8->ah;
 struct ath_common *VAR_10 = FUNC_8(VAR_9);
 int VAR_11 __attribute__ ((unused));
 u8 VAR_12;

 FUNC_15(&VAR_8->mutex);

 if (FUNC_19(VAR_3, &VAR_8->op_flags)) {
  FUNC_12(VAR_10, VAR_0, "Device not present\n");
  FUNC_16(&VAR_8->mutex);
  return;
 }

 FUNC_2(VAR_8);

 FUNC_0(VAR_4);
 FUNC_0(VAR_5);
 FUNC_0(VAR_6);

 FUNC_18(&VAR_8->rx_tasklet);

 FUNC_14(&VAR_8->tx.cleanup_timer);
 FUNC_7(VAR_8);
 FUNC_11(VAR_8);

 FUNC_16(&VAR_8->mutex);


 FUNC_13(&VAR_8->fatal_work);
 FUNC_13(&VAR_8->ps_work);




 FUNC_5(VAR_8);

 FUNC_15(&VAR_8->mutex);

 FUNC_6(VAR_8);


 if (VAR_8->ah->is_monitoring)
  FUNC_3(VAR_8);

 FUNC_10(VAR_9);
 FUNC_9(VAR_9);
 FUNC_1(VAR_8);
 FUNC_4(VAR_8, VAR_1);

 FUNC_17(VAR_3, &VAR_8->op_flags);

 FUNC_12(VAR_10, VAR_2, "Driver halt\n");
 FUNC_16(&VAR_8->mutex);
}
