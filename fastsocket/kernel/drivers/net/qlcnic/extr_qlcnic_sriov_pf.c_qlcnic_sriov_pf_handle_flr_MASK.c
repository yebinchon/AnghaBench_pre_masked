
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_vf_info {int pci_func; int state; TYPE_1__* adapter; } ;
struct qlcnic_sriov {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct net_device*,char*,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct qlcnic_sriov*,struct qlcnic_vf_info*,int ) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

void FUNC_5(struct qlcnic_sriov *VAR_3,
    struct qlcnic_vf_info *VAR_4)
{
 struct net_device *VAR_5 = VAR_4->adapter->netdev;

 if (!FUNC_3(VAR_1, &VAR_4->state)) {
  FUNC_0(VAR_0, &VAR_4->state);
  return;
 }

 if (FUNC_4(VAR_0, &VAR_4->state)) {
  FUNC_1(VAR_5, "FLR for PCI func %d in progress\n",
       VAR_4->pci_func);
  return;
 }

 FUNC_2(VAR_3, VAR_4, VAR_2);
 FUNC_1(VAR_5, "FLR received for PCI func %d\n", VAR_4->pci_func);
}
