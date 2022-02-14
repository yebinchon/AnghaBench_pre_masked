
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int raw; } ;
struct TYPE_4__ {TYPE_1__ mgid; } ;
struct ipoib_mcast {int backoff; int flags; TYPE_2__ mcmember; int logcount; struct net_device* dev; } ;
struct ipoib_dev_priv {int lock; int mcast_task; int flags; int carrier_on_task; struct ipoib_mcast* broadcast; } ;
struct ib_sa_multicast {int rec; struct ipoib_mcast* context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ipoib_dev_priv*,char*,int ,int) ;
 int FUNC_1 (struct ipoib_mcast*,int *) ;
 int FUNC_2 (struct ipoib_dev_priv*,char*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct ipoib_dev_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,int *,int) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;

__attribute__((used)) static int FUNC_12(int VAR_9,
         struct ib_sa_multicast *VAR_10)
{
 struct ipoib_mcast *VAR_11 = VAR_10->context;
 struct net_device *VAR_12 = VAR_11->dev;
 struct ipoib_dev_priv *VAR_13 = FUNC_5(VAR_12);

 FUNC_0(VAR_13, "join completion for %pI6 (status %d)\n",
   VAR_11->mcmember.mgid.raw, VAR_9);


 if (VAR_9 == -VAR_1)
  return 0;

 if (!VAR_9)
  VAR_9 = FUNC_1(VAR_11, &VAR_10->rec);

 if (!VAR_9) {
  VAR_11->backoff = 1;
  FUNC_3(&VAR_8);
  if (FUNC_11(VAR_6, &VAR_13->flags))
   FUNC_6(VAR_7,
        &VAR_13->mcast_task, 0);
  FUNC_4(&VAR_8);





  if (VAR_11 == VAR_13->broadcast)
   FUNC_7(VAR_7, &VAR_13->carrier_on_task);

  return 0;
 }

 if (VAR_11->logcount++ < 20) {
  if (VAR_9 == -VAR_2 || VAR_9 == -VAR_0) {
   FUNC_0(VAR_13, "multicast join failed for %pI6, status %d\n",
     VAR_11->mcmember.mgid.raw, VAR_9);
  } else {
   FUNC_2(VAR_13, "multicast join failed for %pI6, status %d\n",
       VAR_11->mcmember.mgid.raw, VAR_9);
  }
 }

 VAR_11->backoff *= 2;
 if (VAR_11->backoff > VAR_4)
  VAR_11->backoff = VAR_4;


 VAR_9 = FUNC_10(VAR_5, &VAR_11->flags);

 FUNC_3(&VAR_8);
 FUNC_8(&VAR_13->lock);
 if (FUNC_11(VAR_6, &VAR_13->flags))
  FUNC_6(VAR_7, &VAR_13->mcast_task,
       VAR_11->backoff * VAR_3);
 FUNC_9(&VAR_13->lock);
 FUNC_4(&VAR_8);

 return VAR_9;
}
