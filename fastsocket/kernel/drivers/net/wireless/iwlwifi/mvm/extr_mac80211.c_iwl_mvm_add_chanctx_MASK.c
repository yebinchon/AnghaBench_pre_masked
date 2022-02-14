
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_phy_ctxt {int dummy; } ;
struct iwl_mvm {int mutex; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_chanctx_conf {int rx_chains_dynamic; int rx_chains_static; int def; scalar_t__ drv_priv; } ;


 int FUNC_0 (struct iwl_mvm*,char*) ;
 struct iwl_mvm* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct iwl_mvm*,struct iwl_mvm_phy_ctxt*,int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_hw *VAR_0,
          struct ieee80211_chanctx_conf *VAR_1)
{
 struct iwl_mvm *VAR_2 = FUNC_1(VAR_0);
 struct iwl_mvm_phy_ctxt *VAR_3 = (void *)VAR_1->drv_priv;
 int VAR_4;

 FUNC_3(&VAR_2->mutex);

 FUNC_0(VAR_2, "Add PHY context\n");
 VAR_4 = FUNC_2(VAR_2, VAR_3, &VAR_1->def,
       VAR_1->rx_chains_static,
       VAR_1->rx_chains_dynamic);
 FUNC_4(&VAR_2->mutex);
 return VAR_4;
}
