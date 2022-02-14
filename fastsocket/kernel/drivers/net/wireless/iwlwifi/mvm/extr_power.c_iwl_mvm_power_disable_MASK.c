
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_powertable_cmd {int flags; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_vif {scalar_t__ type; scalar_t__ p2p; } ;
typedef int cmd ;
struct TYPE_2__ {scalar_t__ power_scheme; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct iwl_mvm*,struct iwl_powertable_cmd*) ;
 int FUNC_2 (struct iwl_mvm*,int ,int ,int,struct iwl_powertable_cmd*) ;
 TYPE_1__ VAR_5 ;

int FUNC_3(struct iwl_mvm *VAR_6, struct ieee80211_vif *VAR_7)
{
 struct iwl_powertable_cmd VAR_8 = {};

 if (VAR_7->type != VAR_2 || VAR_7->p2p)
  return 0;

 if (VAR_5.power_scheme != VAR_1)
  VAR_8.flags |= FUNC_0(VAR_3);

 FUNC_1(VAR_6, &VAR_8);

 return FUNC_2(VAR_6, VAR_4, VAR_0,
        sizeof(VAR_8), &VAR_8);
}
