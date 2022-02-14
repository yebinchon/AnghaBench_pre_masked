
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu_link_config {int supported; int active_autoneg; int active_advertising; int active_speed; int active_duplex; } ;
struct niu {int phy_addr; struct niu_link_config link_config; } ;


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
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct niu*,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct niu *VAR_53, int *VAR_54)
{
 struct niu_link_config *VAR_55 = &VAR_53->link_config;
 int VAR_56;
 int VAR_57, VAR_58, VAR_59, VAR_60, VAR_61, VAR_62, VAR_63;
 int VAR_64, VAR_65, VAR_66, VAR_67;

 VAR_56 = FUNC_1(VAR_53, VAR_53->phy_addr, VAR_36);
 if (FUNC_2(VAR_56 < 0))
  return VAR_56;
 VAR_62 = VAR_56;

 VAR_56 = FUNC_1(VAR_53, VAR_53->phy_addr, VAR_37);
 if (FUNC_2(VAR_56 < 0))
  return VAR_56;
 VAR_57 = VAR_56;

 VAR_56 = FUNC_1(VAR_53, VAR_53->phy_addr, VAR_35);
 if (FUNC_2(VAR_56 < 0))
  return VAR_56;
 VAR_58 = VAR_56;

 VAR_56 = FUNC_1(VAR_53, VAR_53->phy_addr, VAR_40);
 if (FUNC_2(VAR_56 < 0))
  return VAR_56;
 VAR_61 = VAR_56;

 if (FUNC_0(VAR_57 & VAR_22)) {
  VAR_56 = FUNC_1(VAR_53, VAR_53->phy_addr, VAR_39);
  if (FUNC_2(VAR_56 < 0))
   return VAR_56;
  VAR_63 = VAR_56;

  VAR_56 = FUNC_1(VAR_53, VAR_53->phy_addr, VAR_38);
  if (FUNC_2(VAR_56 < 0))
   return VAR_56;
  VAR_59 = VAR_56;

  VAR_56 = FUNC_1(VAR_53, VAR_53->phy_addr, VAR_41);
  if (FUNC_2(VAR_56 < 0))
   return VAR_56;
  VAR_60 = VAR_56;
 } else
  VAR_63 = VAR_59 = VAR_60 = 0;

 VAR_64 = 0;
 if (VAR_57 & VAR_21)
  VAR_64 |= VAR_52;
 if (VAR_57 & VAR_20)
  VAR_64 |= VAR_51;
 if (VAR_57 & VAR_19)
  VAR_64 |= VAR_50;
 if (VAR_57 & VAR_18)
  VAR_64 |= VAR_49;
 if (VAR_57 & VAR_17)
  VAR_64 |= VAR_48;
 if (VAR_63 & VAR_28)
  VAR_64 |= VAR_47;
 if (VAR_63 & VAR_27)
  VAR_64 |= VAR_46;
 VAR_55->supported = VAR_64;

 VAR_65 = 0;
 if (VAR_58 & VAR_12)
  VAR_65 |= VAR_5;
 if (VAR_58 & VAR_11)
  VAR_65 |= VAR_4;
 if (VAR_58 & VAR_10)
  VAR_65 |= VAR_3;
 if (VAR_58 & VAR_9)
  VAR_65 |= VAR_2;
 if (VAR_59 & VAR_8)
  VAR_65 |= VAR_1;
 if (VAR_59 & VAR_7)
  VAR_65 |= VAR_0;

 if (VAR_62 & VAR_13) {
  int VAR_68, VAR_69;

  VAR_55->active_autoneg = 1;
  VAR_65 |= VAR_6;

  VAR_68 = VAR_58 & VAR_61;
  VAR_69 = (VAR_59 << 2) & VAR_60;

  if (VAR_69 & (VAR_30 | VAR_31))
   VAR_66 = VAR_44;
  else if (VAR_68 & VAR_29)
   VAR_66 = VAR_43;
  else if (VAR_68 & (VAR_33 | VAR_32))
   VAR_66 = VAR_42;
  else
   VAR_66 = VAR_45;

  if ((VAR_69 & VAR_30) || (VAR_68 & VAR_34))
   VAR_67 = VAR_24;
  else if (VAR_66 != VAR_45)
   VAR_67 = VAR_25;
  else
   VAR_67 = VAR_26;
 } else {
  VAR_55->active_autoneg = 0;

  if ((VAR_62 & VAR_16) && !(VAR_62 & VAR_15))
   VAR_66 = VAR_44;
  else if (VAR_62 & VAR_15)
   VAR_66 = VAR_43;
  else
   VAR_66 = VAR_42;

  if (VAR_62 & VAR_14)
   VAR_67 = VAR_24;
  else
   VAR_67 = VAR_25;
 }

 VAR_55->active_advertising = VAR_65;
 VAR_55->active_speed = VAR_66;
 VAR_55->active_duplex = VAR_67;
 *VAR_54 = !!(VAR_57 & VAR_23);

 return 0;
}
