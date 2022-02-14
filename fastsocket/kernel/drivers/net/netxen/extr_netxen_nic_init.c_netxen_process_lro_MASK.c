
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct tcphdr {int doff; int psh; int seq; } ;
struct sk_buff {int len; scalar_t__ data; scalar_t__ protocol; } ;
struct nx_host_sds_ring {int dummy; } ;
struct nx_host_rds_ring {int num_desc; struct netxen_rx_buffer* rx_buf_arr; } ;
struct netxen_rx_buffer {int dummy; } ;
struct netxen_recv_context {struct nx_host_rds_ring* rds_rings; } ;
struct TYPE_3__ {int rxbytes; int lro_pkts; } ;
struct netxen_adapter {int max_rds_rings; int flags; TYPE_1__ stats; scalar_t__ vlgrp; struct netxen_recv_context recv_ctx; struct net_device* netdev; } ;
struct net_device {int dummy; } ;
struct iphdr {int ihl; scalar_t__ check; scalar_t__ tot_len; } ;
struct ethhdr {int dummy; } ;
struct TYPE_4__ {int gso_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*,int*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,struct net_device*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (unsigned char*,int) ;
 int FUNC_5 (scalar_t__,struct ethhdr*,int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 struct sk_buff* FUNC_15 (struct netxen_adapter*,struct nx_host_rds_ring*,int,int ) ;
 int FUNC_16 (struct sk_buff*,int) ;
 int FUNC_17 (struct sk_buff*,int) ;
 TYPE_2__* FUNC_18 (struct sk_buff*) ;
 scalar_t__ FUNC_19 (int) ;
 int FUNC_20 (struct sk_buff*,scalar_t__,int) ;

__attribute__((used)) static struct netxen_rx_buffer *
FUNC_21(struct netxen_adapter *VAR_7,
  struct nx_host_sds_ring *VAR_8,
  int VAR_9, u64 VAR_10, u64 VAR_11)
{
 struct net_device *VAR_12 = VAR_7->netdev;
 struct netxen_recv_context *VAR_13 = &VAR_7->recv_ctx;
 struct netxen_rx_buffer *VAR_14;
 struct sk_buff *VAR_15;
 struct nx_host_rds_ring *VAR_16;
 struct iphdr *VAR_17;
 struct tcphdr *VAR_18;
 struct ethhdr *VAR_19;
 bool VAR_20, VAR_21;
 int VAR_22, VAR_23;
 int VAR_24;
 u16 VAR_25, VAR_26, VAR_27;
 u32 VAR_28;
 u16 VAR_29 = 0xffff;
 u8 VAR_30 = 0;

 if (FUNC_19(VAR_9 > VAR_7->max_rds_rings))
  return ((void*)0);

 VAR_16 = &VAR_13->rds_rings[VAR_9];

 VAR_24 = FUNC_12(VAR_10);
 if (FUNC_19(VAR_24 > VAR_16->num_desc))
  return ((void*)0);

 VAR_14 = &VAR_16->rx_buf_arr[VAR_24];

 VAR_21 = FUNC_14(VAR_10);
 VAR_25 = FUNC_9(VAR_10);
 VAR_22 = FUNC_7(VAR_10);
 VAR_23 = FUNC_8(VAR_10);
 VAR_20 = FUNC_11(VAR_10);
 VAR_28 = FUNC_13(VAR_11);

 VAR_15 = FUNC_15(VAR_7, VAR_16, VAR_24, VAR_3);
 if (!VAR_15)
  return VAR_14;

 if (VAR_21)
  VAR_27 = VAR_23 + VAR_5;
 else
  VAR_27 = VAR_23 + VAR_4;

 FUNC_17(VAR_15, VAR_25 + VAR_27);

 FUNC_16(VAR_15, VAR_22);

 if (VAR_7->vlgrp) {
  if (!FUNC_0(VAR_15, &VAR_29)) {
   VAR_19 = (struct ethhdr *) VAR_15->data;
   FUNC_5(VAR_15->data + VAR_6, VAR_19, VAR_0 * 2);
   FUNC_16(VAR_15, VAR_6);
  }
 } else {
  if (VAR_15->protocol == FUNC_3(VAR_1))
   VAR_30 = VAR_6;
 }

 VAR_15->protocol = FUNC_1(VAR_15, VAR_12);

 VAR_17 = (struct iphdr *)(VAR_15->data + VAR_30);
 VAR_18 = (struct tcphdr *)((VAR_15->data + VAR_30) + (VAR_17->ihl << 2));

 VAR_26 = (VAR_17->ihl << 2) + (VAR_18->doff << 2) + VAR_25;
 VAR_17->tot_len = FUNC_3(VAR_26);
 VAR_17->check = 0;
 VAR_17->check = FUNC_4((unsigned char *)VAR_17, VAR_17->ihl);
 VAR_18->psh = VAR_20;
 VAR_18->seq = FUNC_2(VAR_28);

 VAR_26 = VAR_15->len;

 if (VAR_7->flags & VAR_2)
  FUNC_18(VAR_15)->gso_size = FUNC_10(VAR_11);

 if ((VAR_29 != 0xffff))
  FUNC_20(VAR_15, VAR_7->vlgrp, VAR_29);
 else
  FUNC_6(VAR_15);

 VAR_7->stats.lro_pkts++;
 VAR_7->stats.rxbytes += VAR_26;

 return VAR_14;
}
