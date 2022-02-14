
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct mii_ioctl_data {int reg_num; int val_in; int val_out; int phy_id; } ;
struct ifreq {int dummy; } ;
struct bnx2 {int phy_flags; int phy_lock; int phy_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct bnx2*,int,int *) ;
 int FUNC_1 (struct bnx2*,int,int ) ;
 struct mii_ioctl_data* FUNC_2 (struct ifreq*) ;
 struct bnx2* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct net_device *VAR_3, struct ifreq *VAR_4, int VAR_5)
{
 struct mii_ioctl_data *VAR_6 = FUNC_2(VAR_4);
 struct bnx2 *VAR_7 = FUNC_3(VAR_3);
 int VAR_8;

 switch(VAR_5) {
 case 130:
  VAR_6->phy_id = VAR_7->phy_addr;


 case 129: {
  u32 VAR_9;

  if (VAR_7->phy_flags & VAR_0)
   return -VAR_2;

  if (!FUNC_4(VAR_3))
   return -VAR_1;

  FUNC_5(&VAR_7->phy_lock);
  VAR_8 = FUNC_0(VAR_7, VAR_6->reg_num & 0x1f, &VAR_9);
  FUNC_6(&VAR_7->phy_lock);

  VAR_6->val_out = VAR_9;

  return VAR_8;
 }

 case 128:
  if (VAR_7->phy_flags & VAR_0)
   return -VAR_2;

  if (!FUNC_4(VAR_3))
   return -VAR_1;

  FUNC_5(&VAR_7->phy_lock);
  VAR_8 = FUNC_1(VAR_7, VAR_6->reg_num & 0x1f, VAR_6->val_in);
  FUNC_6(&VAR_7->phy_lock);

  return VAR_8;

 default:

  break;
 }
 return -VAR_2;
}
