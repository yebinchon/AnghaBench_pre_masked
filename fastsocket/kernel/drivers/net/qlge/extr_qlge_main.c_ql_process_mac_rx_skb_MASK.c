
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct sk_buff {scalar_t__ len; scalar_t__ ip_summed; scalar_t__ data; int protocol; struct net_device* dev; } ;
struct rx_ring {int napi; int cq_id; int rx_bytes; int rx_packets; int rx_dropped; } ;
struct ql_adapter {int vlgrp; struct net_device* ndev; scalar_t__ rx_csum; int flags; } ;
struct net_device {scalar_t__ mtu; } ;
struct iphdr {int frag_off; } ;
struct ib_mac_iocb_rsp {int flags2; int flags1; int flags3; } ;
struct TYPE_2__ {struct sk_buff* skb; } ;
struct bq_desc {TYPE_1__ p; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct net_device*,scalar_t__) ;
 int FUNC_6 (struct ql_adapter*,int ,struct net_device*,char*) ;
 int FUNC_7 (struct ql_adapter*,int ,int ,struct net_device*,char*,...) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (scalar_t__) ;
 int VAR_18 ;
 int FUNC_10 (struct ql_adapter*,int,struct rx_ring*) ;
 int FUNC_11 (struct ql_adapter*,struct sk_buff*) ;
 struct bq_desc* FUNC_12 (struct rx_ring*) ;
 int VAR_19 ;
 int FUNC_13 (struct sk_buff*,scalar_t__) ;
 int FUNC_14 (struct sk_buff*,int ) ;
 int FUNC_15 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_16 (int ,int *) ;
 int FUNC_17 (int *,int ,int,struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*,int ,int) ;

__attribute__((used)) static void FUNC_19(struct ql_adapter *VAR_20,
     struct rx_ring *VAR_21,
     struct ib_mac_iocb_rsp *VAR_22,
     u32 VAR_23,
     u16 VAR_24)
{
 struct net_device *VAR_25 = VAR_20->ndev;
 struct sk_buff *VAR_26 = ((void*)0);
 struct sk_buff *VAR_27 = ((void*)0);
 struct bq_desc *VAR_28 = FUNC_12(VAR_21);

 VAR_26 = VAR_28->p.skb;

 VAR_27 = FUNC_5(VAR_20->ndev, VAR_23 + VAR_16);
 if (VAR_27 == ((void*)0)) {
  FUNC_6(VAR_20, VAR_18, VAR_20->ndev,
     "No skb available, drop the packet.\n");
  VAR_21->rx_dropped++;
  return;
 }
 FUNC_15(VAR_27, VAR_16);
 FUNC_3(FUNC_13(VAR_27, VAR_23), VAR_26->data, VAR_23);
 VAR_26 = VAR_27;


 if (VAR_22->flags2 & VAR_4) {
  FUNC_10(VAR_20, VAR_22->flags2, VAR_21);
  FUNC_0(VAR_26);
  return;
 }


 if (FUNC_16(VAR_17, &VAR_20->flags)) {
  FUNC_11(VAR_20, VAR_26);
  FUNC_0(VAR_26);
  return;
 }




 if (VAR_26->len > VAR_25->mtu + VAR_2) {
  FUNC_0(VAR_26);
  VAR_21->rx_dropped++;
  return;
 }

 FUNC_9(VAR_26->data);
 VAR_26->dev = VAR_25;
 if (VAR_22->flags1 & VAR_6) {
  FUNC_7(VAR_20, VAR_19, VAR_15, VAR_20->ndev,
        "%s Multicast.\n",
        (VAR_22->flags1 & VAR_6) ==
        VAR_5 ? "Hash" :
        (VAR_22->flags1 & VAR_6) ==
        VAR_8 ? "Registered" :
        (VAR_22->flags1 & VAR_6) ==
        VAR_7 ? "Promiscuous" : "");
 }
 if (VAR_22->flags2 & VAR_9)
  FUNC_7(VAR_20, VAR_19, VAR_15, VAR_20->ndev,
        "Promiscuous Packet.\n");

 VAR_21->rx_packets++;
 VAR_21->rx_bytes += VAR_26->len;
 VAR_26->protocol = FUNC_1(VAR_26, VAR_25);
 VAR_26->ip_summed = VAR_0;




 if (VAR_20->rx_csum &&
  !(VAR_22->flags1 & VAR_3)) {

  if (VAR_22->flags2 & VAR_10) {
   FUNC_7(VAR_20, VAR_19, VAR_15, VAR_20->ndev,
         "TCP checksum done!\n");
   VAR_26->ip_summed = VAR_1;
  } else if ((VAR_22->flags2 & VAR_11) &&
    (VAR_22->flags3 & VAR_12)) {

   struct iphdr *VAR_29 = (struct iphdr *) VAR_26->data;
   if (!(VAR_29->frag_off & FUNC_2(VAR_13|VAR_14))) {
    VAR_26->ip_summed = VAR_1;
    FUNC_7(VAR_20, VAR_19, VAR_15,
          VAR_20->ndev,
          "UDP checksum done!\n");
   }
  }
 }

 FUNC_14(VAR_26, VAR_21->cq_id);
 if (VAR_26->ip_summed == VAR_1) {
  if (VAR_24 != 0xffff)
   FUNC_17(&VAR_21->napi, VAR_20->vlgrp,
      VAR_24, VAR_26);
  else
   FUNC_4(&VAR_21->napi, VAR_26);
 } else {
  if (VAR_24 != 0xffff)
   FUNC_18(VAR_26, VAR_20->vlgrp, VAR_24);
  else
   FUNC_8(VAR_26);
 }
}
