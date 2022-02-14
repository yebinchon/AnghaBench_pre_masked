
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tg3 {int phy_flags; int phy_addr; int lock; TYPE_1__* mdio_bus; } ;
struct phy_device {int dummy; } ;
struct net_device {int dummy; } ;
struct mii_ioctl_data {int phy_id; int reg_num; int val_in; int val_out; } ;
struct ifreq {int dummy; } ;
struct TYPE_2__ {struct phy_device** phy_map; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct tg3*,int,int,int *) ;
 int FUNC_1 (struct tg3*,int,int,int ) ;
 struct mii_ioctl_data* FUNC_2 (struct ifreq*) ;
 struct tg3* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct phy_device*,struct mii_ioctl_data*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct tg3*,int ) ;
 int FUNC_9 (struct net_device*,struct ifreq*,int) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_6, struct ifreq *VAR_7, int VAR_8)
{
 struct mii_ioctl_data *VAR_9 = FUNC_2(VAR_7);
 struct tg3 *VAR_10 = FUNC_3(VAR_6);
 int VAR_11;

 if (FUNC_8(VAR_10, VAR_5)) {
  struct phy_device *VAR_12;
  if (!(VAR_10->phy_flags & VAR_2))
   return -VAR_0;
  VAR_12 = VAR_10->mdio_bus->phy_map[VAR_4];
  return FUNC_5(VAR_12, VAR_9, VAR_8);
 }

 switch (VAR_8) {
 case 131:
  VAR_9->phy_id = VAR_10->phy_addr;


 case 130: {
  u32 VAR_13;

  if (VAR_10->phy_flags & VAR_3)
   break;

  if (!FUNC_4(VAR_6))
   return -VAR_0;

  FUNC_6(&VAR_10->lock);
  VAR_11 = FUNC_0(VAR_10, VAR_9->phy_id & 0x1f,
        VAR_9->reg_num & 0x1f, &VAR_13);
  FUNC_7(&VAR_10->lock);

  VAR_9->val_out = VAR_13;

  return VAR_11;
 }

 case 128:
  if (VAR_10->phy_flags & VAR_3)
   break;

  if (!FUNC_4(VAR_6))
   return -VAR_0;

  FUNC_6(&VAR_10->lock);
  VAR_11 = FUNC_1(VAR_10, VAR_9->phy_id & 0x1f,
         VAR_9->reg_num & 0x1f, VAR_9->val_in);
  FUNC_7(&VAR_10->lock);

  return VAR_11;

 case 129:
  return FUNC_9(VAR_6, VAR_7, VAR_8);

 default:

  break;
 }
 return -VAR_1;
}
