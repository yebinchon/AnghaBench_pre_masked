
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_mvm {int dummy; } ;
struct iwl_error_resp {int timestamp; int error_service; int bad_cmd_seq_num; int cmd_id; int error_type; } ;
struct iwl_device_cmd {int dummy; } ;


 int FUNC_0 (struct iwl_mvm*,char*,int ,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct iwl_rx_packet* FUNC_4 (struct iwl_rx_cmd_buffer*) ;

int FUNC_5(struct iwl_mvm *VAR_0, struct iwl_rx_cmd_buffer *VAR_1,
     struct iwl_device_cmd *VAR_2)
{
 struct iwl_rx_packet *VAR_3 = FUNC_4(VAR_1);
 struct iwl_error_resp *VAR_4 = (void *)VAR_3->data;

 FUNC_0(VAR_0, "FW Error notification: type 0x%08X cmd_id 0x%02X\n",
  FUNC_2(VAR_4->error_type), VAR_4->cmd_id);
 FUNC_0(VAR_0, "FW Error notification: seq 0x%04X service 0x%08X\n",
  FUNC_1(VAR_4->bad_cmd_seq_num),
  FUNC_2(VAR_4->error_service));
 FUNC_0(VAR_0, "FW Error notification: timestamp 0x%16llX\n",
  FUNC_3(VAR_4->timestamp));
 return 0;
}
