
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int len; scalar_t__ truesize; int * data; } ;
struct hisax_if {int dummy; } ;
struct hfc4s8s_l1 {int st_num; TYPE_4__* hw; int enabled; } ;
struct TYPE_14__ {int (* l1l2 ) (struct hisax_if*,int,void*) ;} ;
struct TYPE_15__ {TYPE_2__ ifc; } ;
struct hfc4s8s_btype {scalar_t__ mode; int bchan; int tx_cnt; TYPE_3__ b_if; struct sk_buff* tx_skb; int tx_queue; struct hfc4s8s_l1* l1p; } ;
struct TYPE_13__ {int* fifo_slow_timer_service; } ;
struct TYPE_16__ {TYPE_1__ mr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_4__*,int ,int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (TYPE_4__*,unsigned long,...) ;
 int FUNC_8 (TYPE_4__*,int ,...) ;
 struct sk_buff* FUNC_9 (int *) ;
 int FUNC_10 (struct hisax_if*,int,void*) ;
 int FUNC_11 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_12(struct hfc4s8s_btype *VAR_12)
{
 struct sk_buff *VAR_13;
 struct hfc4s8s_l1 *VAR_14 = VAR_12->l1p;
 u_char *VAR_15;
 int VAR_16, VAR_17, VAR_18;
 long VAR_19 = 0;

 if (!VAR_14->enabled || (VAR_12->mode == VAR_8))
  return;


 FUNC_5(VAR_14->hw, VAR_11,
     (VAR_14->st_num * 8 + ((VAR_12->bchan == 1) ? 0 : 2)));
 FUNC_11(VAR_14->hw);
 do {

  if (VAR_12->mode == VAR_7) {
   VAR_18 = FUNC_2(VAR_14->hw, VAR_0) & VAR_9;
   VAR_18 -=
       (FUNC_3(VAR_14->hw, VAR_1) & VAR_9);
   if (VAR_18 < 0)
    VAR_18 += 16;
   if (VAR_18 >= 15)
    break;
  } else
   VAR_18 = 0;

  if (!(VAR_13 = VAR_12->tx_skb)) {
   if (!(VAR_13 = FUNC_9(&VAR_12->tx_queue))) {
    VAR_14->hw->mr.fifo_slow_timer_service[VAR_14->
           st_num]
        &= ~((VAR_12->bchan == 1) ? 1 : 4);
    break;
   }
   VAR_12->tx_skb = VAR_13;
   VAR_12->tx_cnt = 0;
  }

  if (!VAR_18)
   VAR_14->hw->mr.fifo_slow_timer_service[VAR_14->st_num] |=
       ((VAR_12->bchan == 1) ? 1 : 4);
  else
   VAR_14->hw->mr.fifo_slow_timer_service[VAR_14->st_num] &=
       ~((VAR_12->bchan == 1) ? 1 : 4);

  VAR_17 = FUNC_1(VAR_14->hw, VAR_5);
  VAR_17 -= FUNC_0(VAR_14->hw, VAR_4);
  if (VAR_17 <= 0)
   VAR_17 += 384;
  VAR_17--;

  if (VAR_17 < 16)
   break;

  VAR_16 = VAR_13->len - VAR_12->tx_cnt;
  if (VAR_16 > VAR_17)
   VAR_16 = VAR_17;
  VAR_15 = VAR_13->data + VAR_12->tx_cnt;
  VAR_12->tx_cnt += VAR_16;


  FUNC_4(VAR_14->hw, VAR_2);

  while (VAR_16 >= 4) {




   FUNC_7(VAR_14->hw, *(unsigned long *) VAR_15);

   VAR_15 += 4;
   VAR_16 -= 4;
  }

  while (VAR_16--)



   FUNC_8(VAR_14->hw, *VAR_15++);


  if (VAR_12->tx_cnt >= VAR_13->len) {
   if (VAR_12->mode == VAR_7) {

    FUNC_5(VAR_14->hw, VAR_3, 1);
   }
   VAR_19 += VAR_13->truesize;
   VAR_12->tx_skb = ((void*)0);
   VAR_12->tx_cnt = 0;
   FUNC_6(VAR_13);
  } else

   FUNC_5(VAR_14->hw, VAR_11,
       (VAR_14->st_num * 8 +
        ((VAR_12->bchan == 1) ? 0 : 2)));
  FUNC_11(VAR_14->hw);
 } while (1);

 if (VAR_19)
  VAR_12->b_if.ifc.l1l2((struct hisax_if *) &VAR_12->b_if,
       VAR_10 | VAR_6, (void *) VAR_19);
}
