
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdrv_private {int* phys; int lock; } ;
struct net_device {int dummy; } ;
struct mii_ioctl_data {int phy_id; int reg_num; int val_in; int val_out; } ;
struct ifreq {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;



 struct mii_ioctl_data* FUNC_1 (struct ifreq*) ;
 int FUNC_2 (struct net_device*,int,int) ;
 int FUNC_3 (struct net_device*,int,int,int ) ;
 struct netdrv_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7 (struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct netdrv_private *VAR_4 = FUNC_4(VAR_1);
 struct mii_ioctl_data *VAR_5 = FUNC_1(VAR_2);
 unsigned long VAR_6;
 int VAR_7 = 0;

 FUNC_0 ("ENTER\n");

 switch (VAR_3) {
 case 130:
  VAR_5->phy_id = VAR_4->phys[0] & 0x3f;


 case 129:
  FUNC_5 (&VAR_4->lock, VAR_6);
  VAR_5->val_out = FUNC_2 (VAR_1, VAR_5->phy_id & 0x1f, VAR_5->reg_num & 0x1f);
  FUNC_6 (&VAR_4->lock, VAR_6);
  break;

 case 128:
  FUNC_5 (&VAR_4->lock, VAR_6);
  FUNC_3 (VAR_1, VAR_5->phy_id & 0x1f, VAR_5->reg_num & 0x1f, VAR_5->val_in);
  FUNC_6 (&VAR_4->lock, VAR_6);
  break;

 default:
  VAR_7 = -VAR_0;
  break;
 }

 FUNC_0 ("EXIT, returning %d\n", VAR_7);
 return VAR_7;
}
