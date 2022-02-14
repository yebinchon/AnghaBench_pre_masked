
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct rx_queue {scalar_t__ rx_desc_count; scalar_t__ rx_ring_size; scalar_t__ rx_used_desc; int index; struct sk_buff** rx_skb; struct rx_desc* rx_desc_area; } ;
struct rx_desc {int cmd_sts; int buf_size; int buf_ptr; } ;
struct mv643xx_eth_private {int oom; int work_rx_refill; int skb_size; TYPE_2__* dev; int rx_recycle; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (int *) ;
 struct sk_buff* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 struct mv643xx_eth_private* FUNC_3 (struct rx_queue*) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct rx_queue *VAR_4, int VAR_5)
{
 struct mv643xx_eth_private *VAR_6 = FUNC_3(VAR_4);
 int VAR_7;

 VAR_7 = 0;
 while (VAR_7 < VAR_5 && VAR_4->rx_desc_count < VAR_4->rx_ring_size) {
  struct sk_buff *VAR_8;
  int VAR_9;
  struct rx_desc *VAR_10;

  VAR_8 = FUNC_0(&VAR_6->rx_recycle);
  if (VAR_8 == ((void*)0))
   VAR_8 = FUNC_1(VAR_6->skb_size);

  if (VAR_8 == ((void*)0)) {
   VAR_6->oom = 1;
   goto oom;
  }

  if (VAR_3)
   FUNC_4(VAR_8, VAR_3);

  VAR_7++;
  VAR_4->rx_desc_count++;

  VAR_9 = VAR_4->rx_used_desc++;
  if (VAR_4->rx_used_desc == VAR_4->rx_ring_size)
   VAR_4->rx_used_desc = 0;

  VAR_10 = VAR_4->rx_desc_area + VAR_9;

  VAR_10->buf_ptr = FUNC_2(VAR_6->dev->dev.parent,
        VAR_8->data, VAR_6->skb_size,
        VAR_1);
  VAR_10->buf_size = VAR_6->skb_size;
  VAR_4->rx_skb[VAR_9] = VAR_8;
  FUNC_5();
  VAR_10->cmd_sts = VAR_0 | VAR_2;
  FUNC_5();






  FUNC_4(VAR_8, 2);
 }

 if (VAR_7 < VAR_5)
  VAR_6->work_rx_refill &= ~(1 << VAR_4->index);

oom:
 return VAR_7;
}
