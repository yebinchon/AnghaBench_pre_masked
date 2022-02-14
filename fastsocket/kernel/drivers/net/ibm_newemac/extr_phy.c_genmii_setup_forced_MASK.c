
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_phy {int speed; int duplex; scalar_t__ asym_pause; scalar_t__ pause; int autoneg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int FUNC_0 (struct mii_phy*,int ) ;
 int FUNC_1 (struct mii_phy*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mii_phy *VAR_9, int VAR_10, int VAR_11)
{
 int VAR_12;

 VAR_9->autoneg = VAR_0;
 VAR_9->speed = VAR_10;
 VAR_9->duplex = VAR_11;
 VAR_9->pause = VAR_9->asym_pause = 0;

 VAR_12 = FUNC_0(VAR_9, VAR_8);
 if (VAR_12 < 0)
  return VAR_12;
 VAR_12 &= ~(VAR_2 | VAR_4 | VAR_5 | VAR_1);


 FUNC_1(VAR_9, VAR_8, VAR_12 | VAR_3);


 switch (VAR_10) {
 case 130:
  break;
 case 129:
  VAR_12 |= VAR_4;
  break;
 case 128:
  VAR_12 |= VAR_5;
  break;
 default:
  return -VAR_7;
 }
 if (VAR_11 == VAR_6)
  VAR_12 |= VAR_2;
 FUNC_1(VAR_9, VAR_8, VAR_12);

 return 0;
}
