
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u8 ;
struct sk_buff {scalar_t__ len; unsigned int data_len; scalar_t__ ip_summed; scalar_t__ protocol; } ;
struct net_device {int dummy; } ;
struct e1000_tx_ring {int last_tx_tso; unsigned int next_to_use; TYPE_2__* buffer_info; } ;
struct e1000_hw {int mac_type; scalar_t__ bus_type; } ;
struct e1000_adapter {int fifo_stall_task; int flags; scalar_t__ pcix_82544; struct e1000_tx_ring* tx_ring; struct e1000_hw hw; } ;
typedef int netdev_tx_t ;
struct TYPE_6__ {unsigned int gso_size; unsigned int nr_frags; TYPE_1__* frags; } ;
struct TYPE_5__ {scalar_t__ time_stamp; } ;
struct TYPE_4__ {unsigned int size; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (unsigned int,unsigned int) ;
 int VAR_12 ;
 int FUNC_1 (struct sk_buff*,unsigned int) ;
 int FUNC_2 (struct sk_buff*) ;
 int VAR_13 ;

 int VAR_14 ;
 scalar_t__ FUNC_3 (struct e1000_adapter*,struct sk_buff*) ;
 scalar_t__ VAR_15 ;
 int FUNC_4 (struct net_device*,struct e1000_tx_ring*,int) ;
 int FUNC_5 (struct e1000_adapter*,struct e1000_tx_ring*,struct sk_buff*) ;
 int FUNC_6 (struct e1000_adapter*,struct e1000_tx_ring*,struct sk_buff*) ;
 int FUNC_7 (struct e1000_adapter*,struct e1000_tx_ring*,struct sk_buff*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_8 (struct e1000_adapter*,struct e1000_tx_ring*,unsigned int,int) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (unsigned int) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int) ;
 unsigned int FUNC_13 (unsigned int,unsigned int) ;
 struct e1000_adapter* FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (int *,int) ;
 unsigned int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*) ;
 TYPE_3__* FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (struct sk_buff*) ;
 unsigned int FUNC_21 (struct sk_buff*) ;
 unsigned int FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (int ,int *) ;
 scalar_t__ FUNC_24 (int) ;
 unsigned int FUNC_25 (struct sk_buff*) ;
 int FUNC_26 (struct sk_buff*) ;

__attribute__((used)) static netdev_tx_t FUNC_27(struct sk_buff *VAR_16,
        struct net_device *VAR_17)
{
 struct e1000_adapter *VAR_18 = FUNC_14(VAR_17);
 struct e1000_hw *VAR_19 = &VAR_18->hw;
 struct e1000_tx_ring *VAR_20;
 unsigned int VAR_21, VAR_22 = VAR_1;
 unsigned int VAR_23 = VAR_2;
 unsigned int VAR_24 = 0;
 unsigned int VAR_25 = FUNC_17(VAR_16);
 unsigned int VAR_26;
 unsigned int VAR_27;
 int VAR_28 = 0;
 int VAR_29;
 unsigned int VAR_30;





 VAR_20 = VAR_18->tx_ring;

 if (FUNC_24(VAR_16->len <= 0)) {
  FUNC_2(VAR_16);
  return VAR_11;
 }

 VAR_27 = FUNC_19(VAR_16)->gso_size;






 if (VAR_27) {
  u8 VAR_31;
  VAR_22 = FUNC_13(VAR_27 << 2, VAR_22);
  VAR_23 = FUNC_10(VAR_22) - 1;

  VAR_31 = FUNC_21(VAR_16) + FUNC_22(VAR_16);
  if (VAR_16->data_len && VAR_31 == VAR_25) {
   switch (VAR_19->mac_type) {
    unsigned int VAR_32;
   case 128:






    if ((unsigned long)(FUNC_20(VAR_16) - 1) & 4)
     break;

    VAR_32 = FUNC_13((unsigned int)4, VAR_16->data_len);
    if (!FUNC_1(VAR_16, VAR_32)) {
     FUNC_9(VAR_13, "__pskb_pull_tail "
           "failed.\n");
     FUNC_2(VAR_16);
     return VAR_11;
    }
    VAR_25 = FUNC_17(VAR_16);
    break;
   default:

    break;
   }
  }
 }


 if ((VAR_27) || (VAR_16->ip_summed == VAR_0))
  VAR_28++;
 VAR_28++;


 if (!VAR_16->data_len && VAR_20->last_tx_tso && !FUNC_18(VAR_16))
  VAR_28++;

 VAR_28 += FUNC_0(VAR_25, VAR_23);

 if (VAR_18->pcix_82544)
  VAR_28++;




 if (FUNC_24((VAR_19->bus_type == VAR_15) &&
   (VAR_25 > 2015)))
  VAR_28++;

 VAR_26 = FUNC_19(VAR_16)->nr_frags;
 for (VAR_30 = 0; VAR_30 < VAR_26; VAR_30++)
  VAR_28 += FUNC_0(FUNC_19(VAR_16)->frags[VAR_30].size,
           VAR_23);
 if (VAR_18->pcix_82544)
  VAR_28 += VAR_26;



 if (FUNC_24(FUNC_4(VAR_17, VAR_20, VAR_28 + 2)))
  return VAR_10;

 if (FUNC_24((VAR_19->mac_type == VAR_14) &&
       (FUNC_3(VAR_18, VAR_16)))) {
  FUNC_15(VAR_17);
  if (!FUNC_23(VAR_12, &VAR_18->flags))
   FUNC_16(&VAR_18->fifo_stall_task, 1);
  return VAR_10;
 }

 if (FUNC_24(FUNC_26(VAR_16))) {
  VAR_24 |= VAR_6;
  VAR_24 |= (FUNC_25(VAR_16) << VAR_7);
 }

 VAR_21 = VAR_20->next_to_use;

 VAR_29 = FUNC_5(VAR_18, VAR_20, VAR_16);
 if (VAR_29 < 0) {
  FUNC_2(VAR_16);
  return VAR_11;
 }

 if (FUNC_12(VAR_29)) {
  if (FUNC_12(VAR_19->mac_type != 128))
   VAR_20->last_tx_tso = 1;
  VAR_24 |= VAR_5;
 } else if (FUNC_12(FUNC_6(VAR_18, VAR_20, VAR_16)))
  VAR_24 |= VAR_3;

 if (FUNC_12(VAR_16->protocol == FUNC_11(VAR_8)))
  VAR_24 |= VAR_4;

 VAR_28 = FUNC_7(VAR_18, VAR_20, VAR_16, VAR_21, VAR_22,
                      VAR_26, VAR_27);

 if (VAR_28) {
  FUNC_8(VAR_18, VAR_20, VAR_24, VAR_28);

  FUNC_4(VAR_17, VAR_20, VAR_9 + 2);

 } else {
  FUNC_2(VAR_16);
  VAR_20->buffer_info[VAR_21].time_stamp = 0;
  VAR_20->next_to_use = VAR_21;
 }

 return VAR_11;
}
