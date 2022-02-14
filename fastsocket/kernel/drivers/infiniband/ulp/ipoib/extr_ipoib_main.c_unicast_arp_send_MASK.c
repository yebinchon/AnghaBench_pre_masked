
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {int tx_dropped; } ;
struct net_device {TYPE_2__ stats; } ;
struct TYPE_3__ {int dlid; } ;
struct ipoib_path {int queue; scalar_t__ query; scalar_t__ ah; TYPE_1__ pathrec; int valid; } ;
struct ipoib_dev_priv {int lock; } ;
struct ipoib_cb {scalar_t__ hwaddr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct net_device*,struct ipoib_path*) ;
 struct ipoib_path* FUNC_2 (struct net_device*,scalar_t__) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct ipoib_dev_priv*,char*,int ) ;
 int FUNC_7 (struct net_device*,struct sk_buff*,scalar_t__,int ) ;
 struct ipoib_dev_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*,struct ipoib_path*) ;
 struct ipoib_path* FUNC_10 (struct net_device*,scalar_t__) ;
 scalar_t__ FUNC_11 (struct net_device*,struct ipoib_path*) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_15(struct sk_buff *VAR_1, struct net_device *VAR_2,
        struct ipoib_cb *VAR_3)
{
 struct ipoib_dev_priv *VAR_4 = FUNC_8(VAR_2);
 struct ipoib_path *VAR_5;
 unsigned long VAR_6;

 FUNC_13(&VAR_4->lock, VAR_6);

 VAR_5 = FUNC_2(VAR_2, VAR_3->hwaddr + 4);
 if (!VAR_5 || !VAR_5->valid) {
  int VAR_7 = 0;

  if (!VAR_5) {
   VAR_5 = FUNC_10(VAR_2, VAR_3->hwaddr + 4);
   VAR_7 = 1;
  }
  if (VAR_5) {
   FUNC_3(&VAR_5->queue, VAR_1);

   if (!VAR_5->query && FUNC_11(VAR_2, VAR_5)) {
    FUNC_14(&VAR_4->lock, VAR_6);
    if (VAR_7)
     FUNC_9(VAR_2, VAR_5);
    return;
   } else
    FUNC_1(VAR_2, VAR_5);
  } else {
   ++VAR_2->stats.tx_dropped;
   FUNC_5(VAR_1);
  }

  FUNC_14(&VAR_4->lock, VAR_6);
  return;
 }

 if (VAR_5->ah) {
  FUNC_6(VAR_4, "Send unicast ARP to %04x\n",
     FUNC_4(VAR_5->pathrec.dlid));

  FUNC_14(&VAR_4->lock, VAR_6);
  FUNC_7(VAR_2, VAR_1, VAR_5->ah, FUNC_0(VAR_3->hwaddr));
  return;
 } else if ((VAR_5->query || !FUNC_11(VAR_2, VAR_5)) &&
     FUNC_12(&VAR_5->queue) < VAR_0) {
  FUNC_3(&VAR_5->queue, VAR_1);
 } else {
  ++VAR_2->stats.tx_dropped;
  FUNC_5(VAR_1);
 }

 FUNC_14(&VAR_4->lock, VAR_6);
}
