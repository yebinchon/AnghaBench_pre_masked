
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iwl_mvm_vif {TYPE_3__* phy_ctxt; } ;
struct iwl_mvm {int mutex; int sta_drained_wk; } ;
struct TYPE_4__ {int beacon_int; } ;
struct ieee80211_vif {scalar_t__ type; TYPE_1__ bss_conf; } ;
struct ieee80211_sta {int addr; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum ieee80211_sta_state { ____Placeholder_ieee80211_sta_state } ieee80211_sta_state ;
struct TYPE_6__ {TYPE_2__* channel; } ;
struct TYPE_5__ {int band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct iwl_mvm*,char*,int ,int,int) ;
 int FUNC_1 (struct iwl_mvm*,char*,int ,int) ;
 struct iwl_mvm* FUNC_2 (struct ieee80211_hw*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_sta*) ;
 int FUNC_6 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_sta*) ;
 int FUNC_7 (struct iwl_mvm*,struct ieee80211_sta*,int ) ;
 int FUNC_8 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_sta*) ;
 struct iwl_mvm_vif* FUNC_9 (struct ieee80211_vif*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct ieee80211_hw *VAR_8,
     struct ieee80211_vif *VAR_9,
     struct ieee80211_sta *VAR_10,
     enum ieee80211_sta_state VAR_11,
     enum ieee80211_sta_state VAR_12)
{
 struct iwl_mvm *VAR_13 = FUNC_2(VAR_8);
 struct iwl_mvm_vif *VAR_14 = FUNC_9(VAR_9);
 int VAR_15;

 FUNC_0(VAR_13, "station %pM state change %d->%d\n",
      VAR_10->addr, VAR_11, VAR_12);


 if (FUNC_3(!VAR_14->phy_ctxt))
  return -VAR_0;


 FUNC_4(&VAR_13->sta_drained_wk);

 FUNC_10(&VAR_13->mutex);
 if (VAR_11 == VAR_6 &&
     VAR_12 == VAR_5) {







  if (VAR_9->type == VAR_7 &&
      VAR_9->bss_conf.beacon_int < 16) {
   FUNC_1(VAR_13,
    "AP %pM beacon interval is %d, refusing due to firmware bug!\n",
    VAR_10->addr, VAR_9->bss_conf.beacon_int);
   VAR_15 = -VAR_0;
   goto out_unlock;
  }
  VAR_15 = FUNC_5(VAR_13, VAR_9, VAR_10);
 } else if (VAR_11 == VAR_5 &&
     VAR_12 == VAR_3) {
  VAR_15 = 0;
 } else if (VAR_11 == VAR_3 &&
     VAR_12 == VAR_2) {
  VAR_15 = FUNC_8(VAR_13, VAR_9, VAR_10);
  if (VAR_15 == 0)
   FUNC_7(VAR_13, VAR_10,
          VAR_14->phy_ctxt->channel->band);
 } else if (VAR_11 == VAR_2 &&
     VAR_12 == VAR_4) {
  VAR_15 = 0;
 } else if (VAR_11 == VAR_4 &&
     VAR_12 == VAR_2) {
  VAR_15 = 0;
 } else if (VAR_11 == VAR_2 &&
     VAR_12 == VAR_3) {
  VAR_15 = 0;
 } else if (VAR_11 == VAR_3 &&
     VAR_12 == VAR_5) {
  VAR_15 = 0;
 } else if (VAR_11 == VAR_5 &&
     VAR_12 == VAR_6) {
  VAR_15 = FUNC_6(VAR_13, VAR_9, VAR_10);
 } else {
  VAR_15 = -VAR_1;
 }
 out_unlock:
 FUNC_11(&VAR_13->mutex);

 return VAR_15;
}
