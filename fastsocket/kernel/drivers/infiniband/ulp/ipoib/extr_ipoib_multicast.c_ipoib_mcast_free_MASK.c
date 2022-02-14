
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;
struct TYPE_5__ {int raw; } ;
struct TYPE_6__ {TYPE_2__ mgid; } ;
struct ipoib_mcast {int pkt_queue; scalar_t__ ah; TYPE_3__ mcmember; struct net_device* dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct ipoib_mcast*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct ipoib_mcast *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->dev;
 int VAR_2 = 0;

 FUNC_1(FUNC_5(VAR_1), "deleting multicast group %pI6\n",
   VAR_0->mcmember.mgid.raw);


 FUNC_2(VAR_1, VAR_0->mcmember.mgid.raw);

 if (VAR_0->ah)
  FUNC_3(VAR_0->ah);

 while (!FUNC_9(&VAR_0->pkt_queue)) {
  ++VAR_2;
  FUNC_0(FUNC_8(&VAR_0->pkt_queue));
 }

 FUNC_6(VAR_1);
 VAR_1->stats.tx_dropped += VAR_2;
 FUNC_7(VAR_1);

 FUNC_4(VAR_0);
}
