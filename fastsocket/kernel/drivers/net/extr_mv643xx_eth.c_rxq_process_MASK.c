
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {scalar_t__ ip_summed; TYPE_1__* dev; int protocol; } ;
struct rx_queue {size_t rx_curr_desc; size_t rx_ring_size; int index; int lro_mgr; scalar_t__ rx_desc_count; struct sk_buff** rx_skb; struct rx_desc* rx_desc_area; } ;
struct rx_desc {unsigned int cmd_sts; int byte_cnt; int buf_size; int buf_ptr; } ;
struct net_device_stats {int rx_errors; int rx_dropped; int rx_bytes; int rx_packets; } ;
struct mv643xx_eth_private {int work_rx_refill; int work_rx; TYPE_2__* dev; } ;
struct TYPE_6__ {int parent; } ;
struct TYPE_5__ {TYPE_3__ dev; struct net_device_stats stats; } ;
struct TYPE_4__ {int features; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,TYPE_3__*,char*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct sk_buff*,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct sk_buff*,void*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 () ;
 struct mv643xx_eth_private* FUNC_9 (struct rx_queue*) ;
 int FUNC_10 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_11(struct rx_queue *VAR_9, int VAR_10)
{
 struct mv643xx_eth_private *VAR_11 = FUNC_9(VAR_9);
 struct net_device_stats *VAR_12 = &VAR_11->dev->stats;
 int VAR_13;
 int VAR_14;

 VAR_13 = 0;
 VAR_14 = 0;
 while (VAR_14 < VAR_10 && VAR_9->rx_desc_count) {
  struct rx_desc *VAR_15;
  unsigned int VAR_16;
  struct sk_buff *VAR_17;
  u16 VAR_18;

  VAR_15 = &VAR_9->rx_desc_area[VAR_9->rx_curr_desc];

  VAR_16 = VAR_15->cmd_sts;
  if (VAR_16 & VAR_0)
   break;
  FUNC_8();

  VAR_17 = VAR_9->rx_skb[VAR_9->rx_curr_desc];
  VAR_9->rx_skb[VAR_9->rx_curr_desc] = ((void*)0);

  VAR_9->rx_curr_desc++;
  if (VAR_9->rx_curr_desc == VAR_9->rx_ring_size)
   VAR_9->rx_curr_desc = 0;

  FUNC_2(VAR_11->dev->dev.parent, VAR_15->buf_ptr,
     VAR_15->buf_size, VAR_2);
  VAR_9->rx_desc_count--;
  VAR_14++;

  VAR_11->work_rx_refill |= 1 << VAR_9->index;

  VAR_18 = VAR_15->byte_cnt;
  VAR_12->rx_packets++;
  VAR_12->rx_bytes += VAR_18 - 2;






  if ((VAR_16 & (VAR_7 | VAR_8 | VAR_3))
   != (VAR_7 | VAR_8))
   goto err;





  FUNC_10(VAR_17, VAR_18 - 2 - 4);

  if (VAR_16 & VAR_5)
   VAR_17->ip_summed = VAR_1;
  VAR_17->protocol = FUNC_3(VAR_17, VAR_11->dev);

  if (VAR_17->dev->features & VAR_6 &&
      VAR_17->ip_summed == VAR_1) {
   FUNC_5(&VAR_9->lro_mgr, VAR_17, (void *)VAR_16);
   VAR_13 = 1;
  } else
   FUNC_7(VAR_17);

  continue;

err:
  VAR_12->rx_dropped++;

  if ((VAR_16 & (VAR_7 | VAR_8)) !=
   (VAR_7 | VAR_8)) {
   if (FUNC_6())
    FUNC_1(VAR_4, &VAR_11->dev->dev,
        "received packet spanning "
        "multiple descriptors\n");
  }

  if (VAR_16 & VAR_3)
   VAR_12->rx_errors++;

  FUNC_0(VAR_17);
 }

 if (VAR_13)
  FUNC_4(&VAR_9->lro_mgr);

 if (VAR_14 < VAR_10)
  VAR_11->work_rx &= ~(1 << VAR_9->index);

 return VAR_14;
}
