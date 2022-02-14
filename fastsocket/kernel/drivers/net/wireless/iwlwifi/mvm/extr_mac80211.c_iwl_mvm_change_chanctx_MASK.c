
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_mvm_phy_ctxt {int dummy; } ;
struct iwl_mvm {int mutex; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_chanctx_conf {int rx_chains_dynamic; int rx_chains_static; int def; scalar_t__ drv_priv; } ;


 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct iwl_mvm*,struct iwl_mvm_phy_ctxt*,int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_0,
       struct ieee80211_chanctx_conf *VAR_1,
       u32 VAR_2)
{
 struct iwl_mvm *VAR_3 = FUNC_0(VAR_0);
 struct iwl_mvm_phy_ctxt *VAR_4 = (void *)VAR_1->drv_priv;

 FUNC_2(&VAR_3->mutex);
 FUNC_1(VAR_3, VAR_4, &VAR_1->def,
     VAR_1->rx_chains_static,
     VAR_1->rx_chains_dynamic);
 FUNC_3(&VAR_3->mutex);
}
