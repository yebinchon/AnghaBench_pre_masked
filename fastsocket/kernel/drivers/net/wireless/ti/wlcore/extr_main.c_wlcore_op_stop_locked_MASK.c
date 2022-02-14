
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl1271 {scalar_t__ state; int reg_ch_conf_last; int * target_mem_map; int * tx_res_if; int * fw_status_2; int * fw_status_1; scalar_t__* tx_allocated_pkts; scalar_t__* tx_pkts_freed; scalar_t__ tx_blocks_freed; scalar_t__ flags; int links_map; TYPE_1__* links; scalar_t__ active_link_count; scalar_t__ active_sta_count; int session_ids; int roc_map; int roles_map; int sleep_auth; scalar_t__ ap_ps_map; scalar_t__ ap_fw_ps_map; scalar_t__ time_offset; scalar_t__ tx_packets_count; scalar_t__ tx_results_count; scalar_t__ tx_allocated_blocks; scalar_t__ tx_blocks_available; int channel_type; int power_level; scalar_t__ rx_counter; int band; int mutex; int tx_watchdog_work; int elp_work; int tx_work; int netstack_work; int scan_complete_work; int recovery_work; } ;
struct TYPE_2__ {scalar_t__ prev_freed_pkts; scalar_t__ allocated_pkts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,scalar_t__*) ;
 int FUNC_8 (int ,scalar_t__*) ;
 int FUNC_9 (struct wl1271*) ;
 int FUNC_10 (struct wl1271*) ;
 int FUNC_11 (struct wl1271*) ;
 int FUNC_12 (struct wl1271*) ;
 int FUNC_13 (struct wl1271*) ;
 int FUNC_14 (struct wl1271*) ;
 int FUNC_15 (struct wl1271*) ;

__attribute__((used)) static void FUNC_16(struct wl1271 *VAR_8)
{
 int VAR_9;

 if (VAR_8->state == VAR_7) {
  if (FUNC_7(VAR_4,
     &VAR_8->flags))
   FUNC_14(VAR_8);

  return;
 }





 VAR_8->state = VAR_7;





 FUNC_13(VAR_8);

 FUNC_6(&VAR_8->mutex);

 FUNC_15(VAR_8);
 if (!FUNC_8(VAR_4, &VAR_8->flags))
  FUNC_2(&VAR_8->recovery_work);
 FUNC_10(VAR_8);
 FUNC_1(&VAR_8->scan_complete_work);
 FUNC_2(&VAR_8->netstack_work);
 FUNC_2(&VAR_8->tx_work);
 FUNC_1(&VAR_8->elp_work);
 FUNC_1(&VAR_8->tx_watchdog_work);


 FUNC_5(&VAR_8->mutex);
 FUNC_12(VAR_8);

 FUNC_11(VAR_8);





 if (FUNC_7(VAR_4, &VAR_8->flags))
  FUNC_14(VAR_8);

 VAR_8->band = VAR_0;

 VAR_8->rx_counter = 0;
 VAR_8->power_level = VAR_3;
 VAR_8->channel_type = VAR_1;
 VAR_8->tx_blocks_available = 0;
 VAR_8->tx_allocated_blocks = 0;
 VAR_8->tx_results_count = 0;
 VAR_8->tx_packets_count = 0;
 VAR_8->time_offset = 0;
 VAR_8->ap_fw_ps_map = 0;
 VAR_8->ap_ps_map = 0;
 VAR_8->sleep_auth = VAR_5;
 FUNC_4(VAR_8->roles_map, 0, sizeof(VAR_8->roles_map));
 FUNC_4(VAR_8->links_map, 0, sizeof(VAR_8->links_map));
 FUNC_4(VAR_8->roc_map, 0, sizeof(VAR_8->roc_map));
 FUNC_4(VAR_8->session_ids, 0, sizeof(VAR_8->session_ids));
 VAR_8->active_sta_count = 0;
 VAR_8->active_link_count = 0;


 VAR_8->links[VAR_6].allocated_pkts = 0;
 VAR_8->links[VAR_6].prev_freed_pkts = 0;
 FUNC_0(VAR_6, VAR_8->links_map);






 VAR_8->flags = 0;

 VAR_8->tx_blocks_freed = 0;

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  VAR_8->tx_pkts_freed[VAR_9] = 0;
  VAR_8->tx_allocated_pkts[VAR_9] = 0;
 }

 FUNC_9(VAR_8);

 FUNC_3(VAR_8->fw_status_1);
 VAR_8->fw_status_1 = ((void*)0);
 VAR_8->fw_status_2 = ((void*)0);
 FUNC_3(VAR_8->tx_res_if);
 VAR_8->tx_res_if = ((void*)0);
 FUNC_3(VAR_8->target_mem_map);
 VAR_8->target_mem_map = ((void*)0);





 FUNC_4(VAR_8->reg_ch_conf_last, 0, sizeof(VAR_8->reg_ch_conf_last));
}
