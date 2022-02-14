
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct skge_port {int port; struct skge_hw* hw; } ;
struct skge_hw {int phy_lock; int chip_id; int phy_addr; } ;
struct net_device {int dummy; } ;
struct mii_ioctl_data {int reg_num; int val_in; int val_out; int phy_id; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct skge_hw*,int ,int,int *) ;
 int FUNC_1 (struct skge_hw*,int ,int,int *) ;
 int FUNC_2 (struct skge_hw*,int ,int,int ) ;
 struct mii_ioctl_data* FUNC_3 (struct ifreq*) ;
 struct skge_port* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct skge_hw*,int ,int,int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_3, struct ifreq *VAR_4, int VAR_5)
{
 struct mii_ioctl_data *VAR_6 = FUNC_3(VAR_4);
 struct skge_port *VAR_7 = FUNC_4(VAR_3);
 struct skge_hw *VAR_8 = VAR_7->hw;
 int VAR_9 = -VAR_2;

 if (!FUNC_5(VAR_3))
  return -VAR_1;

 switch(VAR_5) {
 case 130:
  VAR_6->phy_id = VAR_8->phy_addr;


 case 129: {
  u16 VAR_10 = 0;
  FUNC_6(&VAR_8->phy_lock);
  if (VAR_8->chip_id == VAR_0)
   VAR_9 = FUNC_1(VAR_8, VAR_7->port, VAR_6->reg_num & 0x1f, &VAR_10);
  else
   VAR_9 = FUNC_0(VAR_8, VAR_7->port, VAR_6->reg_num & 0x1f, &VAR_10);
  FUNC_7(&VAR_8->phy_lock);
  VAR_6->val_out = VAR_10;
  break;
 }

 case 128:
  FUNC_6(&VAR_8->phy_lock);
  if (VAR_8->chip_id == VAR_0)
   VAR_9 = FUNC_8(VAR_8, VAR_7->port, VAR_6->reg_num & 0x1f,
       VAR_6->val_in);
  else
   VAR_9 = FUNC_2(VAR_8, VAR_7->port, VAR_6->reg_num & 0x1f,
       VAR_6->val_in);
  FUNC_7(&VAR_8->phy_lock);
  break;
 }
 return VAR_9;
}
