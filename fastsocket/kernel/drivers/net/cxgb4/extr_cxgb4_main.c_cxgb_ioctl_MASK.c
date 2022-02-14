
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct port_info {int mdio_addr; TYPE_1__* adapter; } ;
struct net_device {int dummy; } ;
struct mii_ioctl_data {int phy_id; int reg_num; int val_in; int val_out; } ;
struct ifreq {int ifr_data; } ;
struct TYPE_3__ {unsigned int fn; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct port_info* FUNC_3 (struct net_device*) ;
 int FUNC_4 (TYPE_1__*,unsigned int,int,int,int,int *) ;
 int FUNC_5 (TYPE_1__*,unsigned int,int,int,int,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2, struct ifreq *VAR_3, int VAR_4)
{
 unsigned int VAR_5;
 int VAR_6 = 0, VAR_7, VAR_8;
 struct port_info *VAR_9 = FUNC_3(VAR_2);
 struct mii_ioctl_data *VAR_10 = (struct mii_ioctl_data *)&VAR_3->ifr_data;

 switch (VAR_4) {
 case 130:
  if (VAR_9->mdio_addr < 0)
   return -VAR_1;
  VAR_10->phy_id = VAR_9->mdio_addr;
  break;
 case 129:
 case 128:
  if (FUNC_1(VAR_10->phy_id)) {
   VAR_7 = FUNC_2(VAR_10->phy_id);
   VAR_8 = FUNC_0(VAR_10->phy_id);
  } else if (VAR_10->phy_id < 32) {
   VAR_7 = VAR_10->phy_id;
   VAR_8 = 0;
   VAR_10->reg_num &= 0x1f;
  } else
   return -VAR_0;

  VAR_5 = VAR_9->adapter->fn;
  if (VAR_4 == 129)
   VAR_6 = FUNC_4(VAR_9->adapter, VAR_5, VAR_7, VAR_8,
      VAR_10->reg_num, &VAR_10->val_out);
  else
   VAR_6 = FUNC_5(VAR_9->adapter, VAR_5, VAR_7, VAR_8,
      VAR_10->reg_num, VAR_10->val_in);
  break;
 default:
  return -VAR_1;
 }
 return VAR_6;
}
