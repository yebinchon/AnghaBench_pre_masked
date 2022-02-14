
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucc_geth_private {int phydev; } ;
struct net_device {int dummy; } ;


 struct ucc_geth_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0)
{
 struct ucc_geth_private *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1->phydev);
}
