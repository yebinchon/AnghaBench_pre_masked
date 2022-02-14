
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int len; scalar_t__ protocol; scalar_t__ ip_summed; scalar_t__ data; } ;
struct qeth_qdio_out_q {int dummy; } ;
struct qeth_hdr_tso {int dummy; } ;
struct TYPE_10__ {int length; } ;
struct TYPE_11__ {TYPE_1__ l3; } ;
struct qeth_hdr {TYPE_2__ hdr; } ;
struct TYPE_13__ {int tx_bytes; int tx_errors; int tx_dropped; int tx_packets; int tx_carrier_errors; } ;
struct TYPE_17__ {int large_send_bytes; int sg_frags_sent; scalar_t__ outbound_start_time; int outbound_time; int sg_skbs_sent; int large_send_cnt; int tx_lin; int outbound_cnt; } ;
struct TYPE_16__ {scalar_t__ cq; int large_send; scalar_t__ performance_stats; scalar_t__ sniffer; } ;
struct TYPE_14__ {scalar_t__ type; scalar_t__ broadcast_capable; } ;
struct TYPE_12__ {struct qeth_qdio_out_q** out_qs; } ;
struct qeth_card {scalar_t__ state; TYPE_4__ stats; TYPE_8__ perf_stats; TYPE_7__ options; TYPE_5__ info; scalar_t__ vlangrp; TYPE_6__* dev; int lan_online; TYPE_3__ qdio; } ;
struct net_device {struct qeth_card* ml_priv; } ;
typedef enum qeth_large_send_types { ____Placeholder_qeth_large_send_types } qeth_large_send_types ;
struct TYPE_18__ {int nr_frags; } ;
struct TYPE_15__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int,char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 struct qeth_hdr* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,struct qeth_hdr*) ;
 int FUNC_6 (struct qeth_hdr*,int ,int) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int VAR_18 ;
 int FUNC_9 (struct qeth_card*,struct qeth_qdio_out_q*,struct sk_buff*,struct qeth_hdr*,int) ;
 int FUNC_10 (struct qeth_card*,struct qeth_qdio_out_q*,struct sk_buff*,struct qeth_hdr*,int,int,int ) ;
 int FUNC_11 (struct qeth_card*,void*,struct sk_buff*,int) ;
 int FUNC_12 (struct sk_buff*) ;
 scalar_t__ FUNC_13 () ;
 size_t FUNC_14 (struct qeth_card*,struct sk_buff*,int,int) ;
 int FUNC_15 (struct qeth_card*,struct qeth_hdr*,struct sk_buff*) ;
 int FUNC_16 (struct qeth_card*,struct qeth_hdr*,struct sk_buff*,int,int) ;
 int FUNC_17 (struct qeth_card*,struct sk_buff*) ;
 int FUNC_18 (struct qeth_card*,struct qeth_hdr*,struct sk_buff*) ;
 scalar_t__ FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (struct qeth_card*,struct qeth_hdr*,struct sk_buff*) ;
 int FUNC_22 (struct sk_buff*,scalar_t__,int) ;
 int FUNC_23 (struct sk_buff*,int,scalar_t__,int) ;
 scalar_t__ FUNC_24 (struct sk_buff*) ;
 scalar_t__ FUNC_25 (struct sk_buff*) ;
 int FUNC_26 (struct sk_buff*,int) ;
 scalar_t__ FUNC_27 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_28 (struct sk_buff*,int) ;
 TYPE_9__* FUNC_29 (struct sk_buff*) ;
 int FUNC_30 (struct sk_buff*) ;
 scalar_t__ FUNC_31 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_32(struct sk_buff *VAR_19, struct net_device *VAR_20)
{
 int VAR_21;
 u16 *VAR_22;
 struct qeth_hdr *VAR_23 = ((void*)0);
 int VAR_24 = 0;
 int VAR_25;
 struct qeth_card *VAR_26 = VAR_20->ml_priv;
 struct sk_buff *VAR_27 = ((void*)0);
 int VAR_28 = FUNC_12(VAR_19);
 int VAR_29 = FUNC_17(VAR_26, VAR_19);
 struct qeth_qdio_out_q *VAR_30 = VAR_26->qdio.out_qs
  [FUNC_14(VAR_26, VAR_19, VAR_28, VAR_29)];
 int VAR_31 = VAR_19->len;
 enum qeth_large_send_types VAR_32 = VAR_12;
 int VAR_33 = -1;
 int VAR_34;

 if (((VAR_26->info.type == VAR_10) &&
      (((VAR_26->options.cq != VAR_11) && !VAR_28) ||
       ((VAR_26->options.cq == VAR_11) &&
        (VAR_19->protocol != VAR_6)))) ||
     VAR_26->options.sniffer)
   goto tx_drop;

 if ((VAR_26->state != VAR_1) || !VAR_26->lan_online) {
  VAR_26->stats.tx_carrier_errors++;
  goto tx_drop;
 }

 if ((VAR_29 == VAR_14) &&
     (VAR_26->info.broadcast_capable == 0))
  goto tx_drop;

 if (VAR_26->options.performance_stats) {
  VAR_26->perf_stats.outbound_cnt++;
  VAR_26->perf_stats.outbound_start_time = FUNC_13();
 }

 if (FUNC_24(VAR_19))
  VAR_32 = VAR_26->options.large_send;

 if ((VAR_26->info.type == VAR_10) && (!VAR_32) &&
     (FUNC_29(VAR_19)->nr_frags == 0)) {
  VAR_27 = VAR_19;
  if (VAR_27->protocol == VAR_6)
   VAR_33 = 0;
  else
   VAR_33 = VAR_4;
  VAR_23 = FUNC_4(VAR_18, VAR_7);
  if (!VAR_23)
   goto tx_drop;
  VAR_24++;
 } else {

  VAR_27 = FUNC_28(VAR_19, sizeof(struct qeth_hdr_tso)
     + VAR_17);
  if (!VAR_27)
   goto tx_drop;
 }

 if (VAR_26->info.type == VAR_10) {
  if (VAR_33 < 0)
   FUNC_26(VAR_27, VAR_4);
 } else {
  if (VAR_28 == 4) {
   if (VAR_26->dev->type == VAR_0)
    FUNC_26(VAR_27, VAR_16);
   else
    FUNC_26(VAR_27, VAR_4);
  }

  if (VAR_28 != 4 && VAR_26->vlangrp &&
    FUNC_31(VAR_27)) {
   FUNC_27(VAR_27, VAR_17);
   FUNC_22(VAR_27, VAR_27->data + 4, 4);
   FUNC_23(VAR_27, 4,
    VAR_27->data + 8, 4);
   FUNC_23(VAR_27, 8,
    VAR_27->data + 12, 4);
   VAR_22 = (u16 *)(VAR_27->data + 12);
   *VAR_22 = FUNC_1(VAR_5);
   *(VAR_22 + 1) = FUNC_3(FUNC_30(VAR_27));
  }
 }

 FUNC_7(VAR_20);




 if (VAR_32 == VAR_13) {
  if (FUNC_20(VAR_27) + 1 > 16) {
   if (FUNC_25(VAR_27))
    goto tx_drop;
   if (VAR_26->options.performance_stats)
    VAR_26->perf_stats.tx_lin++;
  }
 }

 if ((VAR_32 == VAR_13) &&
     (VAR_29 == VAR_15)) {
  VAR_23 = (struct qeth_hdr *)FUNC_27(VAR_27,
      sizeof(struct qeth_hdr_tso));
  if (FUNC_19(VAR_27))
   FUNC_0(2, "tso skb misaligned\n");
  FUNC_6(VAR_23, 0, sizeof(struct qeth_hdr_tso));
  FUNC_16(VAR_26, VAR_23, VAR_27, VAR_28, VAR_29);
  FUNC_21(VAR_26, VAR_23, VAR_27);
  VAR_24++;
 } else {
  if (VAR_33 < 0) {
   VAR_23 = (struct qeth_hdr *)FUNC_27(VAR_27,
      sizeof(struct qeth_hdr));
   FUNC_16(VAR_26, VAR_23, VAR_27, VAR_28,
      VAR_29);
  } else {
   if (VAR_27->protocol == VAR_6)
    FUNC_15(VAR_26, VAR_23, VAR_27);
   else {
    FUNC_16(VAR_26, VAR_23, VAR_27, VAR_28,
       VAR_29);
    VAR_23->hdr.l3.length = VAR_27->len - VAR_33;
   }
  }

  if (VAR_19->ip_summed == VAR_2)
   FUNC_18(VAR_26, VAR_23, VAR_27);
 }

 VAR_25 = FUNC_11(VAR_26, (void *)VAR_23, VAR_27,
       VAR_24);
 if (!VAR_25) {
  if (VAR_33 >= 0)
   FUNC_5(VAR_18, VAR_23);
  goto tx_drop;
 }
 VAR_24 += VAR_25;
 VAR_34 = FUNC_29(VAR_27)->nr_frags;

 if (VAR_26->info.type != VAR_10)
  VAR_21 = FUNC_9(VAR_26, VAR_30, VAR_27, VAR_23,
      VAR_24);
 else
  VAR_21 = FUNC_10(VAR_26, VAR_30, VAR_27, VAR_23,
     VAR_24, VAR_33, 0);

 if (!VAR_21) {
  VAR_26->stats.tx_packets++;
  VAR_26->stats.tx_bytes += VAR_31;
  if (VAR_27 != VAR_19)
   FUNC_2(VAR_19);
  if (VAR_26->options.performance_stats) {
   if (VAR_32 != VAR_12) {
    VAR_26->perf_stats.large_send_bytes += VAR_31;
    VAR_26->perf_stats.large_send_cnt++;
   }
   if (VAR_34) {
    VAR_26->perf_stats.sg_skbs_sent++;

    VAR_26->perf_stats.sg_frags_sent += VAR_34 + 1;
   }
  }
  VAR_21 = VAR_9;
 } else {
  if (VAR_33 >= 0)
   FUNC_5(VAR_18, VAR_23);

  if (VAR_21 == -VAR_3) {
   if (VAR_27 != VAR_19)
    FUNC_2(VAR_27);
   return VAR_8;
  } else
   goto tx_drop;
 }

 FUNC_8(VAR_20);
 if (VAR_26->options.performance_stats)
  VAR_26->perf_stats.outbound_time += FUNC_13() -
   VAR_26->perf_stats.outbound_start_time;
 return VAR_21;

tx_drop:
 VAR_26->stats.tx_dropped++;
 VAR_26->stats.tx_errors++;
 if ((VAR_27 != VAR_19) && VAR_27)
  FUNC_2(VAR_27);
 FUNC_2(VAR_19);
 FUNC_8(VAR_20);
 return VAR_9;
}
