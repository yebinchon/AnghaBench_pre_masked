
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w840_tx_desc {int dummy; } ;
struct w840_rx_desc {int dummy; } ;
struct netdev_private {int rx_buf_sz; int rx_ring; int ring_dma_addr; int pci_dev; } ;
struct net_device {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 struct netdev_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int,int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4)
{
 struct netdev_private *VAR_5 = FUNC_1(VAR_4);

 VAR_5->rx_buf_sz = (VAR_4->mtu <= 1500 ? VAR_1 : VAR_4->mtu + 32);

 VAR_5->rx_ring = FUNC_2(VAR_5->pci_dev,
   sizeof(struct w840_rx_desc)*VAR_2 +
   sizeof(struct w840_tx_desc)*VAR_3,
   &VAR_5->ring_dma_addr);
 if(!VAR_5->rx_ring)
  return -VAR_0;
 FUNC_0(VAR_4);
 return 0;
}
