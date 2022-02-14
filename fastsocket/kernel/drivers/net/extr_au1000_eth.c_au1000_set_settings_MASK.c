
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_cmd {int dummy; } ;
struct au1000_private {scalar_t__ phy_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct au1000_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__,struct ethtool_cmd*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, struct ethtool_cmd *VAR_4)
{
 struct au1000_private *VAR_5 = FUNC_1(VAR_3);

 if (!FUNC_0(VAR_0))
  return -VAR_2;

 if (VAR_5->phy_dev)
  return FUNC_2(VAR_5->phy_dev, VAR_4);

 return -VAR_1;
}
