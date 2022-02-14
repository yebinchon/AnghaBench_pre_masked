
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipoib_dev_priv*,char*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct ipoib_dev_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;

int FUNC_6(struct net_device *VAR_2)
{
 struct ipoib_dev_priv *VAR_3 = FUNC_3(VAR_2);

 FUNC_2(VAR_2);

 if (!FUNC_5(VAR_1, &VAR_3->flags)) {
  FUNC_0(VAR_3, "PKEY is not assigned.\n");
  return 0;
 }

 FUNC_4(VAR_0, &VAR_3->flags);

 return FUNC_1(VAR_2);
}
