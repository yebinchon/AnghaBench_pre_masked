
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_vif {int monitor_active; struct iwl_mvm_phy_ctxt* phy_ctxt; } ;
struct iwl_mvm_phy_ctxt {int dummy; } ;
struct iwl_mvm {int mutex; } ;
struct ieee80211_vif {int type; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_chanctx_conf {scalar_t__ drv_priv; } ;


 int VAR_0 ;
 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;




 int FUNC_1 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_3 (struct iwl_mvm*,struct ieee80211_vif*) ;
 struct iwl_mvm_vif* FUNC_4 (struct ieee80211_vif*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct ieee80211_hw *VAR_1,
          struct ieee80211_vif *VAR_2,
          struct ieee80211_chanctx_conf *VAR_3)
{
 struct iwl_mvm *VAR_4 = FUNC_0(VAR_1);
 struct iwl_mvm_phy_ctxt *VAR_5 = (void *)VAR_3->drv_priv;
 struct iwl_mvm_vif *VAR_6 = FUNC_4(VAR_2);
 int VAR_7;

 FUNC_5(&VAR_4->mutex);

 VAR_6->phy_ctxt = VAR_5;

 switch (VAR_2->type) {
 case 130:




  VAR_7 = 0;
  goto out_unlock;
 case 128:
 case 131:
 case 129:
  break;
 default:
  VAR_7 = -VAR_0;
  goto out_unlock;
 }

 VAR_7 = FUNC_1(VAR_4, VAR_2);
 if (VAR_7)
  goto out_unlock;






 if (VAR_2->type == 129) {
  VAR_6->monitor_active = 1;
  VAR_7 = FUNC_3(VAR_4, VAR_2);
  if (VAR_7)
   goto out_remove_binding;
 }

 goto out_unlock;

 out_remove_binding:
 FUNC_2(VAR_4, VAR_2);
 out_unlock:
 FUNC_6(&VAR_4->mutex);
 if (VAR_7)
  VAR_6->phy_ctxt = ((void*)0);
 return VAR_7;
}
