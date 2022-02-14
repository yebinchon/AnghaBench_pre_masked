
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mii_phy_def {int phy_id_mask; int phy_id; int features; } ;
struct mii_phy {int address; int features; int advertising; struct mii_phy_def* def; scalar_t__ asym_pause; scalar_t__ pause; int duplex; int speed; int autoneg; } ;


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
 scalar_t__ FUNC_0 (struct mii_phy*) ;
 struct mii_phy_def** VAR_24 ;
 int FUNC_1 (struct mii_phy*,int ) ;

int FUNC_2(struct mii_phy *VAR_25, int VAR_26)
{
 struct mii_phy_def *VAR_27;
 int VAR_28;
 u32 VAR_29;

 VAR_25->autoneg = VAR_0;
 VAR_25->advertising = 0;
 VAR_25->address = VAR_26;
 VAR_25->speed = VAR_15;
 VAR_25->duplex = VAR_7;
 VAR_25->pause = VAR_25->asym_pause = 0;


 if (FUNC_0(VAR_25))
  return -VAR_8;


 VAR_29 = (FUNC_1(VAR_25, VAR_13) << 16) | FUNC_1(VAR_25, VAR_14);
 for (VAR_28 = 0; (VAR_27 = VAR_24[VAR_28]) != ((void*)0); VAR_28++)
  if ((VAR_29 & VAR_27->phy_id_mask) == VAR_27->phy_id)
   break;

 if (!VAR_27)
  return -VAR_8;

 VAR_25->def = VAR_27;


 VAR_25->features = VAR_27->features;
 if (!VAR_25->features) {
  u16 VAR_30 = FUNC_1(VAR_25, VAR_11);
  if (VAR_30 & VAR_5)
   VAR_25->features |= VAR_22;
  if (VAR_30 & VAR_4)
   VAR_25->features |= VAR_21;
  if (VAR_30 & VAR_3)
   VAR_25->features |= VAR_20;
  if (VAR_30 & VAR_2)
   VAR_25->features |= VAR_19;
  if (VAR_30 & VAR_1)
   VAR_25->features |= VAR_18;
  if (VAR_30 & VAR_6) {
   u16 VAR_31 = FUNC_1(VAR_25, VAR_12);
   if (VAR_31 & VAR_9)
    VAR_25->features |= VAR_16;
   if (VAR_31 & VAR_10)
    VAR_25->features |= VAR_17;
  }
  VAR_25->features |= VAR_23;
 }


 VAR_25->advertising = VAR_25->features;

 return 0;
}
