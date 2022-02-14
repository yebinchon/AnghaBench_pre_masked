
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev; } ;
struct net_device {int name; } ;
struct atl1e_adapter {int link_chg_task; int link_speed; int mdio_lock; int hw; struct pci_dev* pdev; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int*) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct atl1e_adapter *VAR_4)
{
 struct net_device *VAR_5 = VAR_4->netdev;
 struct pci_dev *VAR_6 = VAR_4->pdev;
 u16 VAR_7 = 0;
 u16 VAR_8 = 0;

 FUNC_5(&VAR_4->mdio_lock);
 FUNC_0(&VAR_4->hw, VAR_1, &VAR_7);
 FUNC_0(&VAR_4->hw, VAR_1, &VAR_7);
 FUNC_6(&VAR_4->mdio_lock);
 VAR_8 = VAR_7 & VAR_0;

 if (!VAR_8) {
  if (FUNC_2(VAR_5)) {

   FUNC_1(&VAR_6->dev, "%s: %s NIC Link is Down\n",
     VAR_3, VAR_5->name);
   VAR_4->link_speed = VAR_2;
   FUNC_3(VAR_5);
  }
 }
 FUNC_4(&VAR_4->link_chg_task);
}
