
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mii_ioctl_data {int dummy; } ;
struct ifreq {int ifr_data; } ;
struct fs_enet_private {int phydev; } ;


 int VAR_0 ;
 struct fs_enet_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,struct mii_ioctl_data*,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct fs_enet_private *VAR_4 = FUNC_0(VAR_1);
 struct mii_ioctl_data *VAR_5 = (struct mii_ioctl_data *)&VAR_2->ifr_data;

 if (!FUNC_1(VAR_1))
  return -VAR_0;

 return FUNC_2(VAR_4->phydev, VAR_5, VAR_3);
}
