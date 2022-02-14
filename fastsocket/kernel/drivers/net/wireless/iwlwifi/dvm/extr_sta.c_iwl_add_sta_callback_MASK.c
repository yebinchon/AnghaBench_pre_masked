
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rx_packet {int dummy; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_priv {int dummy; } ;
struct iwl_device_cmd {scalar_t__ payload; } ;


 int FUNC_0 (struct iwl_priv*,void*,struct iwl_rx_packet*) ;
 struct iwl_rx_packet* FUNC_1 (struct iwl_rx_cmd_buffer*) ;

int FUNC_2(struct iwl_priv *VAR_0, struct iwl_rx_cmd_buffer *VAR_1,
          struct iwl_device_cmd *VAR_2)
{
 struct iwl_rx_packet *VAR_3 = FUNC_1(VAR_1);

 if (!VAR_2)
  return 0;

 return FUNC_0(VAR_0, (void *)VAR_2->payload, VAR_3);
}
