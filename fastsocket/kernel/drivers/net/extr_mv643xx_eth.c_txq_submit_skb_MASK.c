
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct tx_queue {scalar_t__ tx_curr_desc; scalar_t__ tx_ring_size; int index; int tx_desc_count; int tx_skb; struct tx_desc* tx_desc_area; } ;
struct tx_desc {int byte_cnt; int cmd_sts; int buf_ptr; scalar_t__ l4i_chk; } ;
struct sk_buff {scalar_t__ ip_summed; scalar_t__ protocol; int len; scalar_t__ data; } ;
struct mv643xx_eth_private {int work_tx_end; TYPE_2__* dev; } ;
struct TYPE_12__ {int ihl; int protocol; } ;
struct TYPE_11__ {int nr_frags; } ;
struct TYPE_10__ {int check; } ;
struct TYPE_9__ {int check; } ;
struct TYPE_7__ {int parent; } ;
struct TYPE_8__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int *,struct sk_buff*) ;
 int FUNC_3 (int ,scalar_t__,int,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_6__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 TYPE_5__* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (int ) ;
 TYPE_4__* FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct tx_queue*) ;
 int FUNC_14 (struct tx_queue*,struct sk_buff*) ;
 struct mv643xx_eth_private* FUNC_15 (struct tx_queue*) ;
 TYPE_3__* FUNC_16 (struct sk_buff*) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 () ;

__attribute__((used)) static int FUNC_19(struct tx_queue *VAR_17, struct sk_buff *VAR_18)
{
 struct mv643xx_eth_private *VAR_19 = FUNC_15(VAR_17);
 int VAR_20 = FUNC_10(VAR_18)->nr_frags;
 int VAR_21;
 struct tx_desc *VAR_22;
 u32 VAR_23;
 u16 VAR_24;
 int VAR_25;

 VAR_23 = VAR_12 | VAR_6 | VAR_0;
 VAR_24 = 0;

 if (VAR_18->ip_summed == VAR_1) {
  int VAR_26;

  FUNC_1(VAR_18->protocol != FUNC_4(VAR_5) &&
         VAR_18->protocol != FUNC_4(VAR_4));

  VAR_26 = (void *)FUNC_5(VAR_18) - (void *)VAR_18->data - VAR_3;
  if (FUNC_17(VAR_26 & ~12)) {
   if (FUNC_8(VAR_18) == 0)
    goto no_csum;
   FUNC_6(VAR_18);
   return 1;
  }

  if (VAR_26 & 4)
   VAR_23 |= VAR_9;
  if (VAR_26 & 8)
   VAR_23 |= VAR_10;

  VAR_23 |= VAR_8 |
      VAR_7 |
      FUNC_5(VAR_18)->ihl << VAR_13;

  switch (FUNC_5(VAR_18)->protocol) {
  case 128:
   VAR_23 |= VAR_15;
   VAR_24 = FUNC_7(FUNC_11(FUNC_16(VAR_18)->check));
   break;
  case 129:
   VAR_24 = FUNC_7(FUNC_11(FUNC_12(VAR_18)->check));
   break;
  default:
   FUNC_0();
  }
 } else {
no_csum:

  VAR_23 |= 5 << VAR_13;
 }

 VAR_21 = VAR_17->tx_curr_desc++;
 if (VAR_17->tx_curr_desc == VAR_17->tx_ring_size)
  VAR_17->tx_curr_desc = 0;
 VAR_22 = &VAR_17->tx_desc_area[VAR_21];

 if (VAR_20) {
  FUNC_14(VAR_17, VAR_18);
  VAR_25 = FUNC_9(VAR_18);
 } else {
  VAR_23 |= VAR_16 | VAR_14 | VAR_11;
  VAR_25 = VAR_18->len;
 }

 VAR_22->l4i_chk = VAR_24;
 VAR_22->byte_cnt = VAR_25;
 VAR_22->buf_ptr = FUNC_3(VAR_19->dev->dev.parent, VAR_18->data,
           VAR_25, VAR_2);

 FUNC_2(&VAR_17->tx_skb, VAR_18);


 FUNC_18();
 VAR_22->cmd_sts = VAR_23;


 VAR_19->work_tx_end &= ~(1 << VAR_17->index);


 FUNC_18();
 FUNC_13(VAR_17);

 VAR_17->tx_desc_count += VAR_20 + 1;

 return 0;
}
