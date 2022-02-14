
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ protocol; scalar_t__ data; } ;
struct qeth_qdio_out_q {int dummy; } ;
struct TYPE_9__ {int pkt_length; } ;
struct TYPE_10__ {TYPE_2__ l2; } ;
struct qeth_hdr {TYPE_3__ hdr; } ;
struct TYPE_14__ {int tx_bytes; int tx_errors; int tx_dropped; int tx_packets; int tx_carrier_errors; } ;
struct TYPE_13__ {scalar_t__ outbound_start_time; int outbound_time; int outbound_cnt; } ;
struct TYPE_12__ {scalar_t__ performance_stats; } ;
struct TYPE_11__ {scalar_t__ type; } ;
struct TYPE_8__ {struct qeth_qdio_out_q** out_qs; } ;
struct qeth_card {scalar_t__ state; TYPE_7__ stats; TYPE_6__ perf_stats; TYPE_5__ options; TYPE_4__ info; int lan_online; TYPE_1__ qdio; } ;
struct net_device {struct qeth_card* ml_priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct qeth_hdr* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct qeth_hdr*) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int VAR_9 ;
 int FUNC_7 (struct qeth_card*,struct qeth_qdio_out_q*,struct sk_buff*,struct qeth_hdr*,int) ;
 int FUNC_8 (struct qeth_card*,struct qeth_qdio_out_q*,struct sk_buff*,struct qeth_hdr*,int,int,int) ;
 int FUNC_9 (struct qeth_card*,void*,struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 () ;
 size_t FUNC_12 (struct qeth_card*,struct sk_buff*,int,int) ;
 int FUNC_13 (struct qeth_card*,struct qeth_hdr*,struct sk_buff*,int,int) ;
 int FUNC_14 (struct qeth_card*,struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 scalar_t__ FUNC_16 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_17 (struct sk_buff*,int) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_20(struct sk_buff *VAR_10, struct net_device *VAR_11)
{
 int VAR_12;
 struct qeth_hdr *VAR_13 = ((void*)0);
 int VAR_14 = 0;
 struct qeth_card *VAR_15 = VAR_11->ml_priv;
 struct sk_buff *VAR_16 = VAR_10;
 int VAR_17 = FUNC_10(VAR_10);
 int VAR_18 = FUNC_14(VAR_15, VAR_10);
 struct qeth_qdio_out_q *VAR_19 = VAR_15->qdio.out_qs
  [FUNC_12(VAR_15, VAR_10, VAR_17, VAR_18)];
 int VAR_20 = VAR_10->len;
 int VAR_21 = -1;
 int VAR_22 = 0;
 int VAR_23 = 0;

 if ((VAR_15->state != VAR_0) || !VAR_15->lan_online) {
  VAR_15->stats.tx_carrier_errors++;
  goto tx_drop;
 }

 if ((VAR_15->info.type == VAR_8) &&
     (VAR_10->protocol == FUNC_1(VAR_3)))
  goto tx_drop;

 if (VAR_15->options.performance_stats) {
  VAR_15->perf_stats.outbound_cnt++;
  VAR_15->perf_stats.outbound_start_time = FUNC_11();
 }
 FUNC_5(VAR_11);

 if (VAR_15->info.type == VAR_8)
  VAR_13 = (struct qeth_hdr *)VAR_10->data;
 else {
  if (VAR_15->info.type == VAR_7) {
   VAR_16 = VAR_10;
   VAR_21 = VAR_2;
   VAR_23 = VAR_2;
   VAR_13 = FUNC_2(VAR_9,
      VAR_4);
   if (!VAR_13)
    goto tx_drop;
   VAR_22++;
   FUNC_18(VAR_16);
   FUNC_13(VAR_15, VAR_13, VAR_16, VAR_17, VAR_18);
   VAR_13->hdr.l2.pkt_length = VAR_16->len;
   FUNC_4(((char *)VAR_13) + sizeof(struct qeth_hdr),
    FUNC_15(VAR_16), VAR_2);
  } else {

   VAR_16 = FUNC_17(VAR_10,
      sizeof(struct qeth_hdr));
   if (!VAR_16)
    goto tx_drop;
   VAR_13 = (struct qeth_hdr *)FUNC_16(VAR_16,
      sizeof(struct qeth_hdr));
   FUNC_19(VAR_16, sizeof(struct qeth_hdr));
   FUNC_13(VAR_15, VAR_13, VAR_16, VAR_17, VAR_18);
  }
 }

 VAR_14 = FUNC_9(VAR_15, (void *)VAR_13, VAR_16,
      VAR_22);
 if (!VAR_14) {
  if (VAR_21 >= 0)
   FUNC_3(VAR_9, VAR_13);
  goto tx_drop;
 }

 if (VAR_15->info.type != VAR_7)
  VAR_12 = FUNC_7(VAR_15, VAR_19, VAR_16, VAR_13,
      VAR_14);
 else
  VAR_12 = FUNC_8(VAR_15, VAR_19, VAR_16, VAR_13,
     VAR_14, VAR_21, VAR_23);
 if (!VAR_12) {
  VAR_15->stats.tx_packets++;
  VAR_15->stats.tx_bytes += VAR_20;
  if (VAR_16 != VAR_10)
   FUNC_0(VAR_10);
  VAR_12 = VAR_6;
 } else {
  if (VAR_21 >= 0)
   FUNC_3(VAR_9, VAR_13);

  if (VAR_12 == -VAR_1) {
   if (VAR_16 != VAR_10)
    FUNC_0(VAR_16);
   return VAR_5;
  } else
   goto tx_drop;
 }

 FUNC_6(VAR_11);
 if (VAR_15->options.performance_stats)
  VAR_15->perf_stats.outbound_time += FUNC_11() -
   VAR_15->perf_stats.outbound_start_time;
 return VAR_12;

tx_drop:
 VAR_15->stats.tx_dropped++;
 VAR_15->stats.tx_errors++;
 if ((VAR_16 != VAR_10) && VAR_16)
  FUNC_0(VAR_16);
 FUNC_0(VAR_10);
 FUNC_6(VAR_11);
 return VAR_6;
}
