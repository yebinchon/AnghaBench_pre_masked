
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qlcnic_adapter {int * mac_addr; struct pci_dev* pdev; struct net_device* netdev; } ;
struct pci_dev {int dev; } ;
struct net_device {int addr_len; int * dev_addr; int * perm_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*,int *) ;

int FUNC_4(struct qlcnic_adapter *VAR_2)
{
 u8 VAR_3[VAR_1];
 struct net_device *VAR_4 = VAR_2->netdev;
 struct pci_dev *VAR_5 = VAR_2->pdev;

 if (FUNC_3(VAR_2, VAR_3) != 0)
  return -VAR_0;

 FUNC_2(VAR_4->dev_addr, VAR_3, VAR_1);
 FUNC_2(VAR_4->perm_addr, VAR_4->dev_addr, VAR_4->addr_len);
 FUNC_2(VAR_2->mac_addr, VAR_4->dev_addr, VAR_4->addr_len);



 if (!FUNC_1(VAR_4->perm_addr))
  FUNC_0(&VAR_5->dev, "Bad MAC address %pM.\n",
     VAR_4->dev_addr);

 return 0;
}
