
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fs_enet_private {int phydev; } ;
struct ethtool_cmd {int dummy; } ;


 int VAR_0 ;
 struct fs_enet_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct ethtool_cmd*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, struct ethtool_cmd *VAR_2)
{
 struct fs_enet_private *VAR_3 = FUNC_0(VAR_1);

 if (!VAR_3->phydev)
  return -VAR_0;

 return FUNC_1(VAR_3->phydev, VAR_2);
}
