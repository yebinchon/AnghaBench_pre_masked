
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {int mcast_task; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ipoib_dev_priv*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct ipoib_dev_priv* FUNC_6 (struct net_device*) ;

int FUNC_7(struct net_device *VAR_3, int VAR_4)
{
 struct ipoib_dev_priv *VAR_5 = FUNC_6(VAR_3);

 FUNC_3(VAR_5, "stopping multicast thread\n");

 FUNC_4(&VAR_2);
 FUNC_1(VAR_0, &VAR_5->flags);
 FUNC_0(&VAR_5->mcast_task);
 FUNC_5(&VAR_2);

 if (VAR_4)
  FUNC_2(VAR_1);

 return 0;
}
