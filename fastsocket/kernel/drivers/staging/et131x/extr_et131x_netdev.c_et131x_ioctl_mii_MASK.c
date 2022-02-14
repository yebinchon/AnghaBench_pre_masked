
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mii_ioctl_data {int val_in; int reg_num; int val_out; int phy_id; } ;
struct ifreq {int dummy; } ;
struct TYPE_2__ {int xcvr_addr; } ;
struct et131x_adapter {TYPE_1__ Stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct et131x_adapter*,int ,int *) ;
 int FUNC_1 (struct et131x_adapter*,int ,int ) ;



 int FUNC_2 (int ) ;
 struct mii_ioctl_data* FUNC_3 (struct ifreq*) ;
 struct et131x_adapter* FUNC_4 (struct net_device*) ;

int FUNC_5(struct net_device *VAR_3, struct ifreq *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 struct et131x_adapter *VAR_7 = FUNC_4(VAR_3);
 struct mii_ioctl_data *VAR_8 = FUNC_3(VAR_4);

 switch (VAR_5) {
 case 130:
  VAR_8->phy_id = VAR_7->Stats.xcvr_addr;
  break;

 case 129:
  if (!FUNC_2(VAR_0))
   VAR_6 = -VAR_2;
  else
   VAR_6 = FUNC_0(VAR_7,
     VAR_8->reg_num, &VAR_8->val_out);
  break;

 case 128:
  if (!FUNC_2(VAR_0))
   VAR_6 = -VAR_2;
  else
   VAR_6 = FUNC_1(VAR_7, VAR_8->reg_num,
      VAR_8->val_in);
  break;

 default:
  VAR_6 = -VAR_1;
 }
 return VAR_6;
}
