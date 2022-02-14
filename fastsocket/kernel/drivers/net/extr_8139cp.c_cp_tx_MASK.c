
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ len; } ;
struct cp_private {unsigned int tx_head; unsigned int tx_tail; TYPE_3__* dev; struct sk_buff** tx_skb; TYPE_1__* pdev; struct cp_desc* tx_ring; } ;
struct cp_desc {int opts1; int addr; } ;
struct TYPE_5__ {int collisions; int tx_bytes; int tx_packets; int tx_fifo_errors; int tx_carrier_errors; int tx_aborted_errors; int tx_window_errors; int tx_errors; } ;
struct TYPE_6__ {int name; TYPE_2__ stats; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct cp_private*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,int ,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct cp_private*) ;
 scalar_t__ FUNC_8 (struct cp_private*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (char*,int ,unsigned int) ;
 int FUNC_11 () ;

__attribute__((used)) static void FUNC_12 (struct cp_private *VAR_11)
{
 unsigned VAR_12 = VAR_11->tx_head;
 unsigned VAR_13 = VAR_11->tx_tail;

 while (VAR_13 != VAR_12) {
  struct cp_desc *VAR_14 = VAR_11->tx_ring + VAR_13;
  struct sk_buff *VAR_15;
  u32 VAR_16;

  FUNC_11();
  VAR_16 = FUNC_5(VAR_14->opts1);
  if (VAR_16 & VAR_0)
   break;

  VAR_15 = VAR_11->tx_skb[VAR_13];
  FUNC_0(!VAR_15);

  FUNC_4(&VAR_11->pdev->dev, FUNC_6(VAR_14->addr),
     FUNC_5(VAR_14->opts1) & 0xffff,
     VAR_3);

  if (VAR_16 & VAR_1) {
   if (VAR_16 & (VAR_6 | VAR_7)) {
    if (FUNC_8(VAR_11))
     FUNC_10("%s: tx err, status 0x%x\n",
            VAR_11->dev->name, VAR_16);
    VAR_11->dev->stats.tx_errors++;
    if (VAR_16 & VAR_10)
     VAR_11->dev->stats.tx_window_errors++;
    if (VAR_16 & VAR_9)
     VAR_11->dev->stats.tx_aborted_errors++;
    if (VAR_16 & VAR_8)
     VAR_11->dev->stats.tx_carrier_errors++;
    if (VAR_16 & VAR_7)
     VAR_11->dev->stats.tx_fifo_errors++;
   } else {
    VAR_11->dev->stats.collisions +=
     ((VAR_16 >> VAR_5) & VAR_4);
    VAR_11->dev->stats.tx_packets++;
    VAR_11->dev->stats.tx_bytes += VAR_15->len;
    if (FUNC_7(VAR_11))
     FUNC_10("%s: tx done, slot %d\n", VAR_11->dev->name, VAR_13);
   }
   FUNC_3(VAR_15);
  }

  VAR_11->tx_skb[VAR_13] = ((void*)0);

  VAR_13 = FUNC_1(VAR_13);
 }

 VAR_11->tx_tail = VAR_13;

 if (FUNC_2(VAR_11) > (VAR_2 + 1))
  FUNC_9(VAR_11->dev);
}
