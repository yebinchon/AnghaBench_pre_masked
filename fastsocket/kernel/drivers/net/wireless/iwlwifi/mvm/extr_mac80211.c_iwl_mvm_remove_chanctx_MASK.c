
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_phy_ctxt {int dummy; } ;
struct iwl_mvm {int mutex; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_chanctx_conf {scalar_t__ drv_priv; } ;


 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct iwl_mvm*,struct iwl_mvm_phy_ctxt*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_0,
       struct ieee80211_chanctx_conf *VAR_1)
{
 struct iwl_mvm *VAR_2 = FUNC_0(VAR_0);
 struct iwl_mvm_phy_ctxt *VAR_3 = (void *)VAR_1->drv_priv;

 FUNC_2(&VAR_2->mutex);
 FUNC_1(VAR_2, VAR_3);
 FUNC_3(&VAR_2->mutex);
}
