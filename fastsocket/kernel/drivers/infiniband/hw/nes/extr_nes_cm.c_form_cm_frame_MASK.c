
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct tcphdr {int ack; int syn; int fin; int rst; int doff; scalar_t__ urg_ptr; void* window; void* ack_seq; void* seq; void* dest; void* source; } ;
struct sk_buff {scalar_t__ mac_len; scalar_t__ data_len; void* protocol; int ip_summed; int data; } ;
struct TYPE_5__ {int loc_id; int rcv_wnd; scalar_t__ loc_seq_num; scalar_t__ loc_ack_num; scalar_t__ rcv_nxt; } ;
struct nes_cm_node {void* rem_mac; void* loc_mac; int loc_port; int rem_port; TYPE_2__ tcp_cntxt; scalar_t__ rem_addr; scalar_t__ loc_addr; TYPE_1__* netdev; } ;
struct iphdr {int ihl; int ttl; int protocol; void* daddr; void* saddr; void* frag_off; void* id; void* tot_len; scalar_t__ tos; int version; } ;
struct ethhdr {int* h_dest; int* h_source; void* h_proto; } ;
struct TYPE_6__ {scalar_t__ nr_frags; } ;
struct TYPE_4__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_0 (scalar_t__) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int*,void*,int) ;
 int FUNC_3 (int ,int,scalar_t__) ;
 int* FUNC_4 (struct sk_buff*,scalar_t__) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 TYPE_3__* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_10(struct sk_buff *VAR_11,
     struct nes_cm_node *VAR_12, void *VAR_13, u32 VAR_14,
     void *VAR_15, u32 VAR_16, u8 VAR_17)
{
 struct tcphdr *VAR_18;
 struct iphdr *VAR_19;
 struct ethhdr *VAR_20;
 u8 *VAR_21;
 u16 VAR_22 = sizeof(*VAR_19);

 VAR_22 += sizeof(*VAR_18);
 VAR_22 += VAR_14 + VAR_16;

 FUNC_9(VAR_11, 0);
 FUNC_3(VAR_11->data, 0x00, VAR_3 + sizeof(*VAR_19) + sizeof(*VAR_18));

 VAR_21 = FUNC_4(VAR_11, VAR_22 + VAR_3);

 VAR_20 = (struct ethhdr *)VAR_21;
 VAR_21 += VAR_3;

 VAR_19 = (struct iphdr *)VAR_21;
 VAR_21 += sizeof(*VAR_19);
 VAR_18 = (struct tcphdr *)VAR_21;
 FUNC_5(VAR_11);
 FUNC_6(VAR_11, VAR_3);
 FUNC_7(VAR_11, VAR_3 + sizeof(*VAR_19));
 VAR_21 += sizeof(*VAR_18);

 VAR_11->ip_summed = VAR_1;
 if (!(VAR_12->netdev->features & VAR_5))
  VAR_11->ip_summed = VAR_0;
 VAR_11->protocol = FUNC_1(0x800);
 VAR_11->data_len = 0;
 VAR_11->mac_len = VAR_3;

 FUNC_2(VAR_20->h_dest, VAR_12->rem_mac, VAR_2);
 FUNC_2(VAR_20->h_source, VAR_12->loc_mac, VAR_2);
 VAR_20->h_proto = FUNC_1(0x0800);

 VAR_19->version = VAR_4;
 VAR_19->ihl = 5;
 VAR_19->tos = 0;
 VAR_19->tot_len = FUNC_1(VAR_22);
 VAR_19->id = FUNC_1(++VAR_12->tcp_cntxt.loc_id);

 VAR_19->frag_off = FUNC_1(0x4000);
 VAR_19->ttl = 0x40;
 VAR_19->protocol = 0x06;

 VAR_19->saddr = FUNC_0(VAR_12->loc_addr);
 VAR_19->daddr = FUNC_0(VAR_12->rem_addr);

 VAR_18->source = FUNC_1(VAR_12->loc_port);
 VAR_18->dest = FUNC_1(VAR_12->rem_port);
 VAR_18->seq = FUNC_0(VAR_12->tcp_cntxt.loc_seq_num);

 if (VAR_17 & VAR_6) {
  VAR_12->tcp_cntxt.loc_ack_num = VAR_12->tcp_cntxt.rcv_nxt;
  VAR_18->ack_seq = FUNC_0(VAR_12->tcp_cntxt.loc_ack_num);
  VAR_18->ack = 1;
 } else {
  VAR_18->ack_seq = 0;
 }

 if (VAR_17 & VAR_9) {
  VAR_12->tcp_cntxt.loc_seq_num++;
  VAR_18->syn = 1;
 } else {
  VAR_12->tcp_cntxt.loc_seq_num += VAR_16;
 }

 if (VAR_17 & VAR_7) {
  VAR_12->tcp_cntxt.loc_seq_num++;
  VAR_18->fin = 1;
 }

 if (VAR_17 & VAR_8)
  VAR_18->rst = 1;

 VAR_18->doff = (u16)((sizeof(*VAR_18) + VAR_14 + 3) >> 2);
 VAR_18->window = FUNC_1(VAR_12->tcp_cntxt.rcv_wnd);
 VAR_18->urg_ptr = 0;
 if (VAR_14)
  FUNC_2(VAR_21, VAR_13, VAR_14);
 VAR_21 += VAR_14;
 if (VAR_16)
  FUNC_2(VAR_21, VAR_15, VAR_16);

 FUNC_8(VAR_11)->nr_frags = 0;
 VAR_10++;
}
