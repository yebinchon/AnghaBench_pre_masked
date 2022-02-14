
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct tcphdr {int doff; int psh; int seq; } ;
struct sk_buff {int len; scalar_t__ data; int protocol; } ;
struct qlcnic_rx_buffer {int dummy; } ;
struct qlcnic_recv_context {struct qlcnic_host_rds_ring* rds_rings; } ;
struct qlcnic_host_rds_ring {int num_desc; struct qlcnic_rx_buffer* rx_buf_arr; } ;
struct TYPE_3__ {int lrobytes; int lro_pkts; int rxdropped; } ;
struct qlcnic_adapter {int max_rds_rings; int flags; TYPE_1__ stats; int vlgrp; scalar_t__ mac_learn; struct qlcnic_recv_context* recv_ctx; struct net_device* netdev; } ;
struct net_device {int dummy; } ;
struct ipv6hdr {void* payload_len; } ;
struct iphdr {int ihl; scalar_t__ check; void* tot_len; } ;
struct TYPE_4__ {int gso_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (unsigned char*,int) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct qlcnic_adapter*,struct sk_buff*,int,int) ;
 int FUNC_9 (struct qlcnic_adapter*,struct sk_buff*,int*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 struct sk_buff* FUNC_18 (struct qlcnic_adapter*,struct qlcnic_host_rds_ring*,int,int ) ;
 int FUNC_19 (struct sk_buff*,int) ;
 int FUNC_20 (struct sk_buff*,int) ;
 TYPE_2__* FUNC_21 (struct sk_buff*) ;
 scalar_t__ FUNC_22 (int) ;
 int FUNC_23 (struct sk_buff*,int ,int) ;

__attribute__((used)) static struct qlcnic_rx_buffer *
FUNC_24(struct qlcnic_adapter *VAR_6,
     int VAR_7, u64 VAR_8, u64 VAR_9)
{
 struct net_device *VAR_10 = VAR_6->netdev;
 struct qlcnic_recv_context *VAR_11 = VAR_6->recv_ctx;
 struct qlcnic_rx_buffer *VAR_12;
 struct sk_buff *VAR_13;
 struct qlcnic_host_rds_ring *VAR_14;
 struct iphdr *VAR_15;
 struct ipv6hdr *VAR_16;
 struct tcphdr *VAR_17;
 bool VAR_18, VAR_19;
 int VAR_20, VAR_21, VAR_22, VAR_23;
 u16 VAR_24, VAR_25, VAR_26, VAR_27, VAR_28 = 0xffff;
 u32 VAR_29;

 if (FUNC_22(VAR_7 > VAR_6->max_rds_rings))
  return ((void*)0);

 VAR_14 = &VAR_11->rds_rings[VAR_7];

 VAR_20 = FUNC_15(VAR_8);
 if (FUNC_22(VAR_20 > VAR_14->num_desc))
  return ((void*)0);

 VAR_12 = &VAR_14->rx_buf_arr[VAR_20];

 VAR_19 = FUNC_17(VAR_8);
 VAR_24 = FUNC_12(VAR_8);
 VAR_21 = FUNC_10(VAR_8);
 VAR_22 = FUNC_11(VAR_8);
 VAR_18 = FUNC_14(VAR_8);
 VAR_29 = FUNC_16(VAR_9);

 VAR_13 = FUNC_18(VAR_6, VAR_14, VAR_20, VAR_5);
 if (!VAR_13)
  return VAR_12;

 if (VAR_6->mac_learn &&
     (VAR_6->flags & VAR_1)) {
  VAR_27 = 0;
  VAR_23 = FUNC_7(VAR_8);
  FUNC_8(VAR_6, VAR_13, VAR_23, VAR_27);
 }

 if (VAR_19)
  VAR_26 = VAR_22 + VAR_4;
 else
  VAR_26 = VAR_22 + VAR_3;

 FUNC_20(VAR_13, VAR_24 + VAR_26);
 FUNC_19(VAR_13, VAR_21);

 if (FUNC_22(FUNC_9(VAR_6, VAR_13, &VAR_28))) {
  VAR_6->stats.rxdropped++;
  FUNC_0(VAR_13);
  return VAR_12;
 }

 VAR_13->protocol = FUNC_1(VAR_13, VAR_10);

 if (FUNC_6(VAR_13->protocol) == VAR_0) {
  VAR_16 = (struct ipv6hdr *)VAR_13->data;
  VAR_17 = (struct tcphdr *)(VAR_13->data + sizeof(struct ipv6hdr));
  VAR_25 = (VAR_17->doff << 2) + VAR_24;
  VAR_16->payload_len = FUNC_3(VAR_25);
 } else {
  VAR_15 = (struct iphdr *)VAR_13->data;
  VAR_17 = (struct tcphdr *)(VAR_13->data + (VAR_15->ihl << 2));
  VAR_25 = (VAR_15->ihl << 2) + (VAR_17->doff << 2) + VAR_24;
  VAR_15->tot_len = FUNC_3(VAR_25);
  VAR_15->check = 0;
  VAR_15->check = FUNC_4((unsigned char *)VAR_15, VAR_15->ihl);
 }

 VAR_17->psh = VAR_18;
 VAR_17->seq = FUNC_2(VAR_29);
 VAR_25 = VAR_13->len;

 if (VAR_6->flags & VAR_2)
  FUNC_21(VAR_13)->gso_size = FUNC_13(VAR_9);

 if (VAR_28 != 0xffff)
  FUNC_23(VAR_13, VAR_6->vlgrp, VAR_28);
 else
  FUNC_5(VAR_13);

 VAR_6->stats.lro_pkts++;
 VAR_6->stats.lrobytes += VAR_25;

 return VAR_12;
}
