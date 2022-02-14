
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
typedef int u16 ;
struct tcphdr {int doff; int psh; } ;
struct sk_buff {void* protocol; int len; scalar_t__ data; } ;
struct qlcnic_rx_buffer {int dummy; } ;
struct qlcnic_recv_context {struct qlcnic_host_rds_ring* rds_rings; } ;
struct qlcnic_host_rds_ring {int num_desc; struct qlcnic_rx_buffer* rx_buf_arr; } ;
struct TYPE_3__ {int lrobytes; int lro_pkts; int rxdropped; } ;
struct qlcnic_adapter {size_t max_rds_rings; int flags; TYPE_1__ stats; int vlgrp; scalar_t__ mac_learn; struct qlcnic_recv_context* recv_ctx; struct net_device* netdev; } ;
struct net_device {int dummy; } ;
struct ipv6hdr {void* payload_len; } ;
struct iphdr {int ihl; scalar_t__ check; void* tot_len; } ;
struct TYPE_4__ {int gso_size; int gso_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*) ;
 void* FUNC_1 (struct sk_buff*,struct net_device*) ;
 void* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned char*,int) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (void*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct qlcnic_adapter*,struct sk_buff*,int,int) ;
 int FUNC_15 (struct qlcnic_adapter*,struct sk_buff*,int*) ;
 struct sk_buff* FUNC_16 (struct qlcnic_adapter*,struct qlcnic_host_rds_ring*,int,int ) ;
 int FUNC_17 (struct sk_buff*,int) ;
 int FUNC_18 (struct sk_buff*,int) ;
 TYPE_2__* FUNC_19 (struct sk_buff*) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 (struct sk_buff*,int ,int) ;

__attribute__((used)) static struct qlcnic_rx_buffer *
FUNC_22(struct qlcnic_adapter *VAR_8,
   u8 VAR_9, u64 VAR_10[])
{
 struct net_device *VAR_11 = VAR_8->netdev;
 struct qlcnic_recv_context *VAR_12 = VAR_8->recv_ctx;
 struct qlcnic_rx_buffer *VAR_13;
 struct sk_buff *VAR_14;
 struct qlcnic_host_rds_ring *VAR_15;
 struct iphdr *VAR_16;
 struct ipv6hdr *VAR_17;
 struct tcphdr *VAR_18;
 bool VAR_19;
 int VAR_20, VAR_21;
 int VAR_22, VAR_23;
 u16 VAR_24, VAR_25, VAR_26, VAR_27;
 u16 VAR_28 = 0xffff, VAR_29;

 if (FUNC_20(VAR_9 > VAR_8->max_rds_rings))
  return ((void*)0);

 VAR_15 = &VAR_12->rds_rings[VAR_9];

 VAR_22 = FUNC_7(VAR_10[0]);
 if (FUNC_20(VAR_22 > VAR_15->num_desc))
  return ((void*)0);

 VAR_13 = &VAR_15->rx_buf_arr[VAR_22];

 VAR_24 = FUNC_13(VAR_10[0]);
 VAR_20 = FUNC_11(VAR_10[1]);
 VAR_21 = FUNC_12(VAR_10[1]);
 VAR_19 = FUNC_9(VAR_10[1]);

 VAR_14 = FUNC_16(VAR_8, VAR_15, VAR_22, VAR_7);
 if (!VAR_14)
  return VAR_13;

 if (VAR_8->mac_learn &&
     (VAR_8->flags & VAR_1)) {
  VAR_29 = 0;
  VAR_23 = FUNC_8(VAR_10[1], 1);
  FUNC_14(VAR_8, VAR_14, VAR_23, VAR_29);
 }
 if (FUNC_10(VAR_10[1]))
  VAR_26 = VAR_21 + VAR_4;
 else
  VAR_26 = VAR_21 + VAR_3;

 FUNC_18(VAR_14, VAR_24 + VAR_26);
 FUNC_17(VAR_14, VAR_20);

 if (FUNC_20(FUNC_15(VAR_8, VAR_14, &VAR_28))) {
  VAR_8->stats.rxdropped++;
  FUNC_0(VAR_14);
  return VAR_13;
 }

 VAR_14->protocol = FUNC_1(VAR_14, VAR_11);
 if (FUNC_5(VAR_14->protocol) == VAR_0) {
  VAR_17 = (struct ipv6hdr *)VAR_14->data;
  VAR_18 = (struct tcphdr *)(VAR_14->data + sizeof(struct ipv6hdr));

  VAR_25 = (VAR_18->doff << 2) + VAR_24;
  VAR_17->payload_len = FUNC_2(VAR_25);
 } else {
  VAR_16 = (struct iphdr *)VAR_14->data;
  VAR_18 = (struct tcphdr *)(VAR_14->data + (VAR_16->ihl << 2));
  VAR_25 = (VAR_16->ihl << 2) + (VAR_18->doff << 2) + VAR_24;
  VAR_16->tot_len = FUNC_2(VAR_25);
  VAR_16->check = 0;
  VAR_16->check = FUNC_3((unsigned char *)VAR_16, VAR_16->ihl);
 }

 VAR_18->psh = VAR_19;
 VAR_25 = VAR_14->len;

 if (VAR_8->flags & VAR_2) {
  VAR_27 = FUNC_6(VAR_10[0]);
  FUNC_19(VAR_14)->gso_size = VAR_27;
  if (VAR_14->protocol == FUNC_2(VAR_0))
   FUNC_19(VAR_14)->gso_type = VAR_6;
  else
   FUNC_19(VAR_14)->gso_type = VAR_5;
 }

 if (VAR_28 != 0xffff)
  FUNC_21(VAR_14, VAR_8->vlgrp, VAR_28);
 else
  FUNC_4(VAR_14);

 VAR_8->stats.lro_pkts++;
 VAR_8->stats.lrobytes += VAR_25;
 return VAR_13;
}
