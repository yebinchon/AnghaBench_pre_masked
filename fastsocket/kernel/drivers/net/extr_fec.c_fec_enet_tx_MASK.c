
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int collisions; int tx_packets; int tx_carrier_errors; int tx_fifo_errors; int tx_aborted_errors; int tx_window_errors; int tx_heartbeat_errors; int tx_errors; } ;
struct net_device {TYPE_1__ stats; int dev; } ;
struct fec_enet_private {scalar_t__ tx_full; size_t skb_dirty; int hw_lock; struct bufdesc* dirty_tx; struct bufdesc* tx_bd_base; struct sk_buff** tx_skbuff; struct bufdesc* cur_tx; } ;
struct bufdesc {unsigned short cbd_sc; scalar_t__ cbd_bufaddr; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,scalar_t__,int ,int ) ;
 struct fec_enet_private* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(struct net_device *VAR_11)
{
 struct fec_enet_private *VAR_12;
 struct bufdesc *VAR_13;
 unsigned short VAR_14;
 struct sk_buff *VAR_15;

 VAR_12 = FUNC_2(VAR_11);
 FUNC_6(&VAR_12->hw_lock);
 VAR_13 = VAR_12->dirty_tx;

 while (((VAR_14 = VAR_13->cbd_sc) & VAR_4) == 0) {
  if (VAR_13 == VAR_12->cur_tx && VAR_12->tx_full == 0)
   break;

  FUNC_1(&VAR_11->dev, VAR_13->cbd_bufaddr, VAR_9, VAR_8);
  VAR_13->cbd_bufaddr = 0;

  VAR_15 = VAR_12->tx_skbuff[VAR_12->skb_dirty];

  if (VAR_14 & (VAR_2 | VAR_3 |
       VAR_5 | VAR_6 |
       VAR_0)) {
   VAR_11->stats.tx_errors++;
   if (VAR_14 & VAR_2)
    VAR_11->stats.tx_heartbeat_errors++;
   if (VAR_14 & VAR_3)
    VAR_11->stats.tx_window_errors++;
   if (VAR_14 & VAR_5)
    VAR_11->stats.tx_aborted_errors++;
   if (VAR_14 & VAR_6)
    VAR_11->stats.tx_fifo_errors++;
   if (VAR_14 & VAR_0)
    VAR_11->stats.tx_carrier_errors++;
  } else {
   VAR_11->stats.tx_packets++;
  }

  if (VAR_14 & VAR_4)
   FUNC_5("HEY! Enet xmit interrupt and TX_READY.\n");




  if (VAR_14 & VAR_1)
   VAR_11->stats.collisions++;


  FUNC_0(VAR_15);
  VAR_12->tx_skbuff[VAR_12->skb_dirty] = ((void*)0);
  VAR_12->skb_dirty = (VAR_12->skb_dirty + 1) & VAR_10;


  if (VAR_14 & VAR_7)
   VAR_13 = VAR_12->tx_bd_base;
  else
   VAR_13++;



  if (VAR_12->tx_full) {
   VAR_12->tx_full = 0;
   if (FUNC_3(VAR_11))
    FUNC_4(VAR_11);
  }
 }
 VAR_12->dirty_tx = VAR_13;
 FUNC_7(&VAR_12->hw_lock);
}
