
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_ctx_used_data {int used; } ;
struct iwl_mvm_phy_ctxt {int id; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_chanctx_conf {scalar_t__ drv_priv; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_0,
          struct ieee80211_chanctx_conf *VAR_1,
          void *VAR_2)
{
 struct phy_ctx_used_data *VAR_3 = VAR_2;
 struct iwl_mvm_phy_ctxt *VAR_4 = (void *)VAR_1->drv_priv;

 FUNC_0(VAR_4->id, VAR_3->used);
}
