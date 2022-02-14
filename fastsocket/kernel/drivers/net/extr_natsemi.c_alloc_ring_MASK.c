
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_private {int * rx_ring; int * tx_ring; int ring_dma; int pci_dev; } ;
struct netdev_desc {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct netdev_private* FUNC_0 (struct net_device*) ;
 int * FUNC_1 (int ,int,int *) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3)
{
 struct netdev_private *VAR_4 = FUNC_0(VAR_3);
 VAR_4->rx_ring = FUNC_1(VAR_4->pci_dev,
  sizeof(struct netdev_desc) * (VAR_1+VAR_2),
  &VAR_4->ring_dma);
 if (!VAR_4->rx_ring)
  return -VAR_0;
 VAR_4->tx_ring = &VAR_4->rx_ring[VAR_1];
 return 0;
}
