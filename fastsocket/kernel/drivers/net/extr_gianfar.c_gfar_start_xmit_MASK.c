
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int u32 ;
struct txfcb {int dummy; } ;
struct txbd8 {unsigned int lstatus; unsigned int bufPtr; } ;
struct sk_buff {scalar_t__ ip_summed; int data; scalar_t__ len; } ;
struct TYPE_8__ {int tx_fifo_errors; int tx_bytes; int tx_errors; } ;
struct net_device {TYPE_3__ stats; int trans_start; } ;
struct gfar_private {unsigned int num_txbdfree; size_t skb_curtx; int txlock; TYPE_4__* regs; int tx_ring_size; struct txbd8* cur_tx; TYPE_2__* ofdev; struct sk_buff** tx_skbuff; scalar_t__ vlgrp; struct txbd8* tx_bd_base; } ;
struct TYPE_10__ {unsigned int nr_frags; TYPE_1__* frags; } ;
struct TYPE_9__ {int tstat; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {unsigned int size; int page_offset; int page; } ;


 unsigned int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int *,int ,int ,unsigned int,int ) ;
 unsigned int FUNC_3 (int *,int ,unsigned int,int ) ;
 int FUNC_4 () ;
 struct txfcb* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,struct txfcb*) ;
 int FUNC_7 (struct sk_buff*,struct txfcb*) ;
 int FUNC_8 (int *,int ) ;
 int VAR_11 ;
 int FUNC_9 (struct sk_buff*) ;
 struct gfar_private* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 void* FUNC_12 (struct txbd8*,struct txbd8*,int ) ;
 unsigned int FUNC_13 (struct sk_buff*) ;
 scalar_t__ FUNC_14 (struct sk_buff*) ;
 struct sk_buff* FUNC_15 (struct sk_buff*,scalar_t__) ;
 TYPE_5__* FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (int *,unsigned long) ;
 int FUNC_18 (int *,unsigned long) ;
 scalar_t__ FUNC_19 (int) ;
 scalar_t__ FUNC_20 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_21(struct sk_buff *VAR_12, struct net_device *VAR_13)
{
 struct gfar_private *VAR_14 = FUNC_10(VAR_13);
 struct txfcb *VAR_15 = ((void*)0);
 struct txbd8 *VAR_16, *VAR_17, *VAR_18;
 u32 VAR_19;
 int VAR_20;
 u32 VAR_21;
 unsigned long VAR_22;
 unsigned int VAR_23, VAR_24;

 VAR_18 = VAR_14->tx_bd_base;


 if (((VAR_12->ip_summed == VAR_0) ||
   (VAR_14->vlgrp && FUNC_20(VAR_12))) &&
   (FUNC_14(VAR_12) < VAR_2)) {
  struct sk_buff *VAR_25;

  VAR_25 = FUNC_15(VAR_12, VAR_2);
  if (!VAR_25) {
   VAR_13->stats.tx_errors++;
   FUNC_9(VAR_12);
   return VAR_4;
  }
  FUNC_9(VAR_12);
  VAR_12 = VAR_25;
 }


 VAR_23 = FUNC_16(VAR_12)->nr_frags;

 FUNC_17(&VAR_14->txlock, VAR_22);


 if ((VAR_23+1) > VAR_14->num_txbdfree) {

  FUNC_11(VAR_13);
  VAR_13->stats.tx_fifo_errors++;
  FUNC_18(&VAR_14->txlock, VAR_22);
  return VAR_3;
 }


 VAR_13->stats.tx_bytes += VAR_12->len;

 VAR_16 = VAR_17 = VAR_14->cur_tx;

 if (VAR_23 == 0) {
  VAR_19 = VAR_16->lstatus | FUNC_0(VAR_8 | VAR_7);
 } else {

  for (VAR_20 = 0; VAR_20 < VAR_23; VAR_20++) {

   VAR_16 = FUNC_12(VAR_16, VAR_18, VAR_14->tx_ring_size);

   VAR_24 = FUNC_16(VAR_12)->frags[VAR_20].size;

   VAR_19 = VAR_16->lstatus | VAR_24 |
    FUNC_0(VAR_9);


   if (VAR_20 == VAR_23 - 1)
    VAR_19 |= FUNC_0(VAR_8 | VAR_7);

   VAR_21 = FUNC_2(&VAR_14->ofdev->dev,
     FUNC_16(VAR_12)->frags[VAR_20].page,
     FUNC_16(VAR_12)->frags[VAR_20].page_offset,
     VAR_24,
     VAR_1);


   VAR_16->bufPtr = VAR_21;
   VAR_16->lstatus = VAR_19;
  }

  VAR_19 = VAR_17->lstatus;
 }


 if (VAR_0 == VAR_12->ip_summed) {
  VAR_15 = FUNC_5(VAR_12);
  VAR_19 |= FUNC_0(VAR_10);
  FUNC_6(VAR_12, VAR_15);
 }

 if (VAR_14->vlgrp && FUNC_20(VAR_12)) {
  if (FUNC_19(((void*)0) == VAR_15)) {
   VAR_15 = FUNC_5(VAR_12);
   VAR_19 |= FUNC_0(VAR_10);
  }

  FUNC_7(VAR_12, VAR_15);
 }


 VAR_14->tx_skbuff[VAR_14->skb_curtx] = VAR_12;
 VAR_17->bufPtr = FUNC_3(&VAR_14->ofdev->dev, VAR_12->data,
   FUNC_13(VAR_12), VAR_1);

 VAR_19 |= FUNC_0(VAR_6 | VAR_9) | FUNC_13(VAR_12);
 FUNC_4();

 VAR_17->lstatus = VAR_19;



 VAR_14->skb_curtx = (VAR_14->skb_curtx + 1) &
  FUNC_1(VAR_14->tx_ring_size);

 VAR_14->cur_tx = FUNC_12(VAR_16, VAR_18, VAR_14->tx_ring_size);


 VAR_14->num_txbdfree -= (VAR_23 + 1);

 VAR_13->trans_start = VAR_11;



 if (!VAR_14->num_txbdfree) {
  FUNC_11(VAR_13);

  VAR_13->stats.tx_fifo_errors++;
 }


 FUNC_8(&VAR_14->regs->tstat, VAR_5);


 FUNC_18(&VAR_14->txlock, VAR_22);

 return VAR_4;
}
