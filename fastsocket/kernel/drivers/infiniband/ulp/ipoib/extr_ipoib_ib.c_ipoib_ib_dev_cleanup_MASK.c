
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {int dummy; } ;


 int FUNC_0 (struct ipoib_dev_priv*,char*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*) ;
 struct ipoib_dev_priv* FUNC_4 (struct net_device*) ;

void FUNC_5(struct net_device *VAR_0)
{
 struct ipoib_dev_priv *VAR_1 = FUNC_4(VAR_0);

 FUNC_0(VAR_1, "cleaning up ib_dev\n");

 FUNC_2(VAR_0, 1);
 FUNC_1(VAR_0);

 FUNC_3(VAR_0);
}
