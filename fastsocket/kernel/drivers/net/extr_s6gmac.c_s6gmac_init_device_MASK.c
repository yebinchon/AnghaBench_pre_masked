
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int giga; scalar_t__ full; } ;
struct s6gmac {scalar_t__ reg; TYPE_2__ link; TYPE_1__* phydev; } ;
struct net_device {int flags; int mtu; int* dev_addr; } ;
struct TYPE_3__ {int supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
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
 scalar_t__ VAR_26 ;
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
 scalar_t__ VAR_37 ;
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
 scalar_t__ VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 scalar_t__ VAR_58 ;
 scalar_t__ VAR_59 ;
 scalar_t__ VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 struct s6gmac* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct s6gmac*,int,int,int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_4(struct net_device *VAR_64)
{
 struct s6gmac *VAR_65 = FUNC_0(VAR_64);
 int VAR_66 = !!(VAR_65->phydev->supported
  & (VAR_62 | VAR_63));
 FUNC_3(1 << VAR_45, VAR_65->reg + VAR_37);
 FUNC_2(1000);
 FUNC_3(1 << VAR_48 | 1 << VAR_43,
  VAR_65->reg + VAR_37);
 FUNC_3(1 << VAR_36 |
  1 << VAR_30,
  VAR_65->reg + VAR_26);
 FUNC_3(VAR_31 << VAR_34 |
  VAR_31 << VAR_28 |
  1 << VAR_33 |
  1 << VAR_32 |
  VAR_66 << VAR_27,
  VAR_65->reg + VAR_26);
 FUNC_3(1 << VAR_48 |
  1 << VAR_43 |
  (VAR_64->flags & VAR_2 ? 1 : 0)
   << VAR_38,
  VAR_65->reg + VAR_37);
 FUNC_3(VAR_64->mtu && (VAR_64->mtu < (VAR_61 - VAR_1-VAR_0)) ?
   VAR_64->mtu+VAR_1+VAR_0 : VAR_61,
  VAR_65->reg + VAR_58);
 FUNC_3((VAR_65->link.full ? 1 : 0) << VAR_51 |
  1 << VAR_56 |
  1 << VAR_55 |
  (VAR_65->link.giga ?
   VAR_53 :
   VAR_54)
   << VAR_52 |
  7 << VAR_57,
  VAR_65->reg + VAR_50);
 FUNC_3(0, VAR_65->reg + VAR_59);
 FUNC_3(0, VAR_65->reg + VAR_60);
 FUNC_3(1 << VAR_8 |
  1 << VAR_6 |
  1 << VAR_4 |
  1 << VAR_7 |
  1 << VAR_5,
  VAR_65->reg + VAR_3);
 FUNC_3(128 << VAR_10 |
  128 << VAR_11,
  VAR_65->reg + VAR_9);
 FUNC_3((VAR_20 & ~(
   1 << VAR_23 |
   1 << VAR_17 |
   1 << VAR_21 |
   1 << VAR_19 |
   1 << VAR_18 |
   1 << VAR_22 |
   1 << VAR_25 |
   1 << VAR_24)) |
  1 << VAR_15 |
  VAR_65->link.giga << VAR_14 |
  1 << VAR_16,
  VAR_65->reg + VAR_13);
 FUNC_3(1 << VAR_23 |
  1 << VAR_17 |
  1 << VAR_19 |
  1 << VAR_18 |
  1 << VAR_22 |
  1 << VAR_25 |
  1 << VAR_24,
  VAR_65->reg + VAR_12);
 FUNC_1(VAR_65, 0,
  0xFFFFFFFF, 0x0000FFFF, 0xFFFFFFFF, 0x0000FFFF);
 FUNC_1(VAR_65, 1,
  VAR_64->dev_addr[5] |
  VAR_64->dev_addr[4] << 8 |
  VAR_64->dev_addr[3] << 16 |
  VAR_64->dev_addr[2] << 24,
  VAR_64->dev_addr[1] |
  VAR_64->dev_addr[0] << 8,
  0xFFFFFFFF, 0x0000FFFF);
 FUNC_1(VAR_65, 2,
  0x00000000, 0x00000100, 0x00000000, 0x00000100);
 FUNC_1(VAR_65, 3,
  0x00000000, 0x00000000, 0x00000000, 0x00000000);
 FUNC_3(1 << VAR_35 |
  1 << VAR_29 |
  VAR_31 << VAR_34 |
  VAR_31 << VAR_28 |
  1 << VAR_33 |
  1 << VAR_32 |
  VAR_66 << VAR_27,
  VAR_65->reg + VAR_26);
}
