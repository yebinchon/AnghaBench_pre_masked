
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int irq; } ;
struct device {int dummy; } ;
struct bcm_enet_priv {int rx_ring_size; int * phydev; scalar_t__ has_phy; int irq_rx; int irq_tx; int tx_desc_dma; struct bcm_enet_desc* tx_desc_cpu; int tx_desc_alloc_size; int rx_desc_dma; struct bcm_enet_desc* rx_desc_cpu; int rx_desc_alloc_size; int * tx_skb; int * rx_skb; int rx_skb_size; int rx_chan; int tx_chan; int rx_timeout; int napi; TYPE_1__* pdev; } ;
struct bcm_enet_desc {int address; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct bcm_enet_priv*,int ) ;
 int FUNC_2 (struct bcm_enet_priv*) ;
 int FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct device*,int ,struct bcm_enet_desc*,int ) ;
 int FUNC_6 (struct device*,int ,int ,int ) ;
 int FUNC_7 (struct bcm_enet_priv*,int ,int ) ;
 int FUNC_8 (struct bcm_enet_priv*,int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,struct net_device*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 struct bcm_enet_priv* FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct net_device *VAR_2)
{
 struct bcm_enet_priv *VAR_3;
 struct device *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_14(VAR_2);
 VAR_4 = &VAR_3->pdev->dev;

 FUNC_15(VAR_2);
 FUNC_13(&VAR_3->napi);
 if (VAR_3->has_phy)
  FUNC_17(VAR_3->phydev);
 FUNC_4(&VAR_3->rx_timeout);


 FUNC_8(VAR_3, 0, VAR_1);
 FUNC_7(VAR_3, 0, FUNC_0(VAR_3->rx_chan));
 FUNC_7(VAR_3, 0, FUNC_0(VAR_3->tx_chan));


 FUNC_9();


 FUNC_1(VAR_3, VAR_3->tx_chan);
 FUNC_1(VAR_3, VAR_3->rx_chan);
 FUNC_2(VAR_3);


 FUNC_3(VAR_2, 1);


 for (VAR_5 = 0; VAR_5 < VAR_3->rx_ring_size; VAR_5++) {
  struct bcm_enet_desc *VAR_6;

  if (!VAR_3->rx_skb[VAR_5])
   continue;

  VAR_6 = &VAR_3->rx_desc_cpu[VAR_5];
  FUNC_6(VAR_4, VAR_6->address, VAR_3->rx_skb_size,
     VAR_0);
  FUNC_12(VAR_3->rx_skb[VAR_5]);
 }


 FUNC_11(VAR_3->rx_skb);
 FUNC_11(VAR_3->tx_skb);
 FUNC_5(VAR_4, VAR_3->rx_desc_alloc_size,
     VAR_3->rx_desc_cpu, VAR_3->rx_desc_dma);
 FUNC_5(VAR_4, VAR_3->tx_desc_alloc_size,
     VAR_3->tx_desc_cpu, VAR_3->tx_desc_dma);
 FUNC_10(VAR_3->irq_tx, VAR_2);
 FUNC_10(VAR_3->irq_rx, VAR_2);
 FUNC_10(VAR_2->irq, VAR_2);


 if (VAR_3->has_phy) {
  FUNC_16(VAR_3->phydev);
  VAR_3->phydev = ((void*)0);
 }

 return 0;
}
