
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sky2_port {int phy_lock; int port; struct sky2_hw* hw; } ;
struct sky2_hw {int dummy; } ;
struct net_device {int dummy; } ;
struct mii_ioctl_data {int reg_num; int val_in; int val_out; int phy_id; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct sky2_hw*,int ,int,int *) ;
 int FUNC_1 (struct sky2_hw*,int ,int,int ) ;
 struct mii_ioctl_data* FUNC_2 (struct ifreq*) ;
 struct sky2_port* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_3, struct ifreq *VAR_4, int VAR_5)
{
 struct mii_ioctl_data *VAR_6 = FUNC_2(VAR_4);
 struct sky2_port *VAR_7 = FUNC_3(VAR_3);
 struct sky2_hw *VAR_8 = VAR_7->hw;
 int VAR_9 = -VAR_1;

 if (!FUNC_4(VAR_3))
  return -VAR_0;

 switch (VAR_5) {
 case 130:
  VAR_6->phy_id = VAR_2;


 case 129: {
  u16 VAR_10 = 0;

  FUNC_5(&VAR_7->phy_lock);
  VAR_9 = FUNC_0(VAR_8, VAR_7->port, VAR_6->reg_num & 0x1f, &VAR_10);
  FUNC_6(&VAR_7->phy_lock);

  VAR_6->val_out = VAR_10;
  break;
 }

 case 128:
  FUNC_5(&VAR_7->phy_lock);
  VAR_9 = FUNC_1(VAR_8, VAR_7->port, VAR_6->reg_num & 0x1f,
       VAR_6->val_in);
  FUNC_6(&VAR_7->phy_lock);
  break;
 }
 return VAR_9;
}
