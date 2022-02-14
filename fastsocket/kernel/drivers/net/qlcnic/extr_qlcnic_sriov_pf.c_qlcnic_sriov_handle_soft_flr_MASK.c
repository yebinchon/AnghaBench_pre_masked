
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_vf_info {int pci_func; struct qlcnic_bc_trans* flr_trans; int state; } ;
struct qlcnic_sriov {int dummy; } ;
struct qlcnic_bc_trans {int dummy; } ;
struct qlcnic_adapter {int netdev; TYPE_1__* ahw; } ;
struct TYPE_2__ {struct qlcnic_sriov* sriov; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct qlcnic_sriov*,struct qlcnic_vf_info*,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct qlcnic_adapter *VAR_4,
      struct qlcnic_bc_trans *VAR_5,
      struct qlcnic_vf_info *VAR_6)
{
 struct qlcnic_sriov *VAR_7 = VAR_4->ahw->sriov;

 FUNC_3(VAR_0, &VAR_6->state);
 FUNC_0(VAR_2, &VAR_6->state);
 FUNC_3(VAR_1, &VAR_6->state);
 VAR_6->flr_trans = VAR_5;
 FUNC_2(VAR_7, VAR_6, VAR_3);
 FUNC_1(VAR_4->netdev, "Software FLR for PCI func %d\n",
      VAR_6->pci_func);
}
