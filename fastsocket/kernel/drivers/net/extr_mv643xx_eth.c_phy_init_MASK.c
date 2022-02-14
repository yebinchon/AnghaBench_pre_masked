
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int speed; int duplex; int advertising; int supported; int autoneg; int dev; } ;
struct mv643xx_eth_private {int dev; struct phy_device* phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct mv643xx_eth_private*) ;
 int FUNC_3 (struct phy_device*) ;

__attribute__((used)) static void FUNC_4(struct mv643xx_eth_private *VAR_4, int VAR_5, int VAR_6)
{
 struct phy_device *VAR_7 = VAR_4->phy;

 FUNC_2(VAR_4);

 FUNC_1(VAR_4->dev, FUNC_0(&VAR_7->dev), 0, VAR_3);

 if (VAR_5 == 0) {
  VAR_7->autoneg = VAR_2;
  VAR_7->speed = 0;
  VAR_7->duplex = 0;
  VAR_7->advertising = VAR_7->supported | VAR_0;
 } else {
  VAR_7->autoneg = VAR_1;
  VAR_7->advertising = 0;
  VAR_7->speed = VAR_5;
  VAR_7->duplex = VAR_6;
 }
 FUNC_3(VAR_7);
}
