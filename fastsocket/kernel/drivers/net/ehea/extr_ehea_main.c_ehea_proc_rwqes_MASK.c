
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct sk_buff {scalar_t__ len; } ;
struct net_device {int dummy; } ;
struct ehea_qp {int dummy; } ;
struct TYPE_8__ {int poll_receive_errors; } ;
struct TYPE_7__ {int len; struct sk_buff** arr; } ;
struct TYPE_6__ {int len; struct sk_buff** arr; } ;
struct TYPE_5__ {int len; struct sk_buff** arr; } ;
struct ehea_port_res {int rx_packets; int rx_bytes; TYPE_4__ p_stats; int napi; TYPE_3__ rq3_skba; TYPE_2__ rq2_skba; TYPE_1__ rq1_skba; struct ehea_qp* qp; struct ehea_port* port; } ;
struct ehea_port {scalar_t__ vgrp; } ;
struct ehea_cqe {int status; int vlan_tag; scalar_t__ num_bytes_transfered; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ehea_cqe*,int*) ;
 int FUNC_1 (struct ehea_cqe*,int,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct net_device*,struct sk_buff*,struct ehea_cqe*,struct ehea_port_res*) ;
 int FUNC_4 (struct ehea_qp*) ;
 int FUNC_5 (char*) ;
 struct ehea_cqe* FUNC_6 (struct ehea_qp*,int*) ;
 int FUNC_7 (struct ehea_port_res*,int,int) ;
 int FUNC_8 (struct ehea_port_res*,int) ;
 int FUNC_9 (struct ehea_port_res*,int) ;
 int FUNC_10 (struct ehea_port_res*,int,struct ehea_cqe*,int*,int*) ;
 struct sk_buff* FUNC_11 (struct sk_buff**,int,struct ehea_cqe*) ;
 struct sk_buff* FUNC_12 (struct sk_buff**,int,int) ;
 int FUNC_13 (int *,struct sk_buff*) ;
 struct sk_buff* FUNC_14 (struct net_device*,int ) ;
 scalar_t__ FUNC_15 (struct ehea_port*) ;
 scalar_t__ FUNC_16 (struct ehea_port*) ;
 int FUNC_17 () ;
 int FUNC_18 (struct sk_buff*,char*,scalar_t__) ;
 scalar_t__ FUNC_19 (int) ;
 int FUNC_20 (int *,scalar_t__,int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_21(struct net_device *VAR_2,
      struct ehea_port_res *VAR_3,
      int VAR_4)
{
 struct ehea_port *VAR_5 = VAR_3->port;
 struct ehea_qp *VAR_6 = VAR_3->qp;
 struct ehea_cqe *VAR_7;
 struct sk_buff *VAR_8;
 struct sk_buff **VAR_9 = VAR_3->rq1_skba.arr;
 struct sk_buff **VAR_10 = VAR_3->rq2_skba.arr;
 struct sk_buff **VAR_11 = VAR_3->rq3_skba.arr;
 int VAR_12 = VAR_3->rq1_skba.len;
 int VAR_13 = VAR_3->rq2_skba.len;
 int VAR_14 = VAR_3->rq3_skba.len;
 int VAR_15, VAR_16, VAR_17, VAR_18;
 u64 VAR_19 = 0;
 int VAR_20, VAR_21, VAR_22, VAR_23;

 VAR_15 = VAR_16 = VAR_17 = VAR_18 = 0;
 VAR_21 = 0;

 VAR_7 = FUNC_6(VAR_6, &VAR_20);
 while ((VAR_15 < VAR_4) && VAR_7) {
  FUNC_4(VAR_6);
  VAR_16++;
  VAR_15++;
  if (FUNC_16(VAR_5))
   FUNC_1(VAR_7, sizeof(*VAR_7), "CQE");

  VAR_21 = VAR_20;
  FUNC_17();
  if (!FUNC_0(VAR_7, &VAR_22)) {
   if (VAR_22 == 1) {

    VAR_8 = FUNC_12(VAR_9,
         VAR_12,
         VAR_20);
    if (FUNC_19(!VAR_8)) {
     if (FUNC_15(VAR_5))
      FUNC_5("LL rq1: skb=NULL");

     VAR_8 = FUNC_14(VAR_2,
              VAR_1);
     if (!VAR_8){
      FUNC_2("Not enough memory to allocate skb\n");
      break;
     }
    }
    FUNC_18(VAR_8, ((char *)VAR_7) + 64,
       VAR_7->num_bytes_transfered - 4);
    FUNC_3(VAR_2, VAR_8, VAR_7, VAR_3);
   } else if (VAR_22 == 2) {

    VAR_8 = FUNC_11(VAR_10,
             VAR_13, VAR_7);
    if (FUNC_19(!VAR_8)) {
     if (FUNC_15(VAR_5))
      FUNC_2("rq2: skb=NULL");
     break;
    }
    FUNC_3(VAR_2, VAR_8, VAR_7, VAR_3);
    VAR_17++;
   } else {

    VAR_8 = FUNC_11(VAR_11,
             VAR_14, VAR_7);
    if (FUNC_19(!VAR_8)) {
     if (FUNC_15(VAR_5))
      FUNC_2("rq3: skb=NULL");
     break;
    }
    FUNC_3(VAR_2, VAR_8, VAR_7, VAR_3);
    VAR_18++;
   }

   VAR_19 += VAR_8->len;

   if ((VAR_7->status & VAR_0)
       && VAR_5->vgrp) {
    FUNC_20(&VAR_3->napi, VAR_5->vgrp,
      VAR_7->vlan_tag, VAR_8);
   } else {
    FUNC_13(&VAR_3->napi, VAR_8);
   }
  } else {
   VAR_3->p_stats.poll_receive_errors++;
   VAR_23 = FUNC_10(VAR_3, VAR_22, VAR_7,
          &VAR_17,
          &VAR_18);
   if (VAR_23)
    break;
  }
  VAR_7 = FUNC_6(VAR_6, &VAR_20);
 }

 VAR_3->rx_packets += VAR_15;
 VAR_3->rx_bytes += VAR_19;

 FUNC_7(VAR_3, VAR_21, VAR_16);
 FUNC_8(VAR_3, VAR_17);
 FUNC_9(VAR_3, VAR_18);

 return VAR_15;
}
