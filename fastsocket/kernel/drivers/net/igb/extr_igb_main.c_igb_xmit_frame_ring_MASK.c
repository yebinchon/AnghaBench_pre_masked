
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union skb_shared_tx {int in_progress; int hardware; } ;
typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ ip_summed; } ;
struct igb_tx_buffer {int dummy; } ;
struct igb_ring {size_t next_to_use; struct igb_tx_buffer* tx_buffer_info; int netdev; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_7__ {TYPE_2__ mac; } ;
struct igb_adapter {int ptp_tx_work; TYPE_3__ hw; int ptp_tx_start; scalar_t__ ptp_tx_skb; } ;
typedef int netdev_tx_t ;
typedef scalar_t__ __be16 ;
struct TYPE_8__ {unsigned short nr_frags; TYPE_1__* frags; } ;
struct TYPE_5__ {int size; } ;


 scalar_t__ VAR_0 ;
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
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ VAR_13 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct igb_ring*,scalar_t__) ;
 int FUNC_5 (struct igb_ring*,struct sk_buff*,int,scalar_t__,int *) ;
 scalar_t__ FUNC_6 (struct igb_ring*,struct sk_buff*,int,scalar_t__) ;
 int FUNC_7 (struct igb_ring*,struct sk_buff*,struct igb_tx_buffer*,int,int ) ;
 int VAR_14 ;
 struct igb_adapter* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 TYPE_4__* FUNC_12 (struct sk_buff*) ;
 union skb_shared_tx* FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*) ;
 scalar_t__ FUNC_18 (struct sk_buff*) ;

netdev_tx_t FUNC_19(struct sk_buff *VAR_15,
    struct igb_ring *VAR_16)
{
 union skb_shared_tx *VAR_17 = FUNC_13(VAR_15);
 struct igb_tx_buffer *VAR_18;
 int VAR_19;
 u32 VAR_20 = 0;
 u16 VAR_21 = FUNC_0(FUNC_11(VAR_15));
 __be16 VAR_22 = FUNC_16(VAR_15);
 u8 VAR_23 = 0;







 if ((VAR_12 << FUNC_2(32768)) > VAR_3) {
  unsigned short VAR_24;
  for (VAR_24 = 0; VAR_24 < FUNC_12(VAR_15)->nr_frags; VAR_24++)
   VAR_21 += FUNC_0(FUNC_12(VAR_15)->frags[VAR_24].size);
 } else {
  VAR_21 += FUNC_12(VAR_15)->nr_frags;
 }

 if (FUNC_4(VAR_16, VAR_21 + 3)) {

  return VAR_10;
 }

 if (FUNC_15(VAR_17->hardware)) {
  struct igb_adapter *VAR_25 = FUNC_8(VAR_16->netdev);

  if (!(VAR_25->ptp_tx_skb)) {
   VAR_17->in_progress = 1;
   VAR_20 |= VAR_7;

   VAR_25->ptp_tx_skb = FUNC_10(VAR_15);
   VAR_25->ptp_tx_start = VAR_14;
   if (VAR_25->hw.mac.type == VAR_13)
    FUNC_9(&VAR_25->ptp_tx_work);
  }
 }

 if (FUNC_18(VAR_15)) {
  VAR_20 |= VAR_8;
  VAR_20 |= (FUNC_17(VAR_15) << VAR_9);
 }


 VAR_18 = &VAR_16->tx_buffer_info[VAR_16->next_to_use];

 FUNC_14(VAR_15);

 VAR_19 = FUNC_5(VAR_16, VAR_15, VAR_20, VAR_22, &VAR_23);
 if (VAR_19 < 0) {
  goto out_drop;
 } else if (VAR_19) {
  VAR_20 |= VAR_6 | VAR_4;
  if (VAR_22 == FUNC_3(VAR_2))
   VAR_20 |= VAR_5;
 } else if (FUNC_6(VAR_16, VAR_15, VAR_20, VAR_22) &&
     (VAR_15->ip_summed == VAR_0)) {
  VAR_20 |= VAR_4;
 }

 FUNC_7(VAR_16, VAR_15, VAR_18, VAR_20, VAR_23);


 FUNC_4(VAR_16, VAR_1);

 return VAR_11;

out_drop:
 FUNC_1(VAR_15);
 return VAR_11;
}
