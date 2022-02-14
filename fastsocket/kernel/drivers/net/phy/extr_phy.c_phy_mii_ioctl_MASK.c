
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct phy_device {int advertising; TYPE_1__* drv; int speed; int autoneg; int duplex; int addr; } ;
struct mii_ioctl_data {int val_in; int const reg_num; int phy_id; int val_out; } ;
struct TYPE_2__ {int (* config_init ) (struct phy_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;





 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct phy_device*,int const) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*,int const,int) ;
 int FUNC_3 (struct phy_device*) ;

int FUNC_4(struct phy_device *VAR_12,
  struct mii_ioctl_data *VAR_13, int VAR_14)
{
 u16 VAR_15 = VAR_13->val_in;

 switch (VAR_14) {
 case 130:
  VAR_13->phy_id = VAR_12->addr;


 case 129:
  VAR_13->val_out = FUNC_0(VAR_12, VAR_13->reg_num);
  break;

 case 128:
  if (VAR_13->phy_id == VAR_12->addr) {
   switch(VAR_13->reg_num) {
   case 131:
    if ((VAR_15 & (VAR_4|VAR_2)) == 0)
     VAR_12->autoneg = VAR_0;
    else
     VAR_12->autoneg = VAR_1;
    if ((!VAR_12->autoneg) && (VAR_15 & VAR_3))
     VAR_12->duplex = VAR_7;
    else
     VAR_12->duplex = VAR_8;
    if ((!VAR_12->autoneg) &&
      (VAR_15 & VAR_6))
     VAR_12->speed = VAR_11;
    else if ((!VAR_12->autoneg) &&
      (VAR_15 & VAR_5))
     VAR_12->speed = VAR_10;
    break;
   case 132:
    VAR_12->advertising = VAR_15;
    break;
   default:

    break;
   }
  }

  FUNC_2(VAR_12, VAR_13->reg_num, VAR_15);

  if (VAR_13->reg_num == 131
    && VAR_15 & VAR_4
    && VAR_12->drv->config_init) {
   FUNC_1(VAR_12);
   VAR_12->drv->config_init(VAR_12);
  }
  break;

 default:
  return -VAR_9;
 }

 return 0;
}
