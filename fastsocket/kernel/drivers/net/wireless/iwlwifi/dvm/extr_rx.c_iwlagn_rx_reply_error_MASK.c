
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_priv {int dummy; } ;
struct iwl_error_resp {int error_info; int bad_cmd_seq_num; int cmd_id; int error_type; } ;
struct iwl_device_cmd {int dummy; } ;


 int FUNC_0 (struct iwl_priv*,char*,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct iwl_rx_packet* FUNC_3 (struct iwl_rx_cmd_buffer*) ;

__attribute__((used)) static int FUNC_4(struct iwl_priv *VAR_0,
          struct iwl_rx_cmd_buffer *VAR_1,
          struct iwl_device_cmd *VAR_2)
{
 struct iwl_rx_packet *VAR_3 = FUNC_3(VAR_1);
 struct iwl_error_resp *VAR_4 = (void *)VAR_3->data;

 FUNC_0(VAR_0, "Error Reply type 0x%08X cmd REPLY_ERROR (0x%02X) "
  "seq 0x%04X ser 0x%08X\n",
  FUNC_2(VAR_4->error_type),
  VAR_4->cmd_id,
  FUNC_1(VAR_4->bad_cmd_seq_num),
  FUNC_2(VAR_4->error_info));
 return 0;
}
