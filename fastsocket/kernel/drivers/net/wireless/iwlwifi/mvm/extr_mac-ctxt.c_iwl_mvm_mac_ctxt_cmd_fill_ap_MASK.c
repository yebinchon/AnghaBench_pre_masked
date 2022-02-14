
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm_vif {int ap_beacon_time; int id; } ;
struct iwl_mvm {int trans; } ;
struct iwl_mac_data_ap {void* beacon_template; scalar_t__ beacon_tsf; void* beacon_time; void* mcast_qid; void* dtim_reciprocal; void* dtim_interval; void* bi_reciprocal; void* bi; } ;
struct TYPE_2__ {int beacon_int; int dtim_period; } ;
struct ieee80211_vif {int cab_queue; TYPE_1__ bss_conf; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct iwl_mvm_vif* FUNC_2 (struct ieee80211_vif*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct iwl_mvm *VAR_1,
      struct ieee80211_vif *VAR_2,
      struct iwl_mac_data_ap *VAR_3,
      bool VAR_4)
{
 struct iwl_mvm_vif *VAR_5 = FUNC_2(VAR_2);

 VAR_3->bi = FUNC_0(VAR_2->bss_conf.beacon_int);
 VAR_3->bi_reciprocal =
  FUNC_0(FUNC_1(VAR_2->bss_conf.beacon_int));
 VAR_3->dtim_interval = FUNC_0(VAR_2->bss_conf.beacon_int *
          VAR_2->bss_conf.dtim_period);
 VAR_3->dtim_reciprocal =
  FUNC_0(FUNC_1(VAR_2->bss_conf.beacon_int *
            VAR_2->bss_conf.dtim_period));

 VAR_3->mcast_qid = FUNC_0(VAR_2->cab_queue);






 if (VAR_4)
  VAR_5->ap_beacon_time =
   FUNC_3(VAR_1->trans, VAR_0);

 VAR_3->beacon_time = FUNC_0(VAR_5->ap_beacon_time);

 VAR_3->beacon_tsf = 0;


 VAR_3->beacon_template = FUNC_0(VAR_5->id);
}
