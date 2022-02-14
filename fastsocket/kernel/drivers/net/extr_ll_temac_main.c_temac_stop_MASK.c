
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct temac_local {int * phy_dev; int rx_irq; int tx_irq; } ;
struct net_device {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,struct net_device*) ;
 struct temac_local* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0)
{
 struct temac_local *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_0->dev, "temac_close()\n");

 FUNC_1(VAR_1->tx_irq, VAR_0);
 FUNC_1(VAR_1->rx_irq, VAR_0);

 if (VAR_1->phy_dev)
  FUNC_3(VAR_1->phy_dev);
 VAR_1->phy_dev = ((void*)0);

 return 0;
}
