
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {int dummy; } ;
struct net_device {int dummy; } ;
struct mii_ioctl_data {size_t phy_id; } ;
struct ifreq {int dummy; } ;
struct ethoc {struct phy_device* phy; TYPE_1__* mdio; } ;
struct TYPE_2__ {struct phy_device** phy_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 struct mii_ioctl_data* FUNC_0 (struct ifreq*) ;
 struct ethoc* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct phy_device*,struct mii_ioctl_data*,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_5, struct ifreq *VAR_6, int VAR_7)
{
 struct ethoc *VAR_8 = FUNC_1(VAR_5);
 struct mii_ioctl_data *VAR_9 = FUNC_0(VAR_6);
 struct phy_device *VAR_10 = ((void*)0);

 if (!FUNC_2(VAR_5))
  return -VAR_0;

 if (VAR_7 != VAR_4) {
  if (VAR_9->phy_id >= VAR_3)
   return -VAR_2;

  VAR_10 = VAR_8->mdio->phy_map[VAR_9->phy_id];
  if (!VAR_10)
   return -VAR_1;
 } else {
  VAR_10 = VAR_8->phy;
 }

 return FUNC_3(VAR_10, VAR_9, VAR_7);
}
