
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2 {int phy_flags; int line_speed; int mii_bmsr; scalar_t__ autoneg; int duplex; scalar_t__ link_up; } ;


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




 int FUNC_0 (struct bnx2*,int ,int*) ;
 int FUNC_1 (struct bnx2*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct bnx2 *VAR_18)
{
 u32 VAR_19 = 0;

 if (VAR_18->phy_flags & VAR_16)
  return;

 if (VAR_18->link_up) {
  u32 VAR_20;

  switch (VAR_18->line_speed) {
  case 131:
   if (VAR_18->duplex == VAR_17)
    VAR_19 = VAR_7;
   else
    VAR_19 = VAR_6;
   break;
  case 130:
   if (VAR_18->duplex == VAR_17)
    VAR_19 = VAR_5;
   else
    VAR_19 = VAR_4;
   break;
  case 129:
   if (VAR_18->duplex == VAR_17)
    VAR_19 = VAR_3;
   else
    VAR_19 = VAR_2;
   break;
  case 128:
   if (VAR_18->duplex == VAR_17)
    VAR_19 = VAR_9;
   else
    VAR_19 = VAR_8;
   break;
  }

  VAR_19 |= VAR_13;

  if (VAR_18->autoneg) {
   VAR_19 |= VAR_11;

   FUNC_0(VAR_18, VAR_18->mii_bmsr, &VAR_20);
   FUNC_0(VAR_18, VAR_18->mii_bmsr, &VAR_20);

   if (!(VAR_20 & VAR_0) ||
       VAR_18->phy_flags & VAR_15)
    VAR_19 |= VAR_14;
   else
    VAR_19 |= VAR_10;
  }
 }
 else
  VAR_19 = VAR_12;

 FUNC_1(VAR_18, VAR_1, VAR_19);
}
