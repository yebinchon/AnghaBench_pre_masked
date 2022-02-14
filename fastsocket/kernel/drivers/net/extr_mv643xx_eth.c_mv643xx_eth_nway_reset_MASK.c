
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mv643xx_eth_private {int * phy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct mv643xx_eth_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1)
{
 struct mv643xx_eth_private *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->phy == ((void*)0))
  return -VAR_0;

 return FUNC_0(VAR_2->phy);
}
