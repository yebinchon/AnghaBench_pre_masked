
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_priv {scalar_t__ bt_enable_flag; scalar_t__ last_bt_traffic_load; scalar_t__ bt_traffic_load; scalar_t__ iw_mode; scalar_t__ bt_status; scalar_t__ bt_ci_compliance; int bt_runtime_config; int workqueue; int bt_traffic_change_work; int bt_ch_announce; int bt_is_sco; } ;
struct iwl_device_cmd {int dummy; } ;
struct iwl_bt_uart_msg {int dummy; } ;
struct iwl_bt_coex_profile_notif {scalar_t__ bt_status; scalar_t__ bt_traffic_load; scalar_t__ bt_ci_compliance; struct iwl_bt_uart_msg last_bt_uart_msg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct iwl_priv*,char*,...) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct iwl_bt_uart_msg*) ;
 scalar_t__ FUNC_2 (struct iwl_priv*,struct iwl_bt_uart_msg*) ;
 int FUNC_3 (struct iwl_priv*,struct iwl_bt_uart_msg*) ;
 scalar_t__ FUNC_4 (struct iwl_priv*,struct iwl_bt_uart_msg*) ;
 int FUNC_5 (int ,int *) ;
 struct iwl_rx_packet* FUNC_6 (struct iwl_rx_cmd_buffer*) ;

int FUNC_7(struct iwl_priv *VAR_4,
      struct iwl_rx_cmd_buffer *VAR_5,
      struct iwl_device_cmd *VAR_6)
{
 struct iwl_rx_packet *VAR_7 = FUNC_6(VAR_5);
 struct iwl_bt_coex_profile_notif *VAR_8 = (void *)VAR_7->data;
 struct iwl_bt_uart_msg *VAR_9 = &VAR_8->last_bt_uart_msg;

 if (VAR_4->bt_enable_flag == VAR_0) {

  return 0;
 }

 FUNC_0(VAR_4, "BT Coex notification:\n");
 FUNC_0(VAR_4, "    status: %d\n", VAR_8->bt_status);
 FUNC_0(VAR_4, "    traffic load: %d\n", VAR_8->bt_traffic_load);
 FUNC_0(VAR_4, "    CI compliance: %d\n",
   VAR_8->bt_ci_compliance);
 FUNC_3(VAR_4, VAR_9);

 VAR_4->last_bt_traffic_load = VAR_4->bt_traffic_load;
 VAR_4->bt_is_sco = FUNC_1(VAR_9);

 if (VAR_4->iw_mode != VAR_3) {
  if (VAR_4->bt_status != VAR_8->bt_status ||
      VAR_4->last_bt_traffic_load != VAR_8->bt_traffic_load) {
   if (VAR_8->bt_status) {

    if (!VAR_4->bt_ch_announce)
     VAR_4->bt_traffic_load =
      VAR_1;
    else
     VAR_4->bt_traffic_load =
      VAR_8->bt_traffic_load;
   } else {

    VAR_4->bt_traffic_load =
     VAR_2;
   }
   VAR_4->bt_status = VAR_8->bt_status;
   FUNC_5(VAR_4->workqueue,
       &VAR_4->bt_traffic_change_work);
  }
 }



 if (FUNC_2(VAR_4, VAR_9) ||
     FUNC_4(VAR_4, VAR_9))
  FUNC_5(VAR_4->workqueue, &VAR_4->bt_runtime_config);




 VAR_4->bt_ci_compliance = VAR_8->bt_ci_compliance;
 return 0;
}
