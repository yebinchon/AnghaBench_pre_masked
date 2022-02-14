
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mii_phy {int speed; int duplex; scalar_t__ pause; scalar_t__ autoneg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;



 int FUNC_0 (struct mii_phy*,int ) ;
 int FUNC_1 (struct mii_phy*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mii_phy *VAR_13, int VAR_14, int VAR_15)
{
 u16 VAR_16, VAR_17;

 VAR_13->autoneg = 0;
 VAR_13->speed = VAR_14;
 VAR_13->duplex = VAR_15;
 VAR_13->pause = 0;

 VAR_16 = FUNC_0(VAR_13, VAR_9);
 VAR_16 &= ~(VAR_1|VAR_4|VAR_3|VAR_0);
 VAR_16 |= VAR_2;


 switch(VAR_14) {
 case 130:
  break;
 case 129:
  VAR_16 |= VAR_4;
  break;



 case 128:
  VAR_16 |= VAR_3;
 }
 if (VAR_15 == VAR_5)
  VAR_16 |= VAR_1;




 VAR_17 = FUNC_0(VAR_13, VAR_10);
 VAR_17 &= ~(VAR_12 |
  VAR_11 |
  VAR_7 |
  VAR_8);
 if (VAR_14 == 128)
  VAR_17 |= (VAR_15 == VAR_5) ?
   VAR_7 :
   VAR_8;
 FUNC_1(VAR_13, VAR_6, VAR_17);



 FUNC_1(VAR_13, VAR_9, VAR_16);

 return 0;
}
