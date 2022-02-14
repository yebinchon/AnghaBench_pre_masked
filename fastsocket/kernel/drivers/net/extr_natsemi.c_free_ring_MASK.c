
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_private {int ring_dma; int rx_ring; int pci_dev; } ;
struct netdev_desc {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct netdev_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2)
{
 struct netdev_private *VAR_3 = FUNC_0(VAR_2);
 FUNC_1(VAR_3->pci_dev,
  sizeof(struct netdev_desc) * (VAR_0+VAR_1),
  VAR_3->rx_ring, VAR_3->ring_dma);
}
