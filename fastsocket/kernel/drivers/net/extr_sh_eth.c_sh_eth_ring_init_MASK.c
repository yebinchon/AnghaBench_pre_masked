
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_eth_txdesc {int dummy; } ;
struct sh_eth_rxdesc {int dummy; } ;
struct sh_eth_private {int rx_buf_sz; int rx_desc_dma; void* rx_ring; void* tx_ring; int tx_desc_dma; scalar_t__ dirty_rx; void* tx_skbuff; void* rx_skbuff; } ;
struct net_device {int mtu; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 void* FUNC_1 (int *,int,int *,int ) ;
 int FUNC_2 (int *,int,void*,int ) ;
 void* FUNC_3 (int,int ) ;
 struct sh_eth_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_5)
{
 struct sh_eth_private *VAR_6 = FUNC_4(VAR_5);
 int VAR_7, VAR_8, VAR_9 = 0;







 VAR_6->rx_buf_sz = (VAR_5->mtu <= 1492 ? VAR_2 :
     (((VAR_5->mtu + 26 + 7) & ~7) + 2 + 16));


 VAR_6->rx_skbuff = FUNC_3(sizeof(*VAR_6->rx_skbuff) * VAR_3,
    VAR_1);
 if (!VAR_6->rx_skbuff) {
  FUNC_0(&VAR_5->dev, "Cannot allocate Rx skb\n");
  VAR_9 = -VAR_0;
  return VAR_9;
 }

 VAR_6->tx_skbuff = FUNC_3(sizeof(*VAR_6->tx_skbuff) * VAR_4,
    VAR_1);
 if (!VAR_6->tx_skbuff) {
  FUNC_0(&VAR_5->dev, "Cannot allocate Tx skb\n");
  VAR_9 = -VAR_0;
  goto skb_ring_free;
 }


 VAR_7 = sizeof(struct sh_eth_rxdesc) * VAR_3;
 VAR_6->rx_ring = FUNC_1(((void*)0), VAR_7, &VAR_6->rx_desc_dma,
   VAR_1);

 if (!VAR_6->rx_ring) {
  FUNC_0(&VAR_5->dev, "Cannot allocate Rx Ring (size %d bytes)\n",
   VAR_7);
  VAR_9 = -VAR_0;
  goto desc_ring_free;
 }

 VAR_6->dirty_rx = 0;


 VAR_8 = sizeof(struct sh_eth_txdesc) * VAR_4;
 VAR_6->tx_ring = FUNC_1(((void*)0), VAR_8, &VAR_6->tx_desc_dma,
   VAR_1);
 if (!VAR_6->tx_ring) {
  FUNC_0(&VAR_5->dev, "Cannot allocate Tx Ring (size %d bytes)\n",
   VAR_8);
  VAR_9 = -VAR_0;
  goto desc_ring_free;
 }
 return VAR_9;

desc_ring_free:

 FUNC_2(((void*)0), VAR_7, VAR_6->rx_ring, VAR_6->rx_desc_dma);

skb_ring_free:

 FUNC_5(VAR_5);

 return VAR_9;
}
