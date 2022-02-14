
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ethtool_eee {int dummy; } ;
struct tg3 {int phy_flags; struct ethtool_eee eee; int dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tg3* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, struct ethtool_eee *VAR_3)
{
 struct tg3 *VAR_4 = FUNC_0(VAR_2);

 if (!(VAR_4->phy_flags & VAR_1)) {
  FUNC_1(VAR_4->dev,
       "Board does not support EEE!\n");
  return -VAR_0;
 }

 *VAR_3 = VAR_4->eee;
 return 0;
}
