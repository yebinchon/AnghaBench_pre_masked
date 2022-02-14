
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_mvm {int dummy; } ;
struct iwl_mac_ctx_cmd {int ap; int filter_flags; } ;
struct ieee80211_vif {scalar_t__ type; scalar_t__ p2p; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_vif*,struct iwl_mac_ctx_cmd*,int ) ;
 int FUNC_3 (struct iwl_mvm*,struct ieee80211_vif*,int *,int) ;
 int FUNC_4 (struct iwl_mvm*,struct iwl_mac_ctx_cmd*) ;

__attribute__((used)) static int FUNC_5(struct iwl_mvm *VAR_3,
       struct ieee80211_vif *VAR_4,
       u32 VAR_5)
{
 struct iwl_mac_ctx_cmd VAR_6 = {};

 FUNC_0(VAR_4->type != VAR_2 || VAR_4->p2p);


 FUNC_2(VAR_3, VAR_4, &VAR_6, VAR_5);


 VAR_6.filter_flags |= FUNC_1(VAR_1);


 FUNC_3(VAR_3, VAR_4, &VAR_6.ap,
         VAR_5 == VAR_0);

 return FUNC_4(VAR_3, &VAR_6);
}
