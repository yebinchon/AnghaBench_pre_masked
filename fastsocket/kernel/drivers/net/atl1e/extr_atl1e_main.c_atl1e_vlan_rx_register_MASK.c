
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vlan_group {int dummy; } ;
struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct atl1e_adapter {int hw; struct vlan_group* vlgrp; struct pci_dev* pdev; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct atl1e_adapter*) ;
 int FUNC_3 (struct atl1e_adapter*) ;
 int FUNC_4 (int *,char*) ;
 struct atl1e_adapter* FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_2,
       struct vlan_group *VAR_3)
{
 struct atl1e_adapter *VAR_4 = FUNC_5(VAR_2);
 struct pci_dev *VAR_5 = VAR_4->pdev;
 u32 VAR_6 = 0;

 FUNC_4(&VAR_5->dev, "atl1e_vlan_rx_register\n");

 FUNC_2(VAR_4);

 VAR_4->vlgrp = VAR_3;
 VAR_6 = FUNC_0(&VAR_4->hw, VAR_1);

 if (VAR_3) {

  VAR_6 |= VAR_0;
 } else {

  VAR_6 &= ~VAR_0;
 }

 FUNC_1(&VAR_4->hw, VAR_1, VAR_6);
 FUNC_3(VAR_4);
}
