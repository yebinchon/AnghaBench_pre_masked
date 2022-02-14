
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {int mcast_task; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipoib_dev_priv*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct ipoib_dev_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ,int *) ;

int FUNC_6(struct net_device *VAR_3)
{
 struct ipoib_dev_priv *VAR_4 = FUNC_3(VAR_3);

 FUNC_0(VAR_4, "starting multicast thread\n");

 FUNC_1(&VAR_2);
 if (!FUNC_5(VAR_0, &VAR_4->flags))
  FUNC_4(VAR_1, &VAR_4->mcast_task, 0);
 FUNC_2(&VAR_2);

 return 0;
}
