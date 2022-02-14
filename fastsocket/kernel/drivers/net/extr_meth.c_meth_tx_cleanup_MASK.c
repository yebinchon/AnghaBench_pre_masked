
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct TYPE_6__ {int tx_errors; int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct meth_private {unsigned long tx_read; size_t tx_write; int meth_lock; int tx_count; TYPE_3__* tx_ring; struct sk_buff** tx_skbs; int dma_ctrl; } ;
struct TYPE_9__ {int int_stat; int dma_ctrl; } ;
struct TYPE_10__ {TYPE_4__ eth; } ;
struct TYPE_7__ {unsigned long raw; } ;
struct TYPE_8__ {TYPE_2__ header; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct sk_buff*) ;
 TYPE_5__* VAR_12 ;
 int FUNC_2 (struct net_device*) ;
 struct meth_private* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct net_device* VAR_13, unsigned long VAR_14)
{
 struct meth_private *VAR_15 = FUNC_3(VAR_13);
 unsigned long VAR_16, VAR_17;
 struct sk_buff *VAR_18;
 unsigned long VAR_19 = (VAR_14&VAR_10) >> 16;

 FUNC_7(&VAR_15->meth_lock, VAR_17);


 VAR_15->dma_ctrl &= ~(VAR_0);
 VAR_12->eth.dma_ctrl = VAR_15->dma_ctrl;

 while (VAR_15->tx_read != VAR_19) {
  VAR_18 = VAR_15->tx_skbs[VAR_15->tx_read];
  VAR_16 = VAR_15->tx_ring[VAR_15->tx_read].header.raw;




  if (VAR_16 & VAR_4) {
   if (VAR_16 & VAR_7){
    VAR_13->stats.tx_packets++;
    VAR_13->stats.tx_bytes += VAR_18->len;
   } else {
    VAR_13->stats.tx_errors++;
   }
  } else {
   FUNC_0("RPTR points us here, but packet not done?\n");
   break;
  }
  FUNC_1(VAR_18);
  VAR_15->tx_skbs[VAR_15->tx_read] = ((void*)0);
  VAR_15->tx_ring[VAR_15->tx_read].header.raw = 0;
  VAR_15->tx_read = (VAR_15->tx_read+1)&(VAR_11-1);
  VAR_15->tx_count--;
 }


 if (FUNC_4(VAR_13) && !FUNC_2(VAR_13)) {
  FUNC_5(VAR_13);
 }

 VAR_12->eth.int_stat = VAR_1 | VAR_2;
 FUNC_8(&VAR_15->meth_lock, VAR_17);
}
