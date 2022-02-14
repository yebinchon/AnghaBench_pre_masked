
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct mii_if_info {int (* mdio_read ) (struct net_device*,int,int ) ;int phy_id_mask; int reg_num_mask; int phy_id; int (* mdio_write ) (struct net_device*,int,int ,int) ;struct net_device* dev; } ;
struct ipg_nic_private {int pdev; struct mii_if_info mii_if; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct net_device*,int) ;
 int FUNC_2 (struct net_device*,int,int ) ;
 int FUNC_3 (struct net_device*,int,int ,int) ;
 struct ipg_nic_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_8)
{
 struct ipg_nic_private *VAR_9 = FUNC_4(VAR_8);
 struct mii_if_info *VAR_10 = &VAR_9->mii_if;
 int VAR_11;

 VAR_10->dev = VAR_8;
 VAR_10->mdio_read = FUNC_2;
 VAR_10->mdio_write = FUNC_3;
 VAR_10->phy_id_mask = 0x1f;
 VAR_10->reg_num_mask = 0x1f;

 VAR_10->phy_id = VAR_11 = FUNC_0(VAR_8);

 if (VAR_11 != 0x1f) {
  u16 VAR_12, VAR_13;
  u8 VAR_14 = 0;

  VAR_13 = FUNC_2(VAR_8, VAR_11, VAR_6);
  VAR_13 |= VAR_0 | VAR_1 |
   VAR_4;
  FUNC_3(VAR_8, VAR_11, VAR_6, VAR_13);

  VAR_12 = FUNC_2(VAR_8, VAR_11, VAR_5);


  FUNC_5(VAR_9->pdev, VAR_7, &VAR_14);
  FUNC_1(VAR_14, VAR_8, VAR_11);


  VAR_12 |= VAR_3 | VAR_2;
  FUNC_3(VAR_8, VAR_11, VAR_5, VAR_12);

 }
}
