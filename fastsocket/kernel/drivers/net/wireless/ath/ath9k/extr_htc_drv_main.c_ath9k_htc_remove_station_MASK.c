
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_sta {size_t addr; scalar_t__ drv_priv; } ;
struct ath_common {int dummy; } ;
struct ath9k_htc_vif {size_t index; } ;
struct ath9k_htc_sta {int index; } ;
struct ath9k_htc_priv {int* vif_sta_pos; int sta_slot; int nstations; int ah; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int*) ;
 int VAR_1 ;
 struct ath_common* FUNC_1 (int ) ;
 int FUNC_2 (struct ath_common*,int ,char*,size_t,int) ;
 int FUNC_3 (struct ath_common*,char*,size_t) ;

__attribute__((used)) static int FUNC_4(struct ath9k_htc_priv *VAR_2,
        struct ieee80211_vif *VAR_3,
        struct ieee80211_sta *VAR_4)
{
 struct ath_common *VAR_5 = FUNC_1(VAR_2->ah);
 struct ath9k_htc_vif *VAR_6 = (struct ath9k_htc_vif *) VAR_3->drv_priv;
 struct ath9k_htc_sta *VAR_7;
 int VAR_8;
 u8 VAR_9, VAR_10;

 if (VAR_4) {
  VAR_7 = (struct ath9k_htc_sta *) VAR_4->drv_priv;
  VAR_10 = VAR_7->index;
 } else {
  VAR_10 = VAR_2->vif_sta_pos[VAR_6->index];
 }

 FUNC_0(VAR_1, &VAR_10);
 if (VAR_8) {
  if (VAR_4)
   FUNC_3(VAR_5,
    "Unable to remove station entry for: %pM\n",
    VAR_4->addr);
  return VAR_8;
 }

 if (VAR_4) {
  FUNC_2(VAR_5, VAR_0,
   "Removed a station entry for: %pM (idx: %d)\n",
   VAR_4->addr, VAR_10);
 } else {
  FUNC_2(VAR_5, VAR_0,
   "Removed a station entry for VIF %d (idx: %d)\n",
   VAR_6->index, VAR_10);
 }

 VAR_2->sta_slot &= ~(1 << VAR_10);
 VAR_2->nstations--;

 return 0;
}
