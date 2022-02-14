
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int tx_dropped; } ;
struct net_device {TYPE_3__ stats; } ;
struct TYPE_4__ {int raw; } ;
struct TYPE_5__ {TYPE_1__ mgid; } ;
struct ipoib_mcast {int flags; int pkt_queue; TYPE_2__ mcmember; int logcount; struct net_device* dev; } ;
struct ib_sa_multicast {int rec; struct ipoib_mcast* context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (struct ipoib_mcast*,int *) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int
FUNC_9(int VAR_2,
       struct ib_sa_multicast *VAR_3)
{
 struct ipoib_mcast *VAR_4 = VAR_3->context;
 struct net_device *VAR_5 = VAR_4->dev;


 if (VAR_2 == -VAR_0)
  return 0;

 if (!VAR_2)
  VAR_2 = FUNC_2(VAR_4, &VAR_3->rec);

 if (VAR_2) {
  if (VAR_4->logcount++ < 20)
   FUNC_1(FUNC_3(VAR_5), "multicast join failed for %pI6, status %d\n",
     VAR_4->mcmember.mgid.raw, VAR_2);


  FUNC_4(VAR_5);
  while (!FUNC_7(&VAR_4->pkt_queue)) {
   ++VAR_5->stats.tx_dropped;
   FUNC_0(FUNC_6(&VAR_4->pkt_queue));
  }
  FUNC_5(VAR_5);


  VAR_2 = FUNC_8(VAR_1,
         &VAR_4->flags);
 }
 return VAR_2;
}
