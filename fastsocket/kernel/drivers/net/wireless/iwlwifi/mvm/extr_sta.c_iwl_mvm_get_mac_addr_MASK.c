
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct iwl_mvm_vif {scalar_t__ ap_sta_id; } ;
struct iwl_mvm {int mutex; int * fw_id_to_mac_id; } ;
struct ieee80211_vif {scalar_t__ type; scalar_t__ drv_priv; } ;
struct ieee80211_sta {size_t* addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 struct ieee80211_sta* FUNC_1 (int ,int ) ;

__attribute__((used)) static inline u8 *FUNC_2(struct iwl_mvm *VAR_2,
           struct ieee80211_vif *VAR_3,
           struct ieee80211_sta *VAR_4)
{
 struct iwl_mvm_vif *VAR_5 = (void *)VAR_3->drv_priv;

 if (VAR_4)
  return VAR_4->addr;

 if (VAR_3->type == VAR_1 &&
     VAR_5->ap_sta_id != VAR_0) {
  u8 VAR_6 = VAR_5->ap_sta_id;
  VAR_4 = FUNC_1(VAR_2->fw_id_to_mac_id[VAR_6],
      FUNC_0(&VAR_2->mutex));
  return VAR_4->addr;
 }


 return ((void*)0);
}
