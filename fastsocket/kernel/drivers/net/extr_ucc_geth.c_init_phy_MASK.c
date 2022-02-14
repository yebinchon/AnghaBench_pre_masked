
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucc_geth_private {int oldduplex; scalar_t__ phy_interface; scalar_t__ max_speed; struct phy_device* phydev; scalar_t__ oldspeed; scalar_t__ oldlink; struct ucc_geth_info* ug_info; } ;
struct ucc_geth_info {int phy_node; } ;
struct phy_device {int supported; int advertising; } ;
struct net_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*) ;
 struct ucc_geth_private* FUNC_1 (struct net_device*) ;
 struct phy_device* FUNC_2 (struct net_device*,int ,int *,int ,scalar_t__) ;
 struct phy_device* FUNC_3 (struct net_device*,int *,scalar_t__) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_9)
{
 struct ucc_geth_private *VAR_10 = FUNC_1(VAR_9);
 struct ucc_geth_info *VAR_11 = VAR_10->ug_info;
 struct phy_device *VAR_12;

 VAR_10->oldlink = 0;
 VAR_10->oldspeed = 0;
 VAR_10->oldduplex = -1;

 VAR_12 = FUNC_2(VAR_9, VAR_11->phy_node, &VAR_8, 0,
    VAR_10->phy_interface);
 if (!VAR_12)
  VAR_12 = FUNC_3(VAR_9, &VAR_8,
         VAR_10->phy_interface);
 if (!VAR_12) {
  FUNC_0(&VAR_9->dev, "Could not attach to PHY\n");
  return -VAR_5;
 }

 if (VAR_10->phy_interface == VAR_6)
  FUNC_4(VAR_9);

 VAR_12->supported &= (VAR_4 |
     VAR_3 |
     VAR_2 |
     VAR_1);

 if (VAR_10->max_speed == VAR_7)
  VAR_12->supported |= VAR_0;

 VAR_12->advertising = VAR_12->supported;

 VAR_10->phydev = VAR_12;

 return 0;
}
