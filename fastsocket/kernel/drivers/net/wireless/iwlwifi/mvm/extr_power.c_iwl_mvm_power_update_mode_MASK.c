
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_powertable_cmd {int dummy; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_vif {scalar_t__ type; scalar_t__ p2p; } ;
typedef int cmd ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_mvm*,struct ieee80211_vif*,struct iwl_powertable_cmd*) ;
 int FUNC_1 (struct iwl_mvm*,struct iwl_powertable_cmd*) ;
 int FUNC_2 (struct iwl_mvm*,int ,int ,int,struct iwl_powertable_cmd*) ;

int FUNC_3(struct iwl_mvm *VAR_3, struct ieee80211_vif *VAR_4)
{
 struct iwl_powertable_cmd VAR_5 = {};

 if (VAR_4->type != VAR_1 || VAR_4->p2p)
  return 0;

 FUNC_0(VAR_3, VAR_4, &VAR_5);
 FUNC_1(VAR_3, &VAR_5);

 return FUNC_2(VAR_3, VAR_2, VAR_0,
        sizeof(VAR_5), &VAR_5);
}
