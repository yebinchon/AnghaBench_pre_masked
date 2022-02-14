
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {scalar_t__ len; int data; } ;
struct TYPE_3__ {int tx_errors; int tx_dropped; } ;
struct net_device {int trans_start; TYPE_1__ stats; } ;
struct ipoib_dev_priv {int tx_outstanding; int send_cq; int ca; } ;
struct ipoib_cm_tx_buf {int mapping; struct sk_buff* skb; } ;
struct ipoib_cm_tx {scalar_t__ mtu; int tx_head; TYPE_2__* qp; struct ipoib_cm_tx_buf* tx_ring; } ;
struct TYPE_4__ {int qp_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,scalar_t__,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct net_device*,struct sk_buff*,scalar_t__) ;
 int FUNC_6 (struct ipoib_dev_priv*,char*,int ) ;
 int FUNC_7 (struct ipoib_dev_priv*,char*,int,scalar_t__,int ) ;
 int FUNC_8 (int ,struct net_device*) ;
 int VAR_4 ;
 int FUNC_9 (struct ipoib_dev_priv*,char*,...) ;
 int VAR_5 ;
 struct ipoib_dev_priv* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct ipoib_dev_priv*,struct ipoib_cm_tx*,int,int ,scalar_t__) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*) ;
 scalar_t__ FUNC_15 (int) ;

void FUNC_16(struct net_device *VAR_6, struct sk_buff *VAR_7, struct ipoib_cm_tx *VAR_8)
{
 struct ipoib_dev_priv *VAR_9 = FUNC_10(VAR_6);
 struct ipoib_cm_tx_buf *VAR_10;
 u64 VAR_11;
 int VAR_12;

 if (FUNC_15(VAR_7->len > VAR_8->mtu)) {
  FUNC_9(VAR_9, "packet len %d (> %d) too long to send, dropping\n",
      VAR_7->len, VAR_8->mtu);
  ++VAR_6->stats.tx_dropped;
  ++VAR_6->stats.tx_errors;
  FUNC_5(VAR_6, VAR_7, VAR_8->mtu - VAR_3);
  return;
 }

 FUNC_7(VAR_9, "sending packet: head 0x%x length %d connection 0x%x\n",
         VAR_8->tx_head, VAR_7->len, VAR_8->qp->qp_num);
 VAR_10 = &VAR_8->tx_ring[VAR_8->tx_head & (VAR_4 - 1)];
 VAR_10->skb = VAR_7;
 VAR_11 = FUNC_1(VAR_9->ca, VAR_7->data, VAR_7->len, VAR_0);
 if (FUNC_15(FUNC_2(VAR_9->ca, VAR_11))) {
  ++VAR_6->stats.tx_errors;
  FUNC_0(VAR_7);
  return;
 }

 VAR_10->mapping = VAR_11;

 FUNC_14(VAR_7);
 FUNC_13(VAR_7);

 VAR_12 = FUNC_12(VAR_9, VAR_8, VAR_8->tx_head & (VAR_4 - 1),
         VAR_11, VAR_7->len);
 if (FUNC_15(VAR_12)) {
  FUNC_9(VAR_9, "post_send failed, error %d\n", VAR_12);
  ++VAR_6->stats.tx_errors;
  FUNC_3(VAR_9->ca, VAR_11, VAR_7->len, VAR_0);
  FUNC_0(VAR_7);
 } else {
  VAR_6->trans_start = VAR_5;
  ++VAR_8->tx_head;

  if (++VAR_9->tx_outstanding == VAR_4) {
   FUNC_6(VAR_9, "TX ring 0x%x full, stopping kernel net queue\n",
      VAR_8->qp->qp_num);
   FUNC_11(VAR_6);
   VAR_12 = FUNC_4(VAR_9->send_cq,
    VAR_1 | VAR_2);
   if (VAR_12 < 0)
    FUNC_9(VAR_9, "request notify on send CQ failed\n");
   else if (VAR_12)
    FUNC_8(VAR_9->send_cq, VAR_6);
  }
 }
}
