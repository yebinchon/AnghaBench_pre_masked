
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct iwl_mvm {TYPE_2__* hw; } ;
struct iwl_mac_data_sta {void* assoc_id; void* listen_interval; void* dtim_reciprocal; void* dtim_interval; void* bi_reciprocal; void* bi; void* is_assoc; void* dtim_time; int dtim_tsf; } ;
struct TYPE_6__ {int dtim_period; int sync_dtim_count; int beacon_int; int sync_device_ts; int aid; scalar_t__ sync_tsf; scalar_t__ assoc; } ;
struct ieee80211_vif {TYPE_3__ bss_conf; } ;
struct TYPE_4__ {int listen_interval; } ;
struct TYPE_5__ {TYPE_1__ conf; } ;


 int FUNC_0 (struct iwl_mvm*,char*,int ,int ,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct iwl_mvm *VAR_0,
       struct ieee80211_vif *VAR_1,
       struct iwl_mac_data_sta *VAR_2,
       bool VAR_3)
{

 if (VAR_1->bss_conf.assoc && VAR_1->bss_conf.dtim_period &&
     !VAR_3) {
  u32 VAR_4;
  VAR_4 = VAR_1->bss_conf.sync_dtim_count *
    VAR_1->bss_conf.beacon_int;

  VAR_4 *= 1024;

  VAR_2->dtim_tsf =
   FUNC_2(VAR_1->bss_conf.sync_tsf + VAR_4);
  VAR_2->dtim_time =
   FUNC_1(VAR_1->bss_conf.sync_device_ts + VAR_4);

  FUNC_0(VAR_0, "DTIM TBTT is 0x%llx/0x%x, offset %d\n",
          FUNC_5(VAR_2->dtim_tsf),
          FUNC_4(VAR_2->dtim_time),
          VAR_4);

  VAR_2->is_assoc = FUNC_1(1);
 } else {
  VAR_2->is_assoc = FUNC_1(0);
 }

 VAR_2->bi = FUNC_1(VAR_1->bss_conf.beacon_int);
 VAR_2->bi_reciprocal =
  FUNC_1(FUNC_3(VAR_1->bss_conf.beacon_int));
 VAR_2->dtim_interval = FUNC_1(VAR_1->bss_conf.beacon_int *
           VAR_1->bss_conf.dtim_period);
 VAR_2->dtim_reciprocal =
  FUNC_1(FUNC_3(VAR_1->bss_conf.beacon_int *
            VAR_1->bss_conf.dtim_period));

 VAR_2->listen_interval = FUNC_1(VAR_0->hw->conf.listen_interval);
 VAR_2->assoc_id = FUNC_1(VAR_1->bss_conf.aid);
}
