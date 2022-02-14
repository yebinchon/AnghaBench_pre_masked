
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; scalar_t__ ip_summed; scalar_t__ data; int protocol; struct net_device* dev; } ;
struct rx_ring {int napi; int cq_id; int rx_bytes; int rx_packets; int rx_multicast; int rx_dropped; } ;
struct ql_adapter {scalar_t__ vlgrp; struct net_device* ndev; scalar_t__ rx_csum; int flags; } ;
struct net_device {scalar_t__ mtu; } ;
struct iphdr {int frag_off; } ;
struct ib_mac_iocb_rsp {int flags2; int flags1; int flags3; } ;


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
 int VAR_16 ;
 int FUNC_0 (struct ib_mac_iocb_rsp*) ;
 int VAR_17 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 int FUNC_5 (struct ql_adapter*,int ,int ,struct net_device*,char*,...) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (scalar_t__) ;
 struct sk_buff* FUNC_8 (struct ql_adapter*,struct rx_ring*,struct ib_mac_iocb_rsp*) ;
 int FUNC_9 (struct ql_adapter*,int,struct rx_ring*) ;
 int FUNC_10 (struct ql_adapter*,struct sk_buff*) ;
 int VAR_18 ;
 int FUNC_11 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int *,scalar_t__,scalar_t__,struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_16(struct ql_adapter *VAR_19,
       struct rx_ring *VAR_20,
       struct ib_mac_iocb_rsp *VAR_21,
       u16 VAR_22)
{
 struct net_device *VAR_23 = VAR_19->ndev;
 struct sk_buff *VAR_24 = ((void*)0);

 FUNC_0(VAR_21);

 VAR_24 = FUNC_8(VAR_19, VAR_20, VAR_21);
 if (FUNC_13(!VAR_24)) {
  FUNC_5(VAR_19, VAR_18, VAR_16, VAR_19->ndev,
        "No skb available, drop packet.\n");
  VAR_20->rx_dropped++;
  return;
 }


 if (VAR_21->flags2 & VAR_4) {
  FUNC_9(VAR_19, VAR_21->flags2, VAR_20);
  FUNC_1(VAR_24);
  return;
 }




 if (VAR_24->len > VAR_23->mtu + VAR_2) {
  FUNC_1(VAR_24);
  VAR_20->rx_dropped++;
  return;
 }


 if (FUNC_12(VAR_17, &VAR_19->flags)) {
  FUNC_10(VAR_19, VAR_24);
  FUNC_1(VAR_24);
  return;
 }

 FUNC_7(VAR_24->data);
 VAR_24->dev = VAR_23;
 if (VAR_21->flags1 & VAR_6) {
  FUNC_5(VAR_19, VAR_18, VAR_16, VAR_19->ndev, "%s Multicast.\n",
        (VAR_21->flags1 & VAR_6) ==
        VAR_5 ? "Hash" :
        (VAR_21->flags1 & VAR_6) ==
        VAR_8 ? "Registered" :
        (VAR_21->flags1 & VAR_6) ==
        VAR_7 ? "Promiscuous" : "");
  VAR_20->rx_multicast++;
 }
 if (VAR_21->flags2 & VAR_9) {
  FUNC_5(VAR_19, VAR_18, VAR_16, VAR_19->ndev,
        "Promiscuous Packet.\n");
 }

 VAR_24->protocol = FUNC_2(VAR_24, VAR_23);
 VAR_24->ip_summed = VAR_0;




 if (VAR_19->rx_csum &&
  !(VAR_21->flags1 & VAR_3)) {

  if (VAR_21->flags2 & VAR_10) {
   FUNC_5(VAR_19, VAR_18, VAR_16, VAR_19->ndev,
         "TCP checksum done!\n");
   VAR_24->ip_summed = VAR_1;
  } else if ((VAR_21->flags2 & VAR_11) &&
    (VAR_21->flags3 & VAR_13)) {

   struct iphdr *VAR_25 = (struct iphdr *) VAR_24->data;
   if (!(VAR_25->frag_off & FUNC_3(VAR_14|VAR_15))) {
    VAR_24->ip_summed = VAR_1;
    FUNC_5(VAR_19, VAR_18, VAR_16, VAR_19->ndev,
          "TCP checksum done!\n");
   }
  }
 }

 VAR_20->rx_packets++;
 VAR_20->rx_bytes += VAR_24->len;
 FUNC_11(VAR_24, VAR_20->cq_id);
 if (VAR_24->ip_summed == VAR_1) {
  if (VAR_19->vlgrp &&
   (VAR_21->flags2 & VAR_12) &&
   (VAR_22 != 0))
   FUNC_14(&VAR_20->napi, VAR_19->vlgrp,
    VAR_22, VAR_24);
  else
   FUNC_4(&VAR_20->napi, VAR_24);
 } else {
  if (VAR_19->vlgrp &&
   (VAR_21->flags2 & VAR_12) &&
   (VAR_22 != 0))
   FUNC_15(VAR_24, VAR_19->vlgrp, VAR_22);
  else
   FUNC_6(VAR_24);
 }
}
