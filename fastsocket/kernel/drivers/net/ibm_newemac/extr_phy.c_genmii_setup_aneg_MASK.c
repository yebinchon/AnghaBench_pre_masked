
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mii_phy {int advertising; int features; scalar_t__ asym_pause; scalar_t__ pause; int duplex; int speed; int autoneg; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (struct mii_phy*,int ) ;
 int FUNC_1 (struct mii_phy*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mii_phy *VAR_31, u32 VAR_32)
{
 int VAR_33, VAR_34;

 VAR_31->autoneg = VAR_18;
 VAR_31->speed = VAR_28;
 VAR_31->duplex = VAR_24;
 VAR_31->pause = VAR_31->asym_pause = 0;
 VAR_31->advertising = VAR_32;

 VAR_33 = FUNC_0(VAR_31, VAR_26);
 if (VAR_33 < 0)
  return VAR_33;
 VAR_33 &= ~(VAR_21 | VAR_22 | VAR_23 | VAR_19);


 FUNC_1(VAR_31, VAR_26, VAR_33);


 VAR_34 = FUNC_0(VAR_31, VAR_25);
 if (VAR_34 < 0)
  return VAR_34;
 VAR_34 &= ~(VAR_15 | VAR_10 | VAR_17 |
   VAR_16);
 if (VAR_32 & VAR_5)
  VAR_34 |= VAR_14;
 if (VAR_32 & VAR_4)
  VAR_34 |= VAR_13;
 if (VAR_32 & VAR_3)
  VAR_34 |= VAR_12;
 if (VAR_32 & VAR_2)
  VAR_34 |= VAR_11;
 if (VAR_32 & VAR_7)
  VAR_34 |= VAR_17;
 if (VAR_32 & VAR_6)
  VAR_34 |= VAR_16;
 FUNC_1(VAR_31, VAR_25, VAR_34);

 if (VAR_31->features &
     (VAR_29 | VAR_30)) {
  VAR_34 = FUNC_0(VAR_31, VAR_27);
  if (VAR_34 < 0)
   return VAR_34;
  VAR_34 &= ~(VAR_8 | VAR_9);
  if (VAR_32 & VAR_0)
   VAR_34 |= VAR_8;
  if (VAR_32 & VAR_1)
   VAR_34 |= VAR_9;
  FUNC_1(VAR_31, VAR_27, VAR_34);
 }


 VAR_33 = FUNC_0(VAR_31, VAR_26);
 VAR_33 |= (VAR_19 | VAR_20);
 FUNC_1(VAR_31, VAR_26, VAR_33);

 return 0;
}
