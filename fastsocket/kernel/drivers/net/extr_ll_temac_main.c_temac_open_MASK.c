
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct temac_local {int dev; int * phy_dev; int tx_irq; int rx_irq; scalar_t__ phy_node; int ndev; } ;
struct net_device {int name; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,struct net_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct temac_local* FUNC_3 (struct net_device*) ;
 int * FUNC_4 (int ,scalar_t__,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int ,int ,struct net_device*) ;
 int VAR_3 ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_4)
{
 struct temac_local *VAR_5 = FUNC_3(VAR_4);
 int VAR_6;

 FUNC_0(&VAR_4->dev, "temac_open()\n");

 if (VAR_5->phy_node) {
  VAR_5->phy_dev = FUNC_4(VAR_5->ndev, VAR_5->phy_node,
          VAR_3, 0, 0);
  if (!VAR_5->phy_dev) {
   FUNC_1(VAR_5->dev, "of_phy_connect() failed\n");
   return -VAR_0;
  }

  FUNC_6(VAR_5->phy_dev);
 }

 VAR_6 = FUNC_7(VAR_5->tx_irq, VAR_2, 0, VAR_4->name, VAR_4);
 if (VAR_6)
  goto err_tx_irq;
 VAR_6 = FUNC_7(VAR_5->rx_irq, VAR_1, 0, VAR_4->name, VAR_4);
 if (VAR_6)
  goto err_rx_irq;

 FUNC_8(VAR_4);
 return 0;

 err_rx_irq:
 FUNC_2(VAR_5->tx_irq, VAR_4);
 err_tx_irq:
 if (VAR_5->phy_dev)
  FUNC_5(VAR_5->phy_dev);
 VAR_5->phy_dev = ((void*)0);
 FUNC_1(VAR_5->dev, "request_irq() failed\n");
 return VAR_6;
}
