
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r6040_private {scalar_t__ switch_sig; int timer; int napi; int rx_ring_dma; void* rx_ring; int pdev; int tx_ring_dma; void* tx_ring; } ;
struct net_device {int name; int irq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *) ;
 struct r6040_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 void* FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ,void*,int ) ;
 int VAR_7 ;
 int FUNC_6 (struct net_device*) ;
 int VAR_8 ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ,int *,int ,int ,struct net_device*) ;
 int FUNC_9 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_9)
{
 struct r6040_private *VAR_10 = FUNC_2(VAR_9);
 int VAR_11;


 VAR_11 = FUNC_8(VAR_9->irq, &VAR_7,
  VAR_3, VAR_9->name, VAR_9);
 if (VAR_11)
  return VAR_11;


 FUNC_6(VAR_9);


 VAR_10->rx_ring =
  FUNC_4(VAR_10->pdev, VAR_4, &VAR_10->rx_ring_dma);
 if (!VAR_10->rx_ring)
  return -VAR_0;

 VAR_10->tx_ring =
  FUNC_4(VAR_10->pdev, VAR_5, &VAR_10->tx_ring_dma);
 if (!VAR_10->tx_ring) {
  FUNC_5(VAR_10->pdev, VAR_4, VAR_10->rx_ring,
         VAR_10->rx_ring_dma);
  return -VAR_0;
 }

 VAR_11 = FUNC_7(VAR_9);
 if (VAR_11) {
  FUNC_5(VAR_10->pdev, VAR_5, VAR_10->tx_ring,
       VAR_10->tx_ring_dma);
  FUNC_5(VAR_10->pdev, VAR_4, VAR_10->rx_ring,
       VAR_10->rx_ring_dma);
  return VAR_11;
 }

 FUNC_1(&VAR_10->napi);
 FUNC_3(VAR_9);


 FUNC_9(&VAR_10->timer, VAR_8, (unsigned long) VAR_9);
 if (VAR_10->switch_sig != VAR_2)
  FUNC_0(&VAR_10->timer, VAR_6 + VAR_1);
 return 0;
}
