
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_rxon_context {int is_active; int mcast_queue; int * ac_to_queue; int always_active; struct ieee80211_vif* vif; } ;
struct iwl_priv {scalar_t__ iw_mode; int bt_traffic_load; TYPE_2__* cfg; int mutex; } ;
struct ieee80211_vif {scalar_t__ type; int cab_queue; int * hw_queue; } ;
struct TYPE_4__ {TYPE_1__* bt_params; } ;
struct TYPE_3__ {scalar_t__ advanced_bt_coexist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct iwl_priv*,struct iwl_rxon_context*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct iwl_priv *VAR_5,
          struct iwl_rxon_context *VAR_6)
{
 struct ieee80211_vif *VAR_7 = VAR_6->vif;
 int VAR_8, VAR_9;

 FUNC_1(&VAR_5->mutex);






 VAR_5->iw_mode = VAR_7->type;

 VAR_6->is_active = 1;

 VAR_8 = FUNC_0(VAR_5, VAR_6);
 if (VAR_8) {
  if (!VAR_6->always_active)
   VAR_6->is_active = 0;
  return VAR_8;
 }

 if (VAR_5->cfg->bt_params && VAR_5->cfg->bt_params->advanced_bt_coexist &&
     VAR_7->type == VAR_3) {





  VAR_5->bt_traffic_load = VAR_2;
 }


 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
  VAR_7->hw_queue[VAR_9] = VAR_6->ac_to_queue[VAR_9];

 if (VAR_7->type == VAR_4)
  VAR_7->cab_queue = VAR_6->mcast_queue;
 else
  VAR_7->cab_queue = VAR_0;

 return 0;
}
