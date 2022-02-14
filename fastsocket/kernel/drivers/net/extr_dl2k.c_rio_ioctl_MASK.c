
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_private {int phy_addr; } ;
struct net_device {int dummy; } ;
struct mii_data {int phy_id; int val_in; int reg_num; int val_out; } ;
struct ifreq {int ifr_ifru; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,int,int ) ;
 int FUNC_2 (struct net_device*,int,int ,int ) ;
 struct netdev_private* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int
FUNC_4 (struct net_device *VAR_3, struct ifreq *VAR_4, int VAR_5)
{
 int VAR_6;
 struct netdev_private *VAR_7 = FUNC_3(VAR_3);
 struct mii_data *VAR_8 = (struct mii_data *) &VAR_4->ifr_ifru;

 VAR_6 = VAR_7->phy_addr;
 switch (VAR_5) {
 case 131:
  break;
 case 130:
  VAR_8->phy_id = VAR_6;
  break;
 case 129:
  VAR_8->val_out = FUNC_1 (VAR_3, VAR_6, VAR_8->reg_num);
  break;
 case 128:
  if (!FUNC_0(VAR_0))
   return -VAR_2;
  FUNC_2 (VAR_3, VAR_6, VAR_8->reg_num, VAR_8->val_in);
  break;
 default:
  return -VAR_1;
 }
 return 0;
}
