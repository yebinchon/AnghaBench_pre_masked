
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_mvm {int mutex; } ;
struct ieee80211_vif {int type; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_bss_conf {int dummy; } ;


 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;


 int FUNC_1 (int) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_bss_conf*,int ) ;
 int FUNC_3 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_bss_conf*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_0,
         struct ieee80211_vif *VAR_1,
         struct ieee80211_bss_conf *VAR_2,
         u32 VAR_3)
{
 struct iwl_mvm *VAR_4 = FUNC_0(VAR_0);

 FUNC_4(&VAR_4->mutex);

 switch (VAR_1->type) {
 case 128:
  FUNC_3(VAR_4, VAR_1, VAR_2, VAR_3);
  break;
 case 129:
  FUNC_2(VAR_4, VAR_1, VAR_2, VAR_3);
  break;
 default:

  FUNC_1(1);
 }

 FUNC_5(&VAR_4->mutex);
}
