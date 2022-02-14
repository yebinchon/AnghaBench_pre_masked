
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {int tx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;
struct ipoib_neigh {scalar_t__ daddr; int queue; scalar_t__ ah; struct net_device* dev; } ;
struct TYPE_4__ {int flushed; int entries; } ;
struct ipoib_dev_priv {TYPE_2__ ntbl; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct sk_buff* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (struct ipoib_neigh*) ;
 int FUNC_7 (struct ipoib_dev_priv*,char*,int ,scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct ipoib_neigh*) ;
 struct ipoib_dev_priv* FUNC_10 (struct net_device*) ;
 scalar_t__ FUNC_11 (int ,int *) ;

void FUNC_12(struct ipoib_neigh *VAR_1)
{

 struct net_device *VAR_2 = VAR_1->dev;
 struct ipoib_dev_priv *VAR_3 = FUNC_10(VAR_2);
 struct sk_buff *VAR_4;
 if (VAR_1->ah)
  FUNC_8(VAR_1->ah);
 while ((VAR_4 = FUNC_1(&VAR_1->queue))) {
  ++VAR_2->stats.tx_dropped;
  FUNC_4(VAR_4);
 }
 if (FUNC_6(VAR_1))
  FUNC_5(FUNC_6(VAR_1));
 FUNC_7(FUNC_10(VAR_2),
    "neigh free for %06x %pI6\n",
    FUNC_0(VAR_1->daddr),
    VAR_1->daddr + 4);
 FUNC_9(VAR_1);
 if (FUNC_2(&VAR_3->ntbl.entries)) {
  if (FUNC_11(VAR_0, &VAR_3->flags))
   FUNC_3(&VAR_3->ntbl.flushed);
 }
}
