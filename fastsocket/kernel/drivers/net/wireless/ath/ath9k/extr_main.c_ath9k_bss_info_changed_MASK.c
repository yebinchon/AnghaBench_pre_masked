
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_vif {scalar_t__ type; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ieee80211_bss_conf {scalar_t__ use_short_slot; scalar_t__ enable_beacon; scalar_t__ aid; int bssid; int assoc; } ;
struct ath_vif {int primary_sta_vif; } ;
struct TYPE_2__ {int slottime; int updateslot; } ;
struct ath_softc {int mutex; TYPE_1__ beacon; struct ath_hw* sc_ah; int sc_flags; int hw; } ;
struct ath_hw {scalar_t__ opmode; int slottime; } ;
struct ath_common {scalar_t__ curaid; int curbssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (struct ath_softc*,struct ieee80211_vif*) ;
 int FUNC_1 (struct ath_softc*,struct ieee80211_vif*,int) ;
 int VAR_14 ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_softc*,int) ;
 int FUNC_7 (struct ath_softc*) ;
 int FUNC_8 (struct ath_softc*) ;
 int FUNC_9 (struct ath_softc*,struct ieee80211_vif*) ;
 int FUNC_10 (struct ath_softc*) ;
 int FUNC_11 (struct ath_common*,int ,char*,int ,int ) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,int ,int ,struct ath_softc*) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,int *) ;

__attribute__((used)) static void FUNC_19(struct ieee80211_hw *VAR_15,
       struct ieee80211_vif *VAR_16,
       struct ieee80211_bss_conf *VAR_17,
       u32 VAR_18)
{





 struct ath_softc *VAR_19 = VAR_15->priv;
 struct ath_hw *VAR_20 = VAR_19->sc_ah;
 struct ath_common *VAR_21 = FUNC_2(VAR_20);
 struct ath_vif *VAR_22 = (void *)VAR_16->drv_priv;
 int VAR_23;

 FUNC_8(VAR_19);
 FUNC_16(&VAR_19->mutex);

 if (VAR_18 & VAR_0) {
  FUNC_11(VAR_21, VAR_6, "BSSID %pM Changed ASSOC %d\n",
   VAR_17->bssid, VAR_17->assoc);

  if (VAR_22->primary_sta_vif && !VAR_17->assoc) {
   FUNC_12(VAR_12, &VAR_19->sc_flags);
   VAR_22->primary_sta_vif = 0;

   if (VAR_20->opmode == VAR_10)
    FUNC_12(VAR_11, &VAR_19->sc_flags);
  }

  FUNC_13(
   VAR_19->hw, VAR_8,
   VAR_14, VAR_19);

  if (!FUNC_18(VAR_12, &VAR_19->sc_flags) &&
      VAR_20->opmode == VAR_10) {
   FUNC_15(VAR_21->curbssid, 0, VAR_7);
   VAR_21->curaid = 0;
   FUNC_5(VAR_19->sc_ah);
   if (FUNC_4(VAR_19->sc_ah))
    FUNC_6(VAR_19, 1);
  }
 }

 if (VAR_18 & VAR_4) {
  FUNC_14(VAR_21->curbssid, VAR_17->bssid, VAR_7);
  VAR_21->curaid = VAR_17->aid;
  FUNC_5(VAR_19->sc_ah);
 }

 if ((VAR_18 & VAR_1) ||
     (VAR_18 & VAR_2)) {
  if (VAR_20->opmode == VAR_9 &&
      VAR_17->enable_beacon)
   FUNC_9(VAR_19, VAR_16);
  if (FUNC_0(VAR_19, VAR_16))
   FUNC_1(VAR_19, VAR_16, VAR_18);
 }

 if (VAR_18 & VAR_3) {
  if (VAR_17->use_short_slot)
   VAR_23 = 9;
  else
   VAR_23 = 20;
  if (VAR_16->type == VAR_9) {





   VAR_19->beacon.slottime = VAR_23;
   VAR_19->beacon.updateslot = VAR_13;
  } else {
   VAR_20->slottime = VAR_23;
   FUNC_3(VAR_20);
  }
 }

 if (VAR_18 & (VAR_0 | VAR_4 | VAR_1))
  FUNC_10(VAR_19);

 FUNC_17(&VAR_19->mutex);
 FUNC_7(VAR_19);


}
