
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {int pkey_poll_task; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct ipoib_dev_priv* FUNC_4 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int ,int *) ;

int FUNC_7(struct net_device *VAR_5)
{
 struct ipoib_dev_priv *VAR_6 = FUNC_4(VAR_5);



 FUNC_1(VAR_5);


 if (!FUNC_6(VAR_1, &VAR_6->flags)) {
  FUNC_2(&VAR_4);
  FUNC_0(VAR_2, &VAR_6->flags);
  FUNC_5(VAR_3,
       &VAR_6->pkey_poll_task,
       VAR_0);
  FUNC_3(&VAR_4);
  return 1;
 }

 return 0;
}
