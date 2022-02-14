
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_mvm {int dummy; } ;
struct iwl_mac_ctx_cmd {int filter_flags; } ;
struct ieee80211_vif {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_vif*,struct iwl_mac_ctx_cmd*,int ) ;
 int FUNC_3 (struct iwl_mvm*,struct iwl_mac_ctx_cmd*) ;

__attribute__((used)) static int FUNC_4(struct iwl_mvm *VAR_5,
      struct ieee80211_vif *VAR_6,
      u32 VAR_7)
{
 struct iwl_mac_ctx_cmd VAR_8 = {};

 FUNC_0(VAR_6->type != VAR_4);

 FUNC_2(VAR_5, VAR_6, &VAR_8, VAR_7);

 VAR_8.filter_flags = FUNC_1(VAR_3 |
           VAR_1 |
           VAR_0 |
           VAR_2);

 return FUNC_3(VAR_5, &VAR_8);
}
