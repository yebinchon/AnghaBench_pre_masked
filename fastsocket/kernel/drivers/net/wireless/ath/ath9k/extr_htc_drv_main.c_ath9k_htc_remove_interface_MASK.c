
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_vif {int type; int addr; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ath9k_htc_priv* priv; } ;
struct ath_common {int dummy; } ;
struct ath9k_htc_vif {int index; } ;
struct ath9k_htc_target_vif {int index; int myaddr; } ;
struct ath9k_htc_priv {int vif_slot; scalar_t__ num_ap_vif; int rearm_ani; int mutex; int hw; int nvifs; int ah; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath9k_htc_priv*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,struct ath9k_htc_target_vif*) ;
 int VAR_5 ;
 int FUNC_2 (struct ath9k_htc_priv*) ;
 int FUNC_3 (struct ath9k_htc_priv*) ;
 int FUNC_4 (struct ath9k_htc_priv*,struct ieee80211_vif*) ;
 int FUNC_5 (struct ath9k_htc_priv*,struct ieee80211_vif*,int *) ;
 int FUNC_6 (struct ath9k_htc_priv*,struct ieee80211_vif*) ;
 int FUNC_7 (struct ath9k_htc_priv*) ;
 int FUNC_8 (struct ath9k_htc_priv*) ;
 int VAR_6 ;
 struct ath_common* FUNC_9 (int ) ;
 int FUNC_10 (struct ath_common*,int ,char*,int) ;
 int FUNC_11 (struct ath_common*,char*,int) ;
 int FUNC_12 (int ,int ,int ,struct ath9k_htc_priv*) ;
 int FUNC_13 (int *,int ,int ) ;
 int FUNC_14 (struct ath9k_htc_target_vif*,int ,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void FUNC_17(struct ieee80211_hw *VAR_7,
           struct ieee80211_vif *VAR_8)
{
 struct ath9k_htc_priv *VAR_9 = VAR_7->priv;
 struct ath_common *VAR_10 = FUNC_9(VAR_9->ah);
 struct ath9k_htc_vif *VAR_11 = (void *)VAR_8->drv_priv;
 struct ath9k_htc_target_vif VAR_12;
 int VAR_13 = 0;
 u8 VAR_14;

 FUNC_15(&VAR_9->mutex);
 FUNC_3(VAR_9);

 FUNC_14(&VAR_12, 0, sizeof(struct ath9k_htc_target_vif));
 FUNC_13(&VAR_12.myaddr, VAR_8->addr, VAR_1);
 VAR_12.index = VAR_11->index;
 FUNC_1(VAR_5, &VAR_12);
 if (VAR_13) {
  FUNC_11(VAR_10, "Unable to remove interface at idx: %d\n",
   VAR_11->index);
 }
 VAR_9->nvifs--;
 VAR_9->vif_slot &= ~(1 << VAR_11->index);

 FUNC_5(VAR_9, VAR_8, ((void*)0));

 FUNC_0(VAR_9, VAR_8->type);

 if ((VAR_8->type == VAR_4) ||
     (VAR_8->type == VAR_3))
  FUNC_4(VAR_9, VAR_8);

 FUNC_7(VAR_9);

 FUNC_6(VAR_9, VAR_8);




 if ((VAR_8->type == VAR_4) && (VAR_9->num_ap_vif == 0)) {
  VAR_9->rearm_ani = 0;
  FUNC_12(
   VAR_9->hw, VAR_2,
   VAR_6, VAR_9);
  if (!VAR_9->rearm_ani)
   FUNC_8(VAR_9);
 }

 FUNC_10(VAR_10, VAR_0, "Detach Interface at idx: %d\n", VAR_11->index);

 FUNC_2(VAR_9);
 FUNC_16(&VAR_9->mutex);
}
