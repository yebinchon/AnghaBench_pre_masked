
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iwl_vif_priv {TYPE_1__* ctx; } ;
struct iwl_priv {int dummy; } ;
struct ieee80211_vif {scalar_t__ type; scalar_t__ drv_priv; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_2__ {int ap_sta_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ieee80211_sta*) ;

__attribute__((used)) static u8 FUNC_1(struct iwl_priv *VAR_2,
       struct ieee80211_vif *VAR_3,
       struct ieee80211_sta *VAR_4)
{
 struct iwl_vif_priv *VAR_5 = (void *)VAR_3->drv_priv;

 if (VAR_4)
  return FUNC_0(VAR_4);






 if (VAR_3->type == VAR_1 && VAR_5->ctx)
  return VAR_5->ctx->ap_sta_id;

 return VAR_0;
}
