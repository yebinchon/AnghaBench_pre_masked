
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_if_info {int (* mdio_read ) (int ,int ,int ) ;int phy_id; int dev; int (* mdio_write ) (int ,int ,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;

int FUNC_2 (struct mii_if_info *VAR_4)
{
 int VAR_5;
 int VAR_6 = -VAR_2;


 VAR_5 = VAR_4->mdio_read(VAR_4->dev, VAR_4->phy_id, VAR_3);

 if (VAR_5 & VAR_0) {
  VAR_5 |= VAR_1;
  VAR_4->mdio_write(VAR_4->dev, VAR_4->phy_id, VAR_3, VAR_5);
  VAR_6 = 0;
 }

 return VAR_6;
}
