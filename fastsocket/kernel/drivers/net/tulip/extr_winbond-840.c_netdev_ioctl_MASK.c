
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_private {int* phys; int lock; } ;
struct net_device {int dummy; } ;
struct mii_ioctl_data {int phy_id; int reg_num; int val_in; int val_out; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;



 struct mii_ioctl_data* FUNC_0 (struct ifreq*) ;
 int FUNC_1 (struct net_device*,int,int) ;
 int FUNC_2 (struct net_device*,int,int,int ) ;
 struct netdev_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct mii_ioctl_data *VAR_4 = FUNC_0(VAR_2);
 struct netdev_private *VAR_5 = FUNC_3(VAR_1);

 switch(VAR_3) {
 case 130:
  VAR_4->phy_id = ((struct netdev_private *)FUNC_3(VAR_1))->phys[0] & 0x1f;


 case 129:
  FUNC_4(&VAR_5->lock);
  VAR_4->val_out = FUNC_1(VAR_1, VAR_4->phy_id & 0x1f, VAR_4->reg_num & 0x1f);
  FUNC_5(&VAR_5->lock);
  return 0;

 case 128:
  FUNC_4(&VAR_5->lock);
  FUNC_2(VAR_1, VAR_4->phy_id & 0x1f, VAR_4->reg_num & 0x1f, VAR_4->val_in);
  FUNC_5(&VAR_5->lock);
  return 0;
 default:
  return -VAR_0;
 }
}
