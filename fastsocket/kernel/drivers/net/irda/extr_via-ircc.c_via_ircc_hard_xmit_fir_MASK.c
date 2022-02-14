
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_10__ {size_t free; int len; TYPE_4__* queue; int tail; } ;
struct TYPE_7__ {int speed; int fir_base; } ;
struct TYPE_6__ {scalar_t__ len; } ;
struct via_ircc_cb {int chip_id; int new_speed; int lock; TYPE_5__ tx_fifo; TYPE_2__ io; TYPE_1__ st_fifo; } ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_8__ {int tx_bytes; } ;
struct net_device {void* trans_start; TYPE_3__ stats; } ;
typedef int netdev_tx_t ;
typedef int __u32 ;
struct TYPE_9__ {int start; scalar_t__ len; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*) ;
 void* VAR_1 ;
 struct via_ircc_cb* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct via_ircc_cb*,int) ;
 int FUNC_10 (struct via_ircc_cb*,int ) ;

__attribute__((used)) static netdev_tx_t FUNC_11(struct sk_buff *VAR_2,
      struct net_device *VAR_3)
{
 struct via_ircc_cb *VAR_4;
 u16 VAR_5;
 __u32 VAR_6;
 unsigned long VAR_7;

 VAR_4 = FUNC_3(VAR_3);
 VAR_5 = VAR_4->io.fir_base;

 if (VAR_4->st_fifo.len)
  return VAR_0;
 if (VAR_4->chip_id == 0x3076)
  FUNC_1(1500);
 else
  FUNC_8(1500);
 FUNC_4(VAR_3);
 VAR_6 = FUNC_2(VAR_2);
 if ((VAR_6 != VAR_4->io.speed) && (VAR_6 != -1)) {
  if (!VAR_2->len) {
   FUNC_9(VAR_4, VAR_6);
   VAR_3->trans_start = VAR_1;
   FUNC_0(VAR_2);
   return VAR_0;
  } else
   VAR_4->new_speed = VAR_6;
 }
 FUNC_6(&VAR_4->lock, VAR_7);
 VAR_4->tx_fifo.queue[VAR_4->tx_fifo.free].start = VAR_4->tx_fifo.tail;
 VAR_4->tx_fifo.queue[VAR_4->tx_fifo.free].len = VAR_2->len;

 VAR_4->tx_fifo.tail += VAR_2->len;
 VAR_3->stats.tx_bytes += VAR_2->len;
 FUNC_5(VAR_2,
        VAR_4->tx_fifo.queue[VAR_4->tx_fifo.free].start, VAR_2->len);
 VAR_4->tx_fifo.len++;
 VAR_4->tx_fifo.free++;

 FUNC_10(VAR_4, VAR_5);


 VAR_3->trans_start = VAR_1;
 FUNC_0(VAR_2);
 FUNC_7(&VAR_4->lock, VAR_7);
 return VAR_0;

}
