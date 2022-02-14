
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm {int dummy; } ;
struct iwl_mcast_filter_cmd {int pass_all; int bssid; } ;
struct TYPE_2__ {int bssid; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;
typedef int mcast_filter_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_mvm*,int ,int ,int,struct iwl_mcast_filter_cmd*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct iwl_mvm *VAR_3,
       struct ieee80211_vif *VAR_4)
{
 struct iwl_mcast_filter_cmd VAR_5 = {
  .pass_all = 1,
 };

 FUNC_1(VAR_5.bssid, VAR_4->bss_conf.bssid, VAR_1);

 return FUNC_0(VAR_3, VAR_2, VAR_0,
        sizeof(VAR_5),
        &VAR_5);
}
