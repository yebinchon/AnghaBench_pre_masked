
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
typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct vlan_ethhdr {void* h_vlan_TCI; void* h_vlan_proto; void* h_vlan_encapsulated_proto; } ;
struct sk_buff {int* data; scalar_t__ ip_summed; void* protocol; } ;
struct qlcnic_host_tx_ring {size_t producer; int num_desc; TYPE_1__* cmd_buf_arr; struct cmd_desc_type0* desc_head; } ;
struct TYPE_7__ {int lso_frames; } ;
struct qlcnic_adapter {scalar_t__ tx_pvid; int flags; TYPE_2__ stats; struct qlcnic_host_tx_ring* tx_ring; } ;
struct cmd_desc_type0 {int total_hdr_length; int tcp_hdr_offset; int ip_hdr_offset; int mss; int eth_addr; } ;
struct TYPE_10__ {int protocol; } ;
struct TYPE_9__ {int nexthdr; } ;
struct TYPE_8__ {int gso_size; } ;
struct TYPE_6__ {int * skb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
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
 int VAR_19 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (size_t,int ) ;
 void* FUNC_2 (scalar_t__) ;
 TYPE_5__* FUNC_3 (struct sk_buff*) ;
 TYPE_4__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *,int*,int ) ;
 int FUNC_6 (int,int) ;
 scalar_t__ FUNC_7 (void*) ;
 int FUNC_8 (struct cmd_desc_type0*,scalar_t__,int) ;
 int FUNC_9 (struct cmd_desc_type0*,scalar_t__) ;
 int FUNC_10 (struct sk_buff*,struct vlan_ethhdr*,int) ;
 int FUNC_11 (struct sk_buff*,int,char*,int) ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 TYPE_3__* FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 () ;
 int FUNC_17 (struct sk_buff*) ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 scalar_t__ FUNC_19 (struct sk_buff*) ;
 scalar_t__ FUNC_20 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_21(struct qlcnic_adapter *VAR_20,
    struct cmd_desc_type0 *VAR_21, struct sk_buff *VAR_22)
{
 u8 VAR_23, VAR_24 = 0, VAR_25 = 0;
 u16 VAR_26 = 0, VAR_27 = 0;
 int VAR_28, VAR_29, VAR_30, VAR_31;
 struct cmd_desc_type0 *VAR_32;
 struct vlan_ethhdr *VAR_33;
 struct qlcnic_host_tx_ring *VAR_34 = VAR_20->tx_ring;
 u16 VAR_35 = FUNC_7(VAR_22->protocol);
 u32 VAR_36 = VAR_34->producer;

 if (VAR_35 == VAR_4) {
  VAR_33 = (struct vlan_ethhdr *)VAR_22->data;
  VAR_26 = VAR_8;
  VAR_27 = FUNC_7(VAR_33->h_vlan_TCI);
  VAR_35 = FUNC_7(VAR_33->h_vlan_encapsulated_proto);
 } else if (FUNC_20(VAR_22)) {
  VAR_26 = VAR_7;
  VAR_27 = FUNC_19(VAR_22);
 }
 if (FUNC_18(VAR_20->tx_pvid)) {
  if (VAR_27 && !(VAR_20->flags & VAR_11))
   return -VAR_2;
  if (VAR_27 && (VAR_20->flags & VAR_11))
   goto set_flags;

  VAR_26 = VAR_7;
  VAR_27 = VAR_20->tx_pvid;
 }
set_flags:
 FUNC_9(VAR_21, VAR_27);
 FUNC_8(VAR_21, VAR_26, VAR_24);

 if (*(VAR_22->data) & VAR_0) {
  VAR_26 |= VAR_0;
  FUNC_5(&VAR_21->eth_addr, VAR_22->data, VAR_3);
 }
 VAR_24 = VAR_12;
 if (FUNC_12(VAR_22)) {
  VAR_25 = FUNC_15(VAR_22) + FUNC_17(VAR_22);
  VAR_21->mss = FUNC_0(FUNC_14(VAR_22)->gso_size);
  VAR_21->total_hdr_length = VAR_25;
  VAR_24 = (VAR_35 == VAR_6) ? VAR_15 : VAR_14;



  VAR_28 = 0;
  VAR_29 = 2;

  if (VAR_26 & VAR_7) {
   VAR_21->total_hdr_length += VAR_19;
   VAR_21->tcp_hdr_offset = VAR_19;
   VAR_21->ip_hdr_offset = VAR_19;


   VAR_26 |= VAR_8;


   VAR_32 = &VAR_34->desc_head[VAR_36];
   VAR_34->cmd_buf_arr[VAR_36].skb = ((void*)0);

   VAR_30 = FUNC_6((int)sizeof(struct cmd_desc_type0) -
           VAR_29, VAR_25 + VAR_19);

   VAR_33 = (struct vlan_ethhdr *)((char *) VAR_32 + 2);
   FUNC_10(VAR_22, VAR_33, 12);
   VAR_33->h_vlan_proto = FUNC_2(VAR_4);
   VAR_33->h_vlan_TCI = FUNC_2(VAR_27);

   FUNC_11(VAR_22, 12,
        (char *)VAR_33 + 16,
        VAR_30 - 16);
   VAR_28 = VAR_30 - VAR_19;
   VAR_29 = 0;
   VAR_36 = FUNC_1(VAR_36, VAR_34->num_desc);
  }

  while (VAR_28 < VAR_25) {
   VAR_31 = (int)sizeof(struct cmd_desc_type0) - VAR_29;
   VAR_30 = FUNC_6(VAR_31, (VAR_25 - VAR_28));
   VAR_32 = &VAR_34->desc_head[VAR_36];
   VAR_34->cmd_buf_arr[VAR_36].skb = ((void*)0);
   FUNC_11(VAR_22, VAR_28,
        (char *)VAR_32 +
        VAR_29, VAR_30);
   VAR_28 += VAR_30;
   VAR_29 = 0;
   VAR_36 = FUNC_1(VAR_36, VAR_34->num_desc);
  }

  VAR_34->producer = VAR_36;
  FUNC_16();
  VAR_20->stats.lso_frames++;

 } else if (VAR_22->ip_summed == VAR_1) {
  if (VAR_35 == VAR_5) {
   VAR_23 = FUNC_3(VAR_22)->protocol;

   if (VAR_23 == VAR_9)
    VAR_24 = VAR_16;
   else if (VAR_23 == VAR_10)
    VAR_24 = VAR_18;
  } else if (VAR_35 == VAR_6) {
   VAR_23 = FUNC_4(VAR_22)->nexthdr;

   if (VAR_23 == VAR_9)
    VAR_24 = VAR_13;
   else if (VAR_23 == VAR_10)
    VAR_24 = VAR_17;
  }
 }
 VAR_21->tcp_hdr_offset += FUNC_15(VAR_22);
 VAR_21->ip_hdr_offset += FUNC_13(VAR_22);
 FUNC_8(VAR_21, VAR_26, VAR_24);

 return 0;
}
