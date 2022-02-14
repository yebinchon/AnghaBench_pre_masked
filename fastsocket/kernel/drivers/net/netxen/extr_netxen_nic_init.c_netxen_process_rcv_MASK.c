
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct sk_buff {int protocol; scalar_t__ data; } ;
struct nx_host_sds_ring {int napi; } ;
struct nx_host_rds_ring {int num_desc; int skb_size; struct netxen_rx_buffer* rx_buf_arr; } ;
struct netxen_rx_buffer {int dummy; } ;
struct netxen_recv_context {struct nx_host_rds_ring* rds_rings; } ;
struct TYPE_2__ {int rxbytes; int rx_pkts; } ;
struct netxen_adapter {int max_rds_rings; TYPE_1__ stats; scalar_t__ vlgrp; struct netxen_recv_context recv_ctx; struct net_device* netdev; } ;
struct net_device {int dummy; } ;
struct ethhdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int*) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 int FUNC_2 (scalar_t__,struct ethhdr*,int) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct sk_buff* FUNC_8 (struct netxen_adapter*,struct nx_host_rds_ring*,int,int) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*,int) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int *,scalar_t__,int,struct sk_buff*) ;

__attribute__((used)) static struct netxen_rx_buffer *
FUNC_13(struct netxen_adapter *VAR_2,
  struct nx_host_sds_ring *VAR_3,
  int VAR_4, u64 VAR_5)
{
 struct net_device *VAR_6 = VAR_2->netdev;
 struct netxen_recv_context *VAR_7 = &VAR_2->recv_ctx;
 struct netxen_rx_buffer *VAR_8;
 struct sk_buff *VAR_9;
 struct nx_host_rds_ring *VAR_10;
 struct ethhdr *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;
 u16 VAR_16 = 0xffff;

 if (FUNC_11(VAR_4 >= VAR_2->max_rds_rings))
  return ((void*)0);

 VAR_10 = &VAR_7->rds_rings[VAR_4];

 VAR_12 = FUNC_5(VAR_5);
 if (FUNC_11(VAR_12 >= VAR_10->num_desc))
  return ((void*)0);

 VAR_8 = &VAR_10->rx_buf_arr[VAR_12];

 VAR_13 = FUNC_7(VAR_5);
 VAR_14 = FUNC_6(VAR_5);
 VAR_15 = FUNC_4(VAR_5);

 VAR_9 = FUNC_8(VAR_2, VAR_10, VAR_12, VAR_14);
 if (!VAR_9)
  return VAR_8;

 if (VAR_13 > VAR_10->skb_size)
  FUNC_10(VAR_9, VAR_10->skb_size);
 else
  FUNC_10(VAR_9, VAR_13);


 if (VAR_15)
  FUNC_9(VAR_9, VAR_15);

 if (VAR_2->vlgrp) {
  if (!FUNC_0(VAR_9, &VAR_16)) {
   VAR_11 = (struct ethhdr *) VAR_9->data;
   FUNC_2(VAR_9->data + VAR_1, VAR_11, VAR_0 * 2);
   FUNC_9(VAR_9, VAR_1);
  }
 }

 VAR_9->protocol = FUNC_1(VAR_9, VAR_6);

 if (VAR_16 != 0xffff)
  FUNC_12(&VAR_3->napi, VAR_2->vlgrp, VAR_16, VAR_9);
 else
  FUNC_3(&VAR_3->napi, VAR_9);

 VAR_2->stats.rx_pkts++;
 VAR_2->stats.rxbytes += VAR_13;

 return VAR_8;
}
