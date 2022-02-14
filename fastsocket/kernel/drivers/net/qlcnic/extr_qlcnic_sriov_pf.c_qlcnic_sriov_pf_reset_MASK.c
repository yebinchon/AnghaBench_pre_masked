
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qlcnic_vf_info {int state; int flr_work; scalar_t__ tx_ctx_id; scalar_t__ rx_ctx_id; } ;
struct qlcnic_sriov {int num_vfs; struct qlcnic_vf_info* vf_info; } ;
struct qlcnic_hardware_context {int num_msix; int pci_func; struct qlcnic_sriov* sriov; } ;
struct qlcnic_adapter {struct qlcnic_hardware_context* ahw; } ;


 int VAR_0 ;
 int FUNC_0 (struct qlcnic_hardware_context*,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (struct qlcnic_vf_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct qlcnic_adapter*,int ) ;

void FUNC_5(struct qlcnic_adapter *VAR_2)
{
 struct qlcnic_hardware_context *VAR_3 = VAR_2->ahw;
 struct qlcnic_sriov *VAR_4 = VAR_3->sriov;
 struct qlcnic_vf_info *VAR_5;
 u16 VAR_6 = VAR_4->num_vfs;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_5 = &VAR_4->vf_info[VAR_7];
  VAR_5->rx_ctx_id = 0;
  VAR_5->tx_ctx_id = 0;
  FUNC_2(&VAR_5->flr_work);
  FUNC_1(VAR_5);
  FUNC_3(VAR_1, &VAR_5->state);
 }

 FUNC_4(VAR_2, VAR_3->pci_func);
 FUNC_0(VAR_3, VAR_0, (VAR_3->num_msix - 1) << 8);
}
