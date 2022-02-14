
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucc_geth_private {int dummy; } ;
struct device {int dummy; } ;
struct of_device {struct device dev; } ;
struct net_device {int dummy; } ;


 struct net_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int *) ;
 int FUNC_2 (struct net_device*) ;
 struct ucc_geth_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct ucc_geth_private*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct of_device* VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct net_device *VAR_2 = FUNC_0(VAR_1);
 struct ucc_geth_private *VAR_3 = FUNC_3(VAR_2);

 FUNC_5(VAR_2);
 FUNC_2(VAR_2);
 FUNC_4(VAR_3);
 FUNC_1(VAR_1, ((void*)0));

 return 0;
}
