
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct ipoib_tx_buf {TYPE_2__* skb; } ;
struct ipoib_dev_priv {unsigned int tx_outstanding; int flags; int tx_tail; int ca; struct ipoib_tx_buf* tx_ring; } ;
struct ib_wc {unsigned int wr_id; int vendor_err; int status; } ;
struct TYPE_4__ {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct ipoib_dev_priv*,char*,unsigned int,int ) ;
 int FUNC_2 (int ,struct ipoib_tx_buf*) ;
 unsigned int VAR_3 ;
 int FUNC_3 (struct ipoib_dev_priv*,char*,unsigned int,unsigned int,...) ;
 struct ipoib_dev_priv* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_4, struct ib_wc *VAR_5)
{
 struct ipoib_dev_priv *VAR_6 = FUNC_4(VAR_4);
 unsigned int VAR_7 = VAR_5->wr_id;
 struct ipoib_tx_buf *VAR_8;

 FUNC_1(VAR_6, "send completion: id %d, status: %d\n",
         VAR_7, VAR_5->status);

 if (FUNC_8(VAR_7 >= VAR_3)) {
  FUNC_3(VAR_6, "send completion event with wrid %d (> %d)\n",
      VAR_7, VAR_3);
  return;
 }

 VAR_8 = &VAR_6->tx_ring[VAR_7];

 FUNC_2(VAR_6->ca, VAR_8);

 ++VAR_4->stats.tx_packets;
 VAR_4->stats.tx_bytes += VAR_8->skb->len;

 FUNC_0(VAR_8->skb);

 ++VAR_6->tx_tail;
 if (FUNC_8(--VAR_6->tx_outstanding == VAR_3 >> 1) &&
     FUNC_5(VAR_4) &&
     FUNC_7(VAR_2, &VAR_6->flags))
  FUNC_6(VAR_4);

 if (VAR_5->status != VAR_0 &&
     VAR_5->status != VAR_1)
  FUNC_3(VAR_6, "failed send event "
      "(status=%d, wrid=%d vend_err %x)\n",
      VAR_5->status, VAR_7, VAR_5->vendor_err);
}
