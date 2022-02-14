
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_mvm {int last_bt_notif; } ;
struct iwl_device_cmd {int dummy; } ;
struct iwl_bt_coex_profile_notif {char* bt_open_conn; char* bt_traffic_load; char* bt_agg_traffic_load; char* bt_ci_compliance; scalar_t__ bt_status; } ;


 int FUNC_0 (struct iwl_mvm*,char*,...) ;
 int FUNC_1 (struct iwl_mvm*) ;
 int FUNC_2 (int *,struct iwl_bt_coex_profile_notif*,int) ;
 struct iwl_rx_packet* FUNC_3 (struct iwl_rx_cmd_buffer*) ;

int FUNC_4(struct iwl_mvm *VAR_0,
        struct iwl_rx_cmd_buffer *VAR_1,
        struct iwl_device_cmd *VAR_2)
{
 struct iwl_rx_packet *VAR_3 = FUNC_3(VAR_1);
 struct iwl_bt_coex_profile_notif *VAR_4 = (void *)VAR_3->data;


 FUNC_0(VAR_0, "BT Coex Notification received\n");
 FUNC_0(VAR_0, "\tBT %salive\n", VAR_4->bt_status ? "" : "not ");
 FUNC_0(VAR_0, "\tBT open conn %d\n", VAR_4->bt_open_conn);
 FUNC_0(VAR_0, "\tBT traffic load %d\n", VAR_4->bt_traffic_load);
 FUNC_0(VAR_0, "\tBT agg traffic load %d\n",
         VAR_4->bt_agg_traffic_load);
 FUNC_0(VAR_0, "\tBT ci compliance %d\n", VAR_4->bt_ci_compliance);


 FUNC_2(&VAR_0->last_bt_notif, VAR_4, sizeof(VAR_0->last_bt_notif));

 FUNC_1(VAR_0);





 return 0;
}
