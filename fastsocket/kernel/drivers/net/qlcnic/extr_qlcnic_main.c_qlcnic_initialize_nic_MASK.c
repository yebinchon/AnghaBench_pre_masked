
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct qlcnic_info {int capabilities; int max_mtu; int max_mac_filters; int max_rx_ques; int max_tx_ques; int switch_mode; scalar_t__ phys_port; } ;
struct qlcnic_adapter {int flags; TYPE_1__* ahw; } ;
struct TYPE_2__ {int capabilities; int max_mtu; int max_mac_filters; int capabilities2; int max_rx_ques; int max_tx_ques; int switch_mode; scalar_t__ physical_port; int pci_func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qlcnic_adapter*,int ) ;
 int FUNC_1 (struct qlcnic_info*,int ,int) ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct qlcnic_adapter*,struct qlcnic_info*,int ) ;

__attribute__((used)) static int
FUNC_4(struct qlcnic_adapter *VAR_4)
{
 int VAR_5;
 struct qlcnic_info VAR_6;

 FUNC_1(&VAR_6, 0, sizeof(struct qlcnic_info));
 VAR_5 = FUNC_3(VAR_4, &VAR_6, VAR_4->ahw->pci_func);
 if (VAR_5)
  return VAR_5;

 VAR_4->ahw->physical_port = (u8)VAR_6.phys_port;
 VAR_4->ahw->switch_mode = VAR_6.switch_mode;
 VAR_4->ahw->max_tx_ques = VAR_6.max_tx_ques;
 VAR_4->ahw->max_rx_ques = VAR_6.max_rx_ques;
 VAR_4->ahw->capabilities = VAR_6.capabilities;

 if (VAR_4->ahw->capabilities & VAR_3) {
  u32 VAR_7;
  VAR_7 = FUNC_0(VAR_4, VAR_1);
  VAR_4->ahw->capabilities2 = VAR_7;
 }
 VAR_4->ahw->max_mac_filters = VAR_6.max_mac_filters;
 VAR_4->ahw->max_mtu = VAR_6.max_mtu;


 if (FUNC_2(VAR_4))
  return VAR_5;

 if (VAR_4->ahw->capabilities & VAR_0)
  VAR_4->flags |= VAR_2;
 else
  VAR_4->flags &= ~VAR_2;

 return VAR_5;
}
