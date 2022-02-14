
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct vlan_hdr {scalar_t__ h_vlan_encapsulated_proto; int h_vlan_TCI; } ;
struct vlan_ethhdr {int h_vlan_TCI; } ;
struct sk_buff {scalar_t__ protocol; int priority; scalar_t__ data; int len; } ;
struct ixgbe_tx_buffer {int gso_segs; int tx_flags; struct sk_buff* skb; scalar_t__ protocol; int bytecount; } ;
struct TYPE_7__ {int tx_busy; } ;
struct ixgbe_ring {size_t next_to_use; int state; TYPE_3__* netdev; struct ixgbe_tx_buffer* tx_buffer_info; TYPE_2__ tx_stats; } ;
struct ixgbe_adapter {int flags; int ptp_tx_work; int ptp_tx_start; int ptp_tx_skb; } ;
typedef int netdev_tx_t ;
typedef int _vhdr ;
typedef scalar_t__ __be16 ;
struct TYPE_10__ {unsigned short nr_frags; TYPE_1__* frags; } ;
struct TYPE_9__ {int in_progress; int hardware; } ;
struct TYPE_8__ {int features; } ;
struct TYPE_6__ {int size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
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
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_19 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ixgbe_ring*,struct ixgbe_tx_buffer*) ;
 int FUNC_5 (struct ixgbe_ring*,struct ixgbe_tx_buffer*,int *) ;
 scalar_t__ FUNC_6 (struct ixgbe_ring*,scalar_t__) ;
 int FUNC_7 (struct ixgbe_ring*,struct ixgbe_tx_buffer*,int *) ;
 int FUNC_8 (struct ixgbe_ring*,struct ixgbe_tx_buffer*) ;
 int FUNC_9 (struct ixgbe_ring*,struct ixgbe_tx_buffer*,int ) ;
 int VAR_20 ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct sk_buff*) ;
 scalar_t__ FUNC_14 (struct sk_buff*) ;
 struct vlan_hdr* FUNC_15 (struct sk_buff*,int ,int,struct vlan_hdr*) ;
 int FUNC_16 (struct sk_buff*) ;
 TYPE_5__* FUNC_17 (struct sk_buff*) ;
 TYPE_4__* FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*) ;
 scalar_t__ FUNC_20 (int ,int *) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (struct sk_buff*) ;
 scalar_t__ FUNC_23 (struct sk_buff*) ;

netdev_tx_t FUNC_24(struct sk_buff *VAR_21,
     struct ixgbe_adapter *VAR_22,
     struct ixgbe_ring *VAR_23)
{
 struct ixgbe_tx_buffer *VAR_24;
 int VAR_25;
 u32 VAR_26 = 0;
 unsigned short VAR_27;
 u16 VAR_28 = FUNC_0(FUNC_16(VAR_21));
 __be16 VAR_29 = VAR_21->protocol;
 u8 VAR_30 = 0;
 for (VAR_27 = 0; VAR_27 < FUNC_17(VAR_21)->nr_frags; VAR_27++)
  VAR_28 += FUNC_0(FUNC_17(VAR_21)->frags[VAR_27].size);

 if (FUNC_6(VAR_23, VAR_28 + 3)) {
  VAR_23->tx_stats.tx_busy++;
  return VAR_14;
 }


 VAR_24 = &VAR_23->tx_buffer_info[VAR_23->next_to_use];
 VAR_24->skb = VAR_21;
 VAR_24->bytecount = VAR_21->len;
 VAR_24->gso_segs = 1;


 if (FUNC_23(VAR_21)) {
  VAR_26 |= FUNC_22(VAR_21) << VAR_13;
  VAR_26 |= VAR_8;

 } else if (VAR_29 == FUNC_1(VAR_2)) {
  struct vlan_hdr *VAR_31, VAR_32;
  VAR_31 = FUNC_15(VAR_21, VAR_1, sizeof(VAR_32), &VAR_32);
  if (!VAR_31)
   goto out_drop;

  VAR_29 = VAR_31->h_vlan_encapsulated_proto;
  VAR_26 |= FUNC_10(VAR_31->h_vlan_TCI) <<
      VAR_13;
  VAR_26 |= VAR_9;
 }

 FUNC_19(VAR_21);
 if ((VAR_22->flags & VAR_5) &&
     ((VAR_26 & (VAR_8 | VAR_9)) ||
      (VAR_21->priority != VAR_18))) {
  VAR_26 &= ~VAR_11;
  VAR_26 |= (VAR_21->priority & 0x7) <<
     VAR_12;
  if (VAR_26 & VAR_9) {
   struct vlan_ethhdr *VAR_33;
   if (FUNC_14(VAR_21) &&
       FUNC_11(VAR_21, 0, 0, VAR_4))
    goto out_drop;
   VAR_33 = (struct vlan_ethhdr *)VAR_21->data;
   VAR_33->h_vlan_TCI = FUNC_3(VAR_26 >>
       VAR_13);
  } else {
   VAR_26 |= VAR_8;
  }
 }


 VAR_24->tx_flags = VAR_26;
 VAR_24->protocol = VAR_29;
 VAR_25 = FUNC_7(VAR_23, VAR_24, &VAR_30);
 if (VAR_25 < 0)
  goto out_drop;
 else if (!VAR_25)
  FUNC_8(VAR_23, VAR_24);


 if (FUNC_20(VAR_19, &VAR_23->state))
  FUNC_4(VAR_23, VAR_24);




 FUNC_9(VAR_23, VAR_24, VAR_30);

 FUNC_6(VAR_23, VAR_0);

 return VAR_15;

out_drop:
 FUNC_2(VAR_24->skb);
 VAR_24->skb = ((void*)0);

 return VAR_15;
}
