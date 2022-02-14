
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct iwl_mvm {int * fw_id_to_mac_id; int mutex; } ;
struct ieee80211_vif {int dummy; } ;


 int FUNC_0 (struct iwl_mvm*,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(struct iwl_mvm *VAR_0,
        struct ieee80211_vif *VAR_1,
        u8 VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0, VAR_2);

 FUNC_1(&VAR_0->mutex);

 FUNC_2(VAR_0->fw_id_to_mac_id[VAR_2], ((void*)0));
 return VAR_3;
}
