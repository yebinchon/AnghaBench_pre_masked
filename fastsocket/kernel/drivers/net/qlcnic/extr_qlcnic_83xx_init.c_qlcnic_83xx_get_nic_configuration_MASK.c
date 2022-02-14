
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct qlcnic_info {int capabilities; int max_mtu; int max_mac_filters; int max_rx_ques; int max_tx_ques; int switch_mode; scalar_t__ phys_port; } ;
struct qlcnic_hardware_context {int capabilities; int nic_mode; int max_mtu; int max_mac_filters; int max_rx_ques; int max_tx_ques; int switch_mode; scalar_t__ physical_port; int pci_func; } ;
struct qlcnic_adapter {int state; struct qlcnic_hardware_context* ahw; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct qlcnic_info*,int ,int) ;
 int FUNC_1 (struct qlcnic_adapter*,struct qlcnic_info*,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;

int FUNC_3(struct qlcnic_adapter *VAR_5)
{
 int VAR_6;
 struct qlcnic_info VAR_7;
 struct qlcnic_hardware_context *VAR_8 = VAR_5->ahw;

 FUNC_0(&VAR_7, 0, sizeof(struct qlcnic_info));
 VAR_6 = FUNC_1(VAR_5, &VAR_7, VAR_8->pci_func);
 if (VAR_6)
  return -VAR_1;

 VAR_8->physical_port = (u8) VAR_7.phys_port;
 VAR_8->switch_mode = VAR_7.switch_mode;
 VAR_8->max_tx_ques = VAR_7.max_tx_ques;
 VAR_8->max_rx_ques = VAR_7.max_rx_ques;
 VAR_8->capabilities = VAR_7.capabilities;
 VAR_8->max_mac_filters = VAR_7.max_mac_filters;
 VAR_8->max_mtu = VAR_7.max_mtu;






 if (FUNC_2(VAR_4, &VAR_5->state)) {
  VAR_8->nic_mode = VAR_2;
  return VAR_8->nic_mode;
 }

 if (VAR_8->capabilities & VAR_0)
  VAR_8->nic_mode = VAR_3;
 else
  VAR_8->nic_mode = VAR_2;

 return VAR_8->nic_mode;
}
