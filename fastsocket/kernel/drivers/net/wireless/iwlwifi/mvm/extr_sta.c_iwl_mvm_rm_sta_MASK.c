
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm_vif {size_t ap_sta_id; } ;
struct iwl_mvm_sta {size_t sta_id; int lock; int tfd_queue_msk; } ;
struct iwl_mvm {int * fw_id_to_mac_id; int * pending_frames; int mutex; } ;
struct TYPE_2__ {scalar_t__ assoc; } ;
struct ieee80211_vif {scalar_t__ type; TYPE_1__ bss_conf; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct iwl_mvm*,struct iwl_mvm_sta*,int) ;
 int FUNC_3 (struct iwl_mvm*,int ,int) ;
 int FUNC_4 (struct iwl_mvm*,size_t) ;
 struct iwl_mvm_vif* FUNC_5 (struct ieee80211_vif*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct iwl_mvm *VAR_4,
     struct ieee80211_vif *VAR_5,
     struct ieee80211_sta *VAR_6)
{
 struct iwl_mvm_vif *VAR_7 = FUNC_5(VAR_5);
 struct iwl_mvm_sta *VAR_8 = (void *)VAR_6->drv_priv;
 int VAR_9;

 FUNC_6(&VAR_4->mutex);

 if (VAR_5->type == VAR_3 &&
     VAR_7->ap_sta_id == VAR_8->sta_id) {

  VAR_9 = FUNC_3(VAR_4, VAR_8->tfd_queue_msk, 1);






  FUNC_7(VAR_4->fw_id_to_mac_id[VAR_8->sta_id],
       FUNC_0(-VAR_1));


  if (VAR_5->bss_conf.assoc)
   return VAR_9;


  VAR_7->ap_sta_id = VAR_2;
 }





 FUNC_8(&VAR_8->lock);




 if (FUNC_1(&VAR_4->pending_frames[VAR_8->sta_id])) {
  FUNC_7(VAR_4->fw_id_to_mac_id[VAR_8->sta_id],
       FUNC_0(-VAR_0));
  FUNC_9(&VAR_8->lock);
  VAR_9 = FUNC_2(VAR_4, VAR_8, 1);
 } else {
  FUNC_9(&VAR_8->lock);
  VAR_9 = FUNC_4(VAR_4, VAR_8->sta_id);
  FUNC_7(VAR_4->fw_id_to_mac_id[VAR_8->sta_id], ((void*)0));
 }

 return VAR_9;
}
