
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct iwl_mvm_sta {int dummy; } ;
struct iwl_mvm {int * fw_id_to_mac_id; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_key_conf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_sta*) ;
 size_t VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 size_t FUNC_3 (struct ieee80211_vif*,struct ieee80211_sta*) ;
 int FUNC_4 (struct iwl_mvm*,struct iwl_mvm_sta*,struct ieee80211_key_conf*,size_t,int ,int *,int ) ;
 struct ieee80211_sta* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

void FUNC_8(struct iwl_mvm *VAR_2,
        struct ieee80211_vif *VAR_3,
        struct ieee80211_key_conf *VAR_4,
        struct ieee80211_sta *VAR_5, u32 VAR_6,
        u16 *VAR_7)
{
 struct iwl_mvm_sta *VAR_8;
 u8 VAR_9 = FUNC_3(VAR_3, VAR_5);

 if (FUNC_2(VAR_9 == VAR_1))
  return;

 FUNC_6();

 if (!VAR_5) {
  VAR_5 = FUNC_5(VAR_2->fw_id_to_mac_id[VAR_9]);
  if (FUNC_1(FUNC_0(VAR_5))) {
   FUNC_7();
   return;
  }
 }

 VAR_8 = (void *)VAR_5->drv_priv;
 FUNC_4(VAR_2, VAR_8, VAR_4, VAR_9,
        VAR_6, VAR_7, VAR_0);
 FUNC_7();
}
