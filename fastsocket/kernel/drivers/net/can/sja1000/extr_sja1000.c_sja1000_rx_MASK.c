
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sk_buff {int protocol; struct net_device* dev; } ;
struct sja1000_priv {int (* read_reg ) (struct sja1000_priv*,int ) ;int (* write_reg ) (struct sja1000_priv*,int ,int ) ;} ;
struct net_device_stats {int rx_bytes; int rx_packets; } ;
struct net_device {struct net_device_stats stats; } ;
struct can_frame {int can_id; int can_dlc; int* data; } ;
typedef int canid_t ;


 int CAN_EFF_FLAG ;
 int CAN_RTR_FLAG ;
 int CMD_RRB ;
 int EFF_BUF ;
 int ETH_P_CAN ;
 int FI_FF ;
 int FI_RTR ;
 int REG_CMR ;
 int REG_FI ;
 int REG_ID1 ;
 int REG_ID2 ;
 int REG_ID3 ;
 int REG_ID4 ;
 int SFF_BUF ;
 struct sk_buff* dev_alloc_skb (int) ;
 int htons (int ) ;
 int memset (struct can_frame*,int ,int) ;
 struct sja1000_priv* netdev_priv (struct net_device*) ;
 int netif_rx (struct sk_buff*) ;
 scalar_t__ skb_put (struct sk_buff*,int) ;
 int stub1 (struct sja1000_priv*,int ) ;
 int stub2 (struct sja1000_priv*,int ) ;
 int stub3 (struct sja1000_priv*,int ) ;
 int stub4 (struct sja1000_priv*,int ) ;
 int stub5 (struct sja1000_priv*,int ) ;
 int stub6 (struct sja1000_priv*,int ) ;
 int stub7 (struct sja1000_priv*,int ) ;
 int stub8 (struct sja1000_priv*,int ) ;
 int stub9 (struct sja1000_priv*,int ,int ) ;

__attribute__((used)) static void sja1000_rx(struct net_device *dev)
{
 struct sja1000_priv *priv = netdev_priv(dev);
 struct net_device_stats *stats = &dev->stats;
 struct can_frame *cf;
 struct sk_buff *skb;
 uint8_t fi;
 uint8_t dreg;
 canid_t id;
 uint8_t dlc;
 int i;

 skb = dev_alloc_skb(sizeof(struct can_frame));
 if (skb == ((void*)0))
  return;
 skb->dev = dev;
 skb->protocol = htons(ETH_P_CAN);

 fi = priv->read_reg(priv, REG_FI);
 dlc = fi & 0x0F;

 if (fi & FI_FF) {

  dreg = EFF_BUF;
  id = (priv->read_reg(priv, REG_ID1) << (5 + 16))
      | (priv->read_reg(priv, REG_ID2) << (5 + 8))
      | (priv->read_reg(priv, REG_ID3) << 5)
      | (priv->read_reg(priv, REG_ID4) >> 3);
  id |= CAN_EFF_FLAG;
 } else {

  dreg = SFF_BUF;
  id = (priv->read_reg(priv, REG_ID1) << 3)
      | (priv->read_reg(priv, REG_ID2) >> 5);
 }

 if (fi & FI_RTR)
  id |= CAN_RTR_FLAG;

 cf = (struct can_frame *)skb_put(skb, sizeof(struct can_frame));
 memset(cf, 0, sizeof(struct can_frame));
 cf->can_id = id;
 cf->can_dlc = dlc;
 for (i = 0; i < dlc; i++)
  cf->data[i] = priv->read_reg(priv, dreg++);

 while (i < 8)
  cf->data[i++] = 0;


 priv->write_reg(priv, REG_CMR, CMD_RRB);

 netif_rx(skb);

 stats->rx_packets++;
 stats->rx_bytes += dlc;
}
