
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev; } ;
struct net_device {int name; } ;
struct atl1c_adapter {int common_task; int work_event; int link_speed; int mdio_lock; int hw; struct pci_dev* pdev; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int*) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct atl1c_adapter*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct atl1c_adapter *VAR_5)
{
 struct net_device *VAR_6 = VAR_5->netdev;
 struct pci_dev *VAR_7 = VAR_5->pdev;
 u16 VAR_8;
 u16 VAR_9;

 FUNC_7(&VAR_5->mdio_lock);
 FUNC_0(&VAR_5->hw, VAR_2, &VAR_8);
 FUNC_0(&VAR_5->hw, VAR_2, &VAR_8);
 FUNC_8(&VAR_5->mdio_lock);
 VAR_9 = VAR_8 & VAR_1;

 if (!VAR_9) {
  if (FUNC_3(VAR_6)) {

   FUNC_2(VAR_6);
   if (FUNC_4(VAR_5))
    FUNC_1(&VAR_7->dev,
     "%s: %s NIC Link is Down\n",
     VAR_4, VAR_6->name);
   VAR_5->link_speed = VAR_3;
  }
 }

 FUNC_6(VAR_0, &VAR_5->work_event);
 FUNC_5(&VAR_5->common_task);
}
