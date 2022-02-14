
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_vif_priv {struct iwl_rxon_context* ctx; } ;
struct iwl_rxon_context {int dummy; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;



__attribute__((used)) static inline struct iwl_rxon_context *
FUNC_0(struct ieee80211_vif *VAR_0)
{
 struct iwl_vif_priv *VAR_1 = (void *)VAR_0->drv_priv;

 return VAR_1->ctx;
}
