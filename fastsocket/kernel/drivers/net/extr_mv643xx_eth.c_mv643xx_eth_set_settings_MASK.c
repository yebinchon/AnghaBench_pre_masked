
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mv643xx_eth_private {int * phy; } ;
struct ethtool_cmd {int advertising; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mv643xx_eth_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,struct ethtool_cmd*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_2, struct ethtool_cmd *VAR_3)
{
 struct mv643xx_eth_private *VAR_4 = FUNC_0(VAR_2);

 if (VAR_4->phy == ((void*)0))
  return -VAR_1;




 VAR_3->advertising &= ~VAR_0;

 return FUNC_1(VAR_4->phy, VAR_3);
}
