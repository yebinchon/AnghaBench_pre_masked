
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int data; } ;
struct net_device {int trans_start; int base_addr; } ;
struct dev_priv {unsigned int txhead; unsigned int txhdr; unsigned int* txbuffer; int chip_lock; } ;


 int CSR0 ;
 int CSR0_IENA ;
 int CSR0_TDMD ;
 int NETDEV_TX_OK ;
 int TMD_ENP ;
 int TMD_OWN ;
 int TMD_STP ;
 unsigned int TX_BUFFERS ;
 int am_readword (struct net_device*,unsigned int) ;
 int am_writebuffer (struct net_device*,unsigned int,int ,int) ;
 int am_writeword (struct net_device*,unsigned int,int) ;
 int dev_kfree_skb (struct sk_buff*) ;
 int jiffies ;
 struct dev_priv* netdev_priv (struct net_device*) ;
 int netif_stop_queue (struct net_device*) ;
 int spin_lock_irqsave (int *,unsigned long) ;
 int spin_unlock_irqrestore (int *,unsigned long) ;
 int write_rreg (int ,int ,int) ;

__attribute__((used)) static int
am79c961_sendpacket(struct sk_buff *skb, struct net_device *dev)
{
 struct dev_priv *priv = netdev_priv(dev);
 unsigned int hdraddr, bufaddr;
 unsigned int head;
 unsigned long flags;

 head = priv->txhead;
 hdraddr = priv->txhdr + (head << 3);
 bufaddr = priv->txbuffer[head];
 head += 1;
 if (head >= TX_BUFFERS)
  head = 0;

 am_writebuffer (dev, bufaddr, skb->data, skb->len);
 am_writeword (dev, hdraddr + 4, -skb->len);
 am_writeword (dev, hdraddr + 2, TMD_OWN|TMD_STP|TMD_ENP);
 priv->txhead = head;

 spin_lock_irqsave(&priv->chip_lock, flags);
 write_rreg (dev->base_addr, CSR0, CSR0_TDMD|CSR0_IENA);
 dev->trans_start = jiffies;
 spin_unlock_irqrestore(&priv->chip_lock, flags);






 if (am_readword(dev, priv->txhdr + (priv->txhead << 3) + 2) & TMD_OWN)
  netif_stop_queue(dev);

 dev_kfree_skb(skb);

 return NETDEV_TX_OK;
}
