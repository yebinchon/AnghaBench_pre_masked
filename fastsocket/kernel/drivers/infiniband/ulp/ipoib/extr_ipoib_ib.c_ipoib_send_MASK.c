
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ len; scalar_t__ ip_summed; void* data; } ;
struct TYPE_4__ {int tx_errors; int tx_dropped; } ;
struct net_device {int trans_start; TYPE_2__ stats; } ;
struct ipoib_tx_buf {struct sk_buff* skb; } ;
struct TYPE_3__ {int send_flags; } ;
struct ipoib_dev_priv {scalar_t__ mcast_mtu; int tx_head; int tx_outstanding; int ca; int send_cq; TYPE_1__ tx_wr; struct ipoib_tx_buf* tx_ring; } ;
struct ipoib_ah {int last_send; int ah; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct net_device*,struct sk_buff*,scalar_t__) ;
 int FUNC_3 (struct ipoib_dev_priv*,char*) ;
 int FUNC_4 (struct ipoib_dev_priv*,char*,scalar_t__,struct ipoib_ah*,int ) ;
 int FUNC_5 (int ,struct ipoib_tx_buf*) ;
 int FUNC_6 (int ,struct ipoib_tx_buf*) ;
 int VAR_5 ;
 int FUNC_7 (struct ipoib_dev_priv*,char*,...) ;
 int VAR_6 ;
 struct ipoib_dev_priv* FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 scalar_t__ FUNC_12 (struct ipoib_dev_priv*) ;
 int FUNC_13 (struct ipoib_dev_priv*,int,int ,int ,struct ipoib_tx_buf*,void*,int) ;
 int FUNC_14 (struct sk_buff*) ;
 scalar_t__ FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*,int) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*) ;
 scalar_t__ FUNC_20 (int) ;

void FUNC_21(struct net_device *VAR_7, struct sk_buff *VAR_8,
  struct ipoib_ah *VAR_9, u32 VAR_10)
{
 struct ipoib_dev_priv *VAR_11 = FUNC_8(VAR_7);
 struct ipoib_tx_buf *VAR_12;
 int VAR_13, VAR_14;
 void *VAR_15;

 if (FUNC_15(VAR_8)) {
  VAR_13 = FUNC_18(VAR_8) + FUNC_19(VAR_8);
  VAR_15 = VAR_8->data;
  if (FUNC_20(!FUNC_17(VAR_8, VAR_13))) {
   FUNC_7(VAR_11, "linear data too small\n");
   ++VAR_7->stats.tx_dropped;
   ++VAR_7->stats.tx_errors;
   FUNC_0(VAR_8);
   return;
  }
 } else {
  if (FUNC_20(VAR_8->len > VAR_11->mcast_mtu + VAR_3)) {
   FUNC_7(VAR_11, "packet len %d (> %d) too long to send, dropping\n",
       VAR_8->len, VAR_11->mcast_mtu + VAR_3);
   ++VAR_7->stats.tx_dropped;
   ++VAR_7->stats.tx_errors;
   FUNC_2(VAR_7, VAR_8, VAR_11->mcast_mtu);
   return;
  }
  VAR_15 = ((void*)0);
  VAR_13 = 0;
 }

 FUNC_4(VAR_11, "sending packet, length=%d address=%p qpn=0x%06x\n",
         VAR_8->len, VAR_9, VAR_10);
 VAR_12 = &VAR_11->tx_ring[VAR_11->tx_head & (VAR_5 - 1)];
 VAR_12->skb = VAR_8;
 if (FUNC_20(FUNC_5(VAR_11->ca, VAR_12))) {
  ++VAR_7->stats.tx_errors;
  FUNC_0(VAR_8);
  return;
 }

 if (VAR_8->ip_summed == VAR_0)
  VAR_11->tx_wr.send_flags |= VAR_2;
 else
  VAR_11->tx_wr.send_flags &= ~VAR_2;

 if (++VAR_11->tx_outstanding == VAR_5) {
  FUNC_3(VAR_11, "TX ring full, stopping kernel net queue\n");
  if (FUNC_1(VAR_11->send_cq, VAR_1))
   FUNC_7(VAR_11, "request notify on send CQ failed\n");
  FUNC_10(VAR_7);
 }

 FUNC_16(VAR_8);
 FUNC_14(VAR_8);

 VAR_14 = FUNC_13(VAR_11, VAR_11->tx_head & (VAR_5 - 1),
         VAR_9->ah, VAR_10, VAR_12, VAR_15, VAR_13);
 if (FUNC_20(VAR_14)) {
  FUNC_7(VAR_11, "post_send failed, error %d\n", VAR_14);
  ++VAR_7->stats.tx_errors;
  --VAR_11->tx_outstanding;
  FUNC_6(VAR_11->ca, VAR_12);
  FUNC_0(VAR_8);
  if (FUNC_9(VAR_7))
   FUNC_11(VAR_7);
 } else {
  VAR_7->trans_start = VAR_6;

  VAR_9->last_send = VAR_11->tx_head;
  ++VAR_11->tx_head;
 }

 if (FUNC_20(VAR_11->tx_outstanding > VAR_4))
  while (FUNC_12(VAR_11))
   ;
}
