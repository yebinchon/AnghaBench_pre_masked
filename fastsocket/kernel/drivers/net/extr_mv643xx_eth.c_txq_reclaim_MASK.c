
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct tx_queue {int index; scalar_t__ tx_desc_count; int tx_used_desc; int tx_ring_size; int tx_skb; struct tx_desc* tx_desc_area; } ;
struct tx_desc {int cmd_sts; int byte_cnt; int buf_ptr; } ;
struct sk_buff {int dummy; } ;
struct netdev_queue {int dummy; } ;
struct mv643xx_eth_private {scalar_t__ rx_ring_size; int work_tx; int rx_recycle; int skb_size; TYPE_2__* dev; } ;
struct TYPE_6__ {int parent; } ;
struct TYPE_4__ {int tx_errors; } ;
struct TYPE_5__ {TYPE_3__ dev; TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct netdev_queue*,int ) ;
 int FUNC_1 (struct netdev_queue*) ;
 struct sk_buff* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,TYPE_3__*,char*) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 struct netdev_queue* FUNC_8 (TYPE_2__*,int) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 () ;
 struct mv643xx_eth_private* FUNC_12 (struct tx_queue*) ;

__attribute__((used)) static int FUNC_13(struct tx_queue *VAR_6, int VAR_7, int VAR_8)
{
 struct mv643xx_eth_private *VAR_9 = FUNC_12(VAR_6);
 struct netdev_queue *VAR_10 = FUNC_8(VAR_9->dev, VAR_6->index);
 int VAR_11;

 FUNC_0(VAR_10, FUNC_11());

 VAR_11 = 0;
 while (VAR_11 < VAR_7 && VAR_6->tx_desc_count > 0) {
  int VAR_12;
  struct tx_desc *VAR_13;
  u32 VAR_14;
  struct sk_buff *VAR_15;

  VAR_12 = VAR_6->tx_used_desc;
  VAR_13 = &VAR_6->tx_desc_area[VAR_12];
  VAR_14 = VAR_13->cmd_sts;

  if (VAR_14 & VAR_0) {
   if (!VAR_8)
    break;
   VAR_13->cmd_sts = VAR_14 & ~VAR_0;
  }

  VAR_6->tx_used_desc = VAR_12 + 1;
  if (VAR_6->tx_used_desc == VAR_6->tx_ring_size)
   VAR_6->tx_used_desc = 0;

  VAR_11++;
  VAR_6->tx_desc_count--;

  VAR_15 = ((void*)0);
  if (VAR_14 & VAR_5)
   VAR_15 = FUNC_2(&VAR_6->tx_skb);

  if (VAR_14 & VAR_2) {
   FUNC_5(VAR_3, &VAR_9->dev->dev, "tx error\n");
   VAR_9->dev->stats.tx_errors++;
  }

  if (VAR_14 & VAR_4) {
   FUNC_7(VAR_9->dev->dev.parent, VAR_13->buf_ptr,
      VAR_13->byte_cnt, VAR_1);
  } else {
   FUNC_6(VAR_9->dev->dev.parent, VAR_13->buf_ptr,
           VAR_13->byte_cnt, VAR_1);
  }

  if (VAR_15 != ((void*)0)) {
   if (FUNC_9(&VAR_9->rx_recycle) <
     VAR_9->rx_ring_size &&
       FUNC_10(VAR_15, VAR_9->skb_size))
    FUNC_3(&VAR_9->rx_recycle, VAR_15);
   else
    FUNC_4(VAR_15);
  }
 }

 FUNC_1(VAR_10);

 if (VAR_11 < VAR_7)
  VAR_9->work_tx &= ~(1 << VAR_6->index);

 return VAR_11;
}
