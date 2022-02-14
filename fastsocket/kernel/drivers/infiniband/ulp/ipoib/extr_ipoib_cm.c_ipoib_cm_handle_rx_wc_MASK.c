
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {int pkt_type; struct net_device* dev; scalar_t__ len; scalar_t__ data; int protocol; } ;
struct TYPE_5__ {int rx_bytes; int rx_packets; int rx_dropped; } ;
struct net_device {TYPE_2__ stats; } ;
struct ipoib_header {int proto; } ;
struct TYPE_6__ {int rx_sge; int rx_wr; int passive_ids; int rx_reap_task; int rx_reap_list; struct ipoib_cm_rx_buf* srq_ring; int rx_drain_list; } ;
struct ipoib_dev_priv {TYPE_3__ cm; int ca; int lock; } ;
struct ipoib_cm_rx_buf {int * mapping; struct sk_buff* skb; } ;
struct ipoib_cm_rx {scalar_t__ state; int recv_count; int list; scalar_t__ jiffies; struct ipoib_cm_rx_buf* rx_ring; } ;
struct ib_wc {unsigned int wr_id; int byte_len; int slid; int vendor_err; int status; TYPE_1__* qp; } ;
struct TYPE_4__ {struct ipoib_cm_rx* qp_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_13 ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (int ,int ,int,int ) ;
 struct sk_buff* FUNC_4 (struct net_device*,struct ipoib_cm_rx_buf*,unsigned int,int,int *) ;
 int FUNC_5 (struct ipoib_dev_priv*,int,int *) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,struct ipoib_cm_rx*,int *,int ,unsigned int) ;
 int FUNC_8 (struct net_device*,unsigned int) ;
 int FUNC_9 (struct ipoib_dev_priv*) ;
 int FUNC_10 (struct ipoib_dev_priv*,char*,unsigned int,...) ;
 int FUNC_11 (struct ipoib_dev_priv*,char*,unsigned int,int ) ;
 unsigned int VAR_14 ;
 int FUNC_12 (struct ipoib_dev_priv*,char*,unsigned int,...) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,int *,int) ;
 scalar_t__ FUNC_16 (int,unsigned int) ;
 struct ipoib_dev_priv* FUNC_17 (struct net_device*) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (int ,int *) ;
 int FUNC_20 (struct sk_buff*,scalar_t__,int) ;
 int FUNC_21 (struct sk_buff*,int ) ;
 int FUNC_22 (struct sk_buff*,int) ;
 int FUNC_23 (struct sk_buff*,scalar_t__,unsigned int,struct sk_buff*) ;
 int FUNC_24 (struct sk_buff*,int) ;
 int FUNC_25 (struct sk_buff*) ;
 int FUNC_26 (int *,unsigned long) ;
 int FUNC_27 (int *,unsigned long) ;
 scalar_t__ FUNC_28 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_29 (int) ;

void FUNC_30(struct net_device *VAR_17, struct ib_wc *VAR_18)
{
 struct ipoib_dev_priv *VAR_19 = FUNC_17(VAR_17);
 struct ipoib_cm_rx_buf *VAR_20;
 unsigned int VAR_21 = VAR_18->wr_id & ~(VAR_10 | VAR_11);
 struct sk_buff *VAR_22, *VAR_23;
 struct ipoib_cm_rx *VAR_24;
 unsigned long VAR_25;
 u64 VAR_26[VAR_6];
 int VAR_27;
 int VAR_28;
 struct sk_buff *VAR_29;

 FUNC_11(VAR_19, "cm recv completion: id %d, status: %d\n",
         VAR_21, VAR_18->status);

 if (FUNC_29(VAR_21 >= VAR_14)) {
  if (VAR_21 == (VAR_4 & ~(VAR_10 | VAR_11))) {
   FUNC_26(&VAR_19->lock, VAR_25);
   FUNC_14(&VAR_19->cm.rx_drain_list, &VAR_19->cm.rx_reap_list);
   FUNC_9(VAR_19);
   FUNC_19(VAR_15, &VAR_19->cm.rx_reap_task);
   FUNC_27(&VAR_19->lock, VAR_25);
  } else
   FUNC_12(VAR_19, "cm recv completion event with wrid %d (> %d)\n",
       VAR_21, VAR_14);
  return;
 }

 VAR_24 = VAR_18->qp->qp_context;

 VAR_28 = FUNC_6(VAR_17);
 VAR_20 = VAR_28 ? VAR_19->cm.srq_ring : VAR_24->rx_ring;

 VAR_22 = VAR_20[VAR_21].skb;

 if (FUNC_29(VAR_18->status != VAR_1)) {
  FUNC_10(VAR_19, "cm recv error "
      "(status=%d, wrid=%d vend_err %x)\n",
      VAR_18->status, VAR_21, VAR_18->vendor_err);
  ++VAR_17->stats.rx_dropped;
  if (VAR_28)
   goto repost;
  else {
   if (!--VAR_24->recv_count) {
    FUNC_26(&VAR_19->lock, VAR_25);
    FUNC_13(&VAR_24->list, &VAR_19->cm.rx_reap_list);
    FUNC_27(&VAR_19->lock, VAR_25);
    FUNC_19(VAR_15, &VAR_19->cm.rx_reap_task);
   }
   return;
  }
 }

 if (FUNC_29(!(VAR_21 & VAR_7))) {
  if (VAR_24 && FUNC_28(VAR_16, VAR_24->jiffies + VAR_8)) {
   FUNC_26(&VAR_19->lock, VAR_25);
   VAR_24->jiffies = VAR_16;


   if (VAR_24->state == VAR_5)
    FUNC_13(&VAR_24->list, &VAR_19->cm.passive_ids);
   FUNC_27(&VAR_19->lock, VAR_25);
  }
 }

 if (VAR_18->byte_len < VAR_2) {
  int VAR_30 = VAR_18->byte_len;

  VAR_29 = FUNC_1(VAR_30 + 12);
  if (VAR_29) {
   FUNC_24(VAR_29, 12);
   FUNC_2(VAR_19->ca, VAR_20[VAR_21].mapping[0],
         VAR_30, VAR_0);
   FUNC_20(VAR_22, VAR_29->data, VAR_30);
   FUNC_3(VAR_19->ca, VAR_20[VAR_21].mapping[0],
            VAR_30, VAR_0);
   FUNC_22(VAR_29, VAR_30);
   VAR_22 = VAR_29;
   goto copied;
  }
 }

 VAR_27 = FUNC_0(VAR_18->byte_len - FUNC_16(VAR_18->byte_len,
           (unsigned)VAR_3)) / VAR_13;

 VAR_23 = FUNC_4(VAR_17, VAR_20, VAR_21, VAR_27, VAR_26);
 if (FUNC_29(!VAR_23)) {




  FUNC_10(VAR_19, "failed to allocate receive buffer %d\n", VAR_21);
  ++VAR_17->stats.rx_dropped;
  goto repost;
 }

 FUNC_5(VAR_19, VAR_27, VAR_20[VAR_21].mapping);
 FUNC_15(VAR_20[VAR_21].mapping, VAR_26, (VAR_27 + 1) * sizeof *VAR_26);

 FUNC_11(VAR_19, "received %d bytes, SLID 0x%04x\n",
         VAR_18->byte_len, VAR_18->slid);

 FUNC_23(VAR_22, VAR_3, VAR_18->byte_len, VAR_23);

copied:
 VAR_22->protocol = ((struct ipoib_header *) VAR_22->data)->proto;
 FUNC_25(VAR_22);
 FUNC_21(VAR_22, VAR_9);

 ++VAR_17->stats.rx_packets;
 VAR_17->stats.rx_bytes += VAR_22->len;

 VAR_22->dev = VAR_17;

 VAR_22->pkt_type = VAR_12;
 FUNC_18(VAR_22);

repost:
 if (VAR_28) {
  if (FUNC_29(FUNC_8(VAR_17, VAR_21)))
   FUNC_12(VAR_19, "ipoib_cm_post_receive_srq failed "
       "for buf %d\n", VAR_21);
 } else {
  if (FUNC_29(FUNC_7(VAR_17, VAR_24,
         &VAR_19->cm.rx_wr,
         VAR_19->cm.rx_sge,
         VAR_21))) {
   --VAR_24->recv_count;
   FUNC_12(VAR_19, "ipoib_cm_post_receive_nonsrq failed "
       "for buf %d\n", VAR_21);
  }
 }
}
