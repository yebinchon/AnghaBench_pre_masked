
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_phy {int rev; } ;
struct b43_wldev {struct b43_phy phy; } ;


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
 int FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_wldev*,int) ;
 int FUNC_2 (struct b43_wldev*,int ,int,int) ;
 int FUNC_3 (struct b43_wldev*,int ) ;
 int FUNC_4 (struct b43_wldev*,int ,int) ;
 int FUNC_5 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct b43_wldev *VAR_11, int VAR_12)
{
 struct b43_phy *VAR_13 = &VAR_11->phy;
 u16 VAR_14;
 int VAR_15 = 0;

 if (VAR_12 == VAR_0 || VAR_12 == VAR_1)
  VAR_15 = 1;

 FUNC_1(VAR_11, FUNC_0(VAR_11) & ~VAR_2);

 FUNC_2(VAR_11, VAR_6, ~VAR_7,
   (VAR_15 ? VAR_1 : VAR_12) <<
   VAR_8);

 if (VAR_15) {
  VAR_14 = FUNC_3(VAR_11, VAR_4);
  if (VAR_12 == VAR_1)
   VAR_14 &= ~VAR_5;
  else
   VAR_14 |= VAR_5;
  FUNC_5(VAR_11, VAR_4, VAR_14);
 }
 if (VAR_13->rev < 3)
  FUNC_2(VAR_11, VAR_4, 0xFF00, 0x24);
 else {
  FUNC_4(VAR_11, VAR_10, 0x10);
  if (VAR_13->rev == 3) {
   FUNC_5(VAR_11, VAR_9, 0x1D);
   FUNC_5(VAR_11, VAR_3, 8);
  } else {
   FUNC_5(VAR_11, VAR_9, 0x3A);
   FUNC_2(VAR_11, VAR_3, 0xFF00, 8);
  }
 }

 FUNC_1(VAR_11, FUNC_0(VAR_11) | VAR_2);
}
