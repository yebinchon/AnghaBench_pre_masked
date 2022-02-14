
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_radio_version_notif {int radio_dash; int radio_step; int radio_flavor; } ;
struct iwl_mvm {int dummy; } ;
struct iwl_device_cmd {int dummy; } ;


 int FUNC_0 (struct iwl_mvm*,char*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 struct iwl_rx_packet* FUNC_2 (struct iwl_rx_cmd_buffer*) ;

int FUNC_3(struct iwl_mvm *VAR_0, struct iwl_rx_cmd_buffer *VAR_1,
    struct iwl_device_cmd *VAR_2)
{
 struct iwl_rx_packet *VAR_3 = FUNC_2(VAR_1);
 struct iwl_radio_version_notif *VAR_4 = (void *)VAR_3->data;


 FUNC_0(VAR_0,
         "Radio version: flavor: 0x%08x, step 0x%08x, dash 0x%08x\n",
         FUNC_1(VAR_4->radio_flavor),
         FUNC_1(VAR_4->radio_step),
         FUNC_1(VAR_4->radio_dash));
 return 0;
}
