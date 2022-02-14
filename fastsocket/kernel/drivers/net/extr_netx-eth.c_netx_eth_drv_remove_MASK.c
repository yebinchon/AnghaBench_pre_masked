
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct netx_eth_priv {int id; int xc; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct net_device* FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 struct netx_eth_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct platform_device*,int *) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_1(&VAR_0->dev);
 struct netx_eth_priv *VAR_2 = FUNC_4(VAR_1);

 FUNC_6(VAR_0, ((void*)0));

 FUNC_7(VAR_1);
 FUNC_8(VAR_2->xc);
 FUNC_3(VAR_2->xc);
 FUNC_2(VAR_1);
 FUNC_5(FUNC_0(VAR_2->id));

 return 0;
}
