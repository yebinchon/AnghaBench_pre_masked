
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rx_packet {int data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_mvm {int ampdu_ref; int last_phy_info; } ;
struct iwl_device_cmd {int dummy; } ;


 int FUNC_0 (int *,int ,int) ;
 struct iwl_rx_packet* FUNC_1 (struct iwl_rx_cmd_buffer*) ;

int FUNC_2(struct iwl_mvm *VAR_0, struct iwl_rx_cmd_buffer *VAR_1,
     struct iwl_device_cmd *VAR_2)
{
 struct iwl_rx_packet *VAR_3 = FUNC_1(VAR_1);

 FUNC_0(&VAR_0->last_phy_info, VAR_3->data, sizeof(VAR_0->last_phy_info));
 VAR_0->ampdu_ref++;
 return 0;
}
