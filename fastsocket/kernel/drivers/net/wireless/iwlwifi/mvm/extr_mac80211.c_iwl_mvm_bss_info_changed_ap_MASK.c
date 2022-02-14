
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_bss_conf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*) ;
 scalar_t__ FUNC_1 (struct iwl_mvm*,struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_2(struct iwl_mvm *VAR_1,
     struct ieee80211_vif *VAR_2,
     struct ieee80211_bss_conf *VAR_3,
     u32 VAR_4)
{

 if (VAR_4 & VAR_0) {
  if (FUNC_1(VAR_1, VAR_2))
   FUNC_0(VAR_1, "Failed updating beacon data\n");
 }
}
