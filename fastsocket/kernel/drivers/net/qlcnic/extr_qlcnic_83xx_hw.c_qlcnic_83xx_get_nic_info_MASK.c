
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qlcnic_info {int op_type; int pci_func; int op_mode; int phys_port; int switch_mode; int capabilities; int max_mac_filters; int max_mtu; int max_tx_ques; int max_rx_ques; int min_tx_bw; int max_tx_bw; int max_bw_reg_offset; int max_linkspeed_reg_offset; } ;
struct TYPE_8__ {int* arg; } ;
struct TYPE_5__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_4__ rsp; TYPE_1__ req; } ;
struct qlcnic_adapter {TYPE_3__* pdev; TYPE_2__* ahw; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int pci_func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_2 (struct qlcnic_cmd_args*) ;
 int FUNC_3 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

int FUNC_4(struct qlcnic_adapter *VAR_2,
        struct qlcnic_info *VAR_3, u8 VAR_4)
{
 int VAR_5;
 u32 VAR_6;
 u8 VAR_7 = 0;
 struct qlcnic_cmd_args VAR_8;

 FUNC_1(&VAR_8, VAR_2, VAR_1);
 if (VAR_4 != VAR_2->ahw->pci_func) {
  VAR_6 = VAR_4 << 16;
  VAR_8.req.arg[1] = VAR_7 | VAR_0 | VAR_6;
 } else {
  VAR_8.req.arg[1] = VAR_2->ahw->pci_func << 16;
 }
 VAR_5 = FUNC_3(VAR_2, &VAR_8);
 if (VAR_5) {
  FUNC_0(&VAR_2->pdev->dev,
    "Failed to get nic info %d\n", VAR_5);
  goto out;
 }

 VAR_3->op_type = VAR_8.rsp.arg[1];
 VAR_3->pci_func = VAR_8.rsp.arg[2] & 0xFFFF;
 VAR_3->op_mode = (VAR_8.rsp.arg[2] & 0xFFFF0000) >> 16;
 VAR_3->phys_port = VAR_8.rsp.arg[3] & 0xFFFF;
 VAR_3->switch_mode = (VAR_8.rsp.arg[3] & 0xFFFF0000) >> 16;
 VAR_3->capabilities = VAR_8.rsp.arg[4];
 VAR_3->max_mac_filters = VAR_8.rsp.arg[5] & 0xFF;
 VAR_3->max_mtu = (VAR_8.rsp.arg[5] & 0xFFFF0000) >> 16;
 VAR_3->max_tx_ques = VAR_8.rsp.arg[6] & 0xFFFF;
 VAR_3->max_rx_ques = (VAR_8.rsp.arg[6] & 0xFFFF0000) >> 16;
 VAR_3->min_tx_bw = VAR_8.rsp.arg[7] & 0xFFFF;
 VAR_3->max_tx_bw = (VAR_8.rsp.arg[7] & 0xFFFF0000) >> 16;
 if (VAR_8.rsp.arg[8] & 0x1)
  VAR_3->max_bw_reg_offset = (VAR_8.rsp.arg[8] & 0x7FFE) >> 1;
 if (VAR_8.rsp.arg[8] & 0x10000) {
  VAR_6 = (VAR_8.rsp.arg[8] & 0x7FFE0000) >> 17;
  VAR_3->max_linkspeed_reg_offset = VAR_6;
 }

out:
 FUNC_2(&VAR_8);
 return VAR_5;
}
