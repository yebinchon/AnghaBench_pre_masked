
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_hw {struct ath9k_htc_priv* priv; } ;
struct ieee80211_bss_conf {scalar_t__ use_short_slot; scalar_t__ bssid; scalar_t__ enable_beacon; int aid; scalar_t__ assoc; } ;
struct ath_hw {scalar_t__ opmode; int slottime; } ;
struct ath_common {int curbssid; int curaid; } ;
struct ath9k_htc_priv {int num_sta_assoc_vif; int num_ap_vif; int nvifs; int mutex; int op_flags; struct ath_hw* ah; scalar_t__ num_ibss_vif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct ath9k_htc_priv*,struct ieee80211_vif*) ;
 int FUNC_1 (struct ath9k_htc_priv*) ;
 int FUNC_2 (struct ath9k_htc_priv*) ;
 int FUNC_3 (struct ath9k_htc_priv*) ;
 int FUNC_4 (struct ath9k_htc_priv*) ;
 int FUNC_5 (struct ath9k_htc_priv*,struct ieee80211_vif*) ;
 int FUNC_6 (struct ath9k_htc_priv*) ;
 int FUNC_7 (struct ath9k_htc_priv*) ;
 int FUNC_8 (struct ath9k_htc_priv*,struct ieee80211_vif*,struct ieee80211_bss_conf*) ;
 struct ath_common* FUNC_9 (struct ath_hw*) ;
 int FUNC_10 (struct ath_hw*) ;
 int FUNC_11 (struct ath_common*,int ,char*,scalar_t__) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,scalar_t__,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int *) ;

__attribute__((used)) static void FUNC_17(struct ieee80211_hw *VAR_13,
           struct ieee80211_vif *VAR_14,
           struct ieee80211_bss_conf *VAR_15,
           u32 VAR_16)
{
 struct ath9k_htc_priv *VAR_17 = VAR_13->priv;
 struct ath_hw *VAR_18 = VAR_17->ah;
 struct ath_common *VAR_19 = FUNC_9(VAR_18);

 FUNC_14(&VAR_17->mutex);
 FUNC_3(VAR_17);

 if (VAR_16 & VAR_0) {
  FUNC_11(VAR_19, VAR_6, "BSS Changed ASSOC %d\n",
   VAR_15->assoc);

  VAR_15->assoc ?
   VAR_17->num_sta_assoc_vif++ : VAR_17->num_sta_assoc_vif--;

  if (VAR_17->ah->opmode == VAR_10) {
   FUNC_1(VAR_17);
   if (VAR_15->assoc && (VAR_17->num_sta_assoc_vif == 1))
    FUNC_6(VAR_17);
   else if (VAR_17->num_sta_assoc_vif == 0)
    FUNC_7(VAR_17);
  }
 }

 if (VAR_16 & VAR_5) {
  if (VAR_17->ah->opmode == VAR_8) {
   VAR_19->curaid = VAR_15->aid;
   FUNC_13(VAR_19->curbssid, VAR_15->bssid, VAR_7);
   FUNC_4(VAR_17);
  }
 }

 if ((VAR_16 & VAR_1) && VAR_15->enable_beacon) {
  FUNC_11(VAR_19, VAR_6, "Beacon enabled for BSS: %pM\n",
   VAR_15->bssid);
  FUNC_5(VAR_17, VAR_14);
  FUNC_16(VAR_11, &VAR_17->op_flags);
  FUNC_0(VAR_17, VAR_14);
 }

 if ((VAR_16 & VAR_1) && !VAR_15->enable_beacon) {




  if ((VAR_17->num_ap_vif <= 1) || VAR_17->num_ibss_vif) {
   FUNC_11(VAR_19, VAR_6,
    "Beacon disabled for BSS: %pM\n",
    VAR_15->bssid);
   FUNC_12(VAR_11, &VAR_17->op_flags);
   FUNC_0(VAR_17, VAR_14);
  }
 }

 if (VAR_16 & VAR_2) {



  if ((VAR_17->ah->opmode == VAR_9) &&
      (VAR_17->nvifs == 1) &&
      (VAR_17->num_ap_vif == 1) &&
      (VAR_14->type == VAR_9)) {
   FUNC_16(VAR_12, &VAR_17->op_flags);
  }
  FUNC_11(VAR_19, VAR_6,
   "Beacon interval changed for BSS: %pM\n",
   VAR_15->bssid);
  FUNC_0(VAR_17, VAR_14);
 }

 if (VAR_16 & VAR_3) {
  if (VAR_15->use_short_slot)
   VAR_18->slottime = 9;
  else
   VAR_18->slottime = 20;

  FUNC_10(VAR_18);
 }

 if (VAR_16 & VAR_4)
  FUNC_8(VAR_17, VAR_14, VAR_15);

 FUNC_2(VAR_17);
 FUNC_15(&VAR_17->mutex);
}
