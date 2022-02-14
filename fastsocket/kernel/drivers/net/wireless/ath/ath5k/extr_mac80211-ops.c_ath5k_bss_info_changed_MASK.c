
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ath5k_hw* priv; } ;
struct ieee80211_bss_conf {int enable_beacon; scalar_t__ aid; scalar_t__ assoc; int use_short_slot; int beacon_int; int bssid; } ;
struct ath_common {scalar_t__ curaid; int curbssid; } ;
struct ath5k_vif {scalar_t__ assoc; } ;
struct ath5k_hw {int ah_coverage_class; scalar_t__ opmode; int lock; int enable_beacon; int block; scalar_t__ assoc; int ah_short_slot; int bintval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath5k_hw*,int ,char*,scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_1 (struct ath5k_hw*) ;
 int FUNC_2 (struct ath5k_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 struct ath_common* FUNC_4 (struct ath5k_hw*) ;
 int FUNC_5 (struct ath5k_hw*) ;
 int FUNC_6 (struct ath5k_hw*) ;
 int FUNC_7 (struct ath5k_hw*,int) ;
 int FUNC_8 (struct ath5k_hw*,int ) ;
 int FUNC_9 (struct ieee80211_hw*,scalar_t__) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void
FUNC_16(struct ieee80211_hw *VAR_11, struct ieee80211_vif *VAR_12,
         struct ieee80211_bss_conf *VAR_13, u32 VAR_14)
{
 struct ath5k_vif *VAR_15 = (void *)VAR_12->drv_priv;
 struct ath5k_hw *VAR_16 = VAR_11->priv;
 struct ath_common *VAR_17 = FUNC_4(VAR_16);

 FUNC_12(&VAR_16->lock);

 if (VAR_14 & VAR_7) {

  FUNC_10(VAR_17->curbssid, VAR_13->bssid, VAR_9);
  VAR_17->curaid = 0;
  FUNC_6(VAR_16);
  FUNC_11();
 }

 if (VAR_14 & VAR_6)
  VAR_16->bintval = VAR_13->beacon_int;

 if (VAR_14 & VAR_8) {
  int VAR_18;

  VAR_16->ah_short_slot = VAR_13->use_short_slot;
  VAR_18 = FUNC_5(VAR_16) +
       3 * VAR_16->ah_coverage_class;
  FUNC_7(VAR_16, VAR_18);
 }

 if (VAR_14 & VAR_3) {
  VAR_15->assoc = VAR_13->assoc;
  if (VAR_13->assoc)
   VAR_16->assoc = VAR_13->assoc;
  else
   VAR_16->assoc = FUNC_1(VAR_16);

  if (VAR_16->opmode == VAR_10)
   FUNC_9(VAR_11, VAR_16->assoc);
  FUNC_8(VAR_16, VAR_16->assoc ?
   VAR_0 : VAR_1);
  if (VAR_13->assoc) {
   FUNC_0(VAR_16, VAR_2,
      "Bss Info ASSOC %d, bssid: %pM\n",
      VAR_13->aid, VAR_17->curbssid);
   VAR_17->curaid = VAR_13->aid;
   FUNC_6(VAR_16);

  }
 }

 if (VAR_14 & VAR_4) {
  FUNC_14(&VAR_16->block);
  FUNC_3(VAR_11, VAR_12);
  FUNC_15(&VAR_16->block);
 }

 if (VAR_14 & VAR_5)
  VAR_16->enable_beacon = VAR_13->enable_beacon;

 if (VAR_14 & (VAR_4 | VAR_5 |
         VAR_6))
  FUNC_2(VAR_16);

 FUNC_13(&VAR_16->lock);
}
