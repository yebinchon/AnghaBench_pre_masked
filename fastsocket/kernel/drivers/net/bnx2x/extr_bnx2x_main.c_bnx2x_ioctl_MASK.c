
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mii_ioctl_data {int val_in; int reg_num; int phy_id; } ;
struct ifreq {int dummy; } ;
struct bnx2x {int mdio; } ;


 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct mii_ioctl_data* FUNC_1 (struct ifreq*) ;
 int FUNC_2 (int *,struct mii_ioctl_data*,int) ;
 struct bnx2x* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2, struct ifreq *VAR_3, int VAR_4)
{
 struct bnx2x *VAR_5 = FUNC_3(VAR_2);
 struct mii_ioctl_data *VAR_6 = FUNC_1(VAR_3);

 FUNC_0(VAR_1, "ioctl: phy id 0x%x, reg 0x%x, val_in 0x%x\n",
    VAR_6->phy_id, VAR_6->reg_num, VAR_6->val_in);

 if (!FUNC_4(VAR_2))
  return -VAR_0;

 return FUNC_2(&VAR_5->mdio, VAR_6, VAR_4);
}
