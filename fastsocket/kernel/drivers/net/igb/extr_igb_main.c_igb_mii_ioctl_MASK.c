
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mii_ioctl_data {int reg_num; int val_out; int phy_id; } ;
struct TYPE_3__ {scalar_t__ media_type; int addr; } ;
struct TYPE_4__ {TYPE_1__ phy; } ;
struct igb_adapter {TYPE_2__ hw; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ VAR_2 ;
 struct mii_ioctl_data* FUNC_0 (struct ifreq*) ;
 int FUNC_1 (TYPE_2__*,int,int *) ;
 struct igb_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, struct ifreq *VAR_4, int VAR_5)
{
 struct igb_adapter *VAR_6 = FUNC_2(VAR_3);
 struct mii_ioctl_data *VAR_7 = FUNC_0(VAR_4);

 if (VAR_6->hw.phy.media_type != VAR_2)
  return -VAR_1;

 switch (VAR_5) {
 case 130:
  VAR_7->phy_id = VAR_6->hw.phy.addr;
  break;
 case 129:
  if (FUNC_1(&VAR_6->hw, VAR_7->reg_num & 0x1F,
                       &VAR_7->val_out))
   return -VAR_0;
  break;
 case 128:
 default:
  return -VAR_1;
 }
 return 0;
}
