
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct atl1e_adapter {int vlgrp; int netdev; struct pci_dev* pdev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static void FUNC_2(struct atl1e_adapter *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pdev;

 FUNC_1(&VAR_1->dev, "atl1e_restore_vlan !");
 FUNC_0(VAR_0->netdev, VAR_0->vlgrp);
}
