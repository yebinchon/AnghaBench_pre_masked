
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct sk_buff {scalar_t__ len; scalar_t__ ip_summed; int protocol; int truesize; int data_len; } ;
struct napi_struct {int dummy; } ;
struct rx_ring {int cq_id; int rx_bytes; int rx_packets; int rx_dropped; struct napi_struct napi; } ;
struct ql_adapter {int vlgrp; struct net_device* ndev; scalar_t__ rx_csum; } ;
struct net_device {scalar_t__ mtu; } ;
struct iphdr {int frag_off; } ;
struct ib_mac_iocb_rsp {int flags2; int flags1; int flags3; } ;
struct TYPE_3__ {scalar_t__ offset; int page; void* va; } ;
struct TYPE_4__ {TYPE_1__ pg_chunk; } ;
struct bq_desc {TYPE_2__ p; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct sk_buff*) ;
 int VAR_11 ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,void*,scalar_t__) ;
 int FUNC_4 (struct napi_struct*,struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct net_device*,scalar_t__) ;
 int FUNC_6 (struct ql_adapter*,int ,struct net_device*,char*) ;
 int FUNC_7 (struct ql_adapter*,int ,int ,struct net_device*,char*,...) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct ql_adapter*,int,struct rx_ring*) ;
 struct bq_desc* FUNC_12 (struct ql_adapter*,struct rx_ring*) ;
 int VAR_12 ;
 int FUNC_13 (struct sk_buff*,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_14 (struct sk_buff*,scalar_t__) ;
 int FUNC_15 (struct sk_buff*,int ) ;
 int FUNC_16 (struct napi_struct*,int ,int,struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*,int ,int) ;

__attribute__((used)) static void FUNC_18(struct ql_adapter *VAR_13,
     struct rx_ring *VAR_14,
     struct ib_mac_iocb_rsp *VAR_15,
     u32 VAR_16,
     u16 VAR_17)
{
 struct net_device *VAR_18 = VAR_13->ndev;
 struct sk_buff *VAR_19 = ((void*)0);
 void *VAR_20;
 struct bq_desc *VAR_21 = FUNC_12(VAR_13, VAR_14);
 struct napi_struct *VAR_22 = &VAR_14->napi;

 VAR_19 = FUNC_5(VAR_18, VAR_16);
 if (!VAR_19) {
  FUNC_6(VAR_13, VAR_11, VAR_13->ndev,
     "Couldn't get an skb, need to unwind!.\n");
  VAR_14->rx_dropped++;
  FUNC_10(VAR_21->p.pg_chunk.page);
  return;
 }

 VAR_20 = VAR_21->p.pg_chunk.va;
 FUNC_9(VAR_20);


 if (VAR_15->flags2 & VAR_4) {
  FUNC_11(VAR_13, VAR_15->flags2, VAR_14);
  goto err_out;
 }




 if (VAR_19->len > VAR_18->mtu + VAR_2) {
  FUNC_6(VAR_13, VAR_11, VAR_13->ndev,
     "Segment too small, dropping.\n");
  VAR_14->rx_dropped++;
  goto err_out;
 }
 FUNC_3(FUNC_14(VAR_19, VAR_2), VAR_20, VAR_2);
 FUNC_7(VAR_13, VAR_12, VAR_10, VAR_13->ndev,
       "%d bytes of headers and data in large. Chain page to new skb and pull tail.\n",
       VAR_16);
 FUNC_13(VAR_19, 0, VAR_21->p.pg_chunk.page,
    VAR_21->p.pg_chunk.offset+VAR_2,
    VAR_16-VAR_2);
 VAR_19->len += VAR_16-VAR_2;
 VAR_19->data_len += VAR_16-VAR_2;
 VAR_19->truesize += VAR_16-VAR_2;

 VAR_14->rx_packets++;
 VAR_14->rx_bytes += VAR_19->len;
 VAR_19->protocol = FUNC_1(VAR_19, VAR_18);
 VAR_19->ip_summed = VAR_0;

 if (VAR_13->rx_csum &&
  !(VAR_15->flags1 & VAR_3)) {

  if (VAR_15->flags2 & VAR_5) {
   FUNC_7(VAR_13, VAR_12, VAR_10, VAR_13->ndev,
         "TCP checksum done!\n");
   VAR_19->ip_summed = VAR_1;
  } else if ((VAR_15->flags2 & VAR_6) &&
    (VAR_15->flags3 & VAR_7)) {

   struct iphdr *VAR_23 =
    (struct iphdr *) ((u8 *)VAR_20 + VAR_2);
   if (!(VAR_23->frag_off & FUNC_2(VAR_8|VAR_9))) {
    VAR_19->ip_summed = VAR_1;
    FUNC_7(VAR_13, VAR_12, VAR_10,
          VAR_13->ndev,
          "UDP checksum done!\n");
   }
  }
 }

 FUNC_15(VAR_19, VAR_14->cq_id);
 if (VAR_19->ip_summed == VAR_1) {
  if (VAR_17 != 0xffff)
   FUNC_16(VAR_22, VAR_13->vlgrp, VAR_17, VAR_19);
  else
   FUNC_4(VAR_22, VAR_19);
 } else {
  if (VAR_17 != 0xffff)
   FUNC_17(VAR_19, VAR_13->vlgrp, VAR_17);
  else
   FUNC_8(VAR_19);
 }
 return;
err_out:
 FUNC_0(VAR_19);
 FUNC_10(VAR_21->p.pg_chunk.page);
}
