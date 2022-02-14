
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


struct TYPE_11__ {scalar_t__ hlen; int msscof; int ti; int addr; int tci; scalar_t__ om; } ;
union Vmxnet3_GenericDesc {void** dword; TYPE_4__ txd; } ;
typedef scalar_t__ u32 ;
struct TYPE_8__ {int drop_total; int drop_oversized_hdr; int drop_hdr_inspect_err; int tx_ring_full; int linearized; int drop_too_many_frags; int copy_skb_header; int drop_tso; } ;
struct TYPE_12__ {int next2fill; union Vmxnet3_GenericDesc* base; int next2comp; } ;
struct vmxnet3_tx_queue {int qid; TYPE_1__ stats; int tx_lock; TYPE_5__ tx_ring; TYPE_3__* shared; } ;
struct vmxnet3_tx_ctx {int ipv4; int mss; scalar_t__ copy_size; scalar_t__ eth_ip_hdr_size; scalar_t__ l4_hdr_size; union Vmxnet3_GenericDesc* sop_txd; TYPE_2__* eop_txd; } ;
struct vmxnet3_adapter {TYPE_7__* netdev; int pdev; } ;
struct sk_buff {scalar_t__ protocol; scalar_t__ ip_summed; scalar_t__ csum_offset; int len; } ;
struct net_device {int dummy; } ;
struct Vmxnet3_TxDesc {int dummy; } ;
struct TYPE_14__ {int name; } ;
struct TYPE_13__ {int gso_size; } ;
struct TYPE_10__ {void* txNumDeferred; void* txThreshold; } ;
struct TYPE_9__ {void** dword; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct vmxnet3_adapter*,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (void**,int) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_7__*,char*,scalar_t__,int ,int,...) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 scalar_t__ FUNC_13 (struct sk_buff*) ;
 TYPE_6__* FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;
 scalar_t__ FUNC_17 (struct sk_buff*) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (struct sk_buff*) ;
 scalar_t__ FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (struct Vmxnet3_TxDesc*,struct Vmxnet3_TxDesc*) ;
 scalar_t__ FUNC_22 (TYPE_5__*) ;
 int FUNC_23 (struct sk_buff*,struct vmxnet3_tx_ctx*,struct vmxnet3_tx_queue*,int ,struct vmxnet3_adapter*) ;
 int FUNC_24 (struct sk_buff*,struct vmxnet3_tx_queue*,struct vmxnet3_tx_ctx*,struct vmxnet3_adapter*) ;
 int FUNC_25 (struct sk_buff*,struct vmxnet3_tx_ctx*) ;
 int FUNC_26 (struct vmxnet3_tx_queue*,struct vmxnet3_adapter*) ;

__attribute__((used)) static int
FUNC_27(struct sk_buff *VAR_14, struct vmxnet3_tx_queue *VAR_15,
  struct vmxnet3_adapter *VAR_16, struct net_device *VAR_17)
{
 int VAR_18;
 u32 VAR_19;
 unsigned long VAR_20;
 struct vmxnet3_tx_ctx VAR_21;
 union Vmxnet3_GenericDesc *VAR_22;





 VAR_19 = FUNC_17(VAR_14);

 VAR_21.ipv4 = (VAR_14->protocol == FUNC_3(VAR_1));

 VAR_21.mss = FUNC_14(VAR_14)->gso_size;
 if (VAR_21.mss) {
  if (FUNC_11(VAR_14)) {
   if (FUNC_18(FUNC_10(VAR_14, 0, 0,
            VAR_2) != 0)) {
    VAR_15->stats.drop_tso++;
    goto drop_pkt;
   }
   VAR_15->stats.copy_skb_header++;
  }
  FUNC_25(VAR_14, &VAR_21);
 } else {
  if (FUNC_18(VAR_19 > VAR_6)) {




   if (FUNC_13(VAR_14) != 0) {
    VAR_15->stats.drop_too_many_frags++;
    goto drop_pkt;
   }
   VAR_15->stats.linearized++;


   VAR_19 = FUNC_1(FUNC_12(VAR_14)) + 1;
  }
 }

 FUNC_15(&VAR_15->tx_lock, VAR_20);

 if (VAR_19 > FUNC_22(&VAR_15->tx_ring)) {
  VAR_15->stats.tx_ring_full++;
  FUNC_9(VAR_16->netdev,
   "tx queue stopped on %s, next2comp %u"
   " next2fill %u\n", VAR_16->netdev->name,
   VAR_15->tx_ring.next2comp, VAR_15->tx_ring.next2fill);

  FUNC_26(VAR_15, VAR_16);
  FUNC_16(&VAR_15->tx_lock, VAR_20);
  return VAR_3;
 }


 VAR_18 = FUNC_24(VAR_14, VAR_15, &VAR_21, VAR_16);
 if (VAR_18 >= 0) {
  FUNC_0(VAR_18 <= 0 && VAR_21.copy_size != 0);

  if (VAR_21.mss) {
   if (FUNC_18(VAR_21.eth_ip_hdr_size + VAR_21.l4_hdr_size >
         VAR_7)) {
    goto hdr_too_big;
   }
  } else {
   if (VAR_14->ip_summed == VAR_0) {
    if (FUNC_18(VAR_21.eth_ip_hdr_size +
          VAR_14->csum_offset >
          VAR_5)) {
     goto hdr_too_big;
    }
   }
  }
 } else {
  VAR_15->stats.drop_hdr_inspect_err++;
  goto unlock_drop_pkt;
 }


 FUNC_23(VAR_14, &VAR_21, VAR_15, VAR_16->pdev, VAR_16);


 VAR_21.eop_txd->dword[3] = FUNC_4(VAR_11 | VAR_12);







 VAR_22 = VAR_21.sop_txd;

 if (VAR_21.mss) {
  VAR_22->txd.hlen = VAR_21.eth_ip_hdr_size + VAR_21.l4_hdr_size;
  VAR_22->txd.om = VAR_9;
  VAR_22->txd.msscof = VAR_21.mss;
  FUNC_6(&VAR_15->shared->txNumDeferred, (VAR_14->len -
        VAR_22->txd.hlen + VAR_21.mss - 1) / VAR_21.mss);
 } else {
  if (VAR_14->ip_summed == VAR_0) {
   VAR_22->txd.hlen = VAR_21.eth_ip_hdr_size;
   VAR_22->txd.om = VAR_8;
   VAR_22->txd.msscof = VAR_21.eth_ip_hdr_size +
         VAR_14->csum_offset;
  } else {
   VAR_22->txd.om = 0;
   VAR_22->txd.msscof = 0;
  }
  FUNC_6(&VAR_15->shared->txNumDeferred, 1);
 }

 if (FUNC_20(VAR_14)) {
  VAR_22->txd.ti = 1;
  VAR_22->txd.tci = FUNC_19(VAR_14);
 }


 VAR_22->dword[2] = FUNC_4(FUNC_7(VAR_22->dword[2]) ^
        VAR_13);
 FUNC_9(VAR_16->netdev,
  "txd[%u]: SOP 0x%Lx 0x%x 0x%x\n",
  (u32)(VAR_21.sop_txd -
  VAR_15->tx_ring.base), FUNC_8(VAR_22->txd.addr),
  FUNC_7(VAR_22->dword[2]), FUNC_7(VAR_22->dword[3]));

 FUNC_16(&VAR_15->tx_lock, VAR_20);

 if (FUNC_7(VAR_15->shared->txNumDeferred) >=
     FUNC_7(VAR_15->shared->txThreshold)) {
  VAR_15->shared->txNumDeferred = 0;
  FUNC_2(VAR_16,
           VAR_10 + VAR_15->qid * 8,
           VAR_15->tx_ring.next2fill);
 }

 return VAR_4;

hdr_too_big:
 VAR_15->stats.drop_oversized_hdr++;
unlock_drop_pkt:
 FUNC_16(&VAR_15->tx_lock, VAR_20);
drop_pkt:
 VAR_15->stats.drop_total++;
 FUNC_5(VAR_14);
 return VAR_4;
}
