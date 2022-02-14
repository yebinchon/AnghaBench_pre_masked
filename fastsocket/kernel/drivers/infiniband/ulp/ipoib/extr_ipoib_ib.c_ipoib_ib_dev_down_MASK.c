
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {int pkey_poll_task; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ipoib_dev_priv*,char*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,int) ;
 int VAR_3 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct ipoib_dev_priv* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int *) ;

int FUNC_13(struct net_device *VAR_5, int VAR_6)
{
 struct ipoib_dev_priv *VAR_7 = FUNC_9(VAR_5);

 FUNC_3(VAR_7, "downing ib_dev\n");

 FUNC_1(VAR_0, &VAR_7->flags);
 FUNC_10(VAR_5);


 if (!FUNC_12(VAR_1, &VAR_7->flags)) {
  FUNC_7(&VAR_4);
  FUNC_11(VAR_2, &VAR_7->flags);
  FUNC_0(&VAR_7->pkey_poll_task);
  FUNC_8(&VAR_4);
  if (VAR_6)
   FUNC_2(VAR_3);
 }

 FUNC_6(VAR_5, VAR_6);
 FUNC_5(VAR_5);

 FUNC_4(VAR_5);

 return 0;
}
