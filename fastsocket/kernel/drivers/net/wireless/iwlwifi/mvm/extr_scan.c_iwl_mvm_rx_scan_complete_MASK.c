
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_scan_complete_notif {scalar_t__ status; int scanned_channels; } ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_mvm {int hw; int scan_status; } ;
struct iwl_device_cmd {int dummy; } ;


 int FUNC_0 (struct iwl_mvm*,char*,scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int) ;
 struct iwl_rx_packet* FUNC_2 (struct iwl_rx_cmd_buffer*) ;

int FUNC_3(struct iwl_mvm *VAR_2, struct iwl_rx_cmd_buffer *VAR_3,
     struct iwl_device_cmd *VAR_4)
{
 struct iwl_rx_packet *VAR_5 = FUNC_2(VAR_3);
 struct iwl_scan_complete_notif *VAR_6 = (void *)VAR_5->data;

 FUNC_0(VAR_2, "Scan complete: status=0x%x scanned channels=%d\n",
         VAR_6->status, VAR_6->scanned_channels);

 VAR_2->scan_status = VAR_0;
 FUNC_1(VAR_2->hw, VAR_6->status != VAR_1);

 return 0;
}
