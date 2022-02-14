
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_wldev*,int) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;
 int FUNC_3 (struct b43_wldev*,int ,int,int) ;
 int FUNC_4 (struct b43_wldev*,int ) ;
 int FUNC_5 (struct b43_wldev*,int ,int) ;
 int FUNC_6 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct b43_wldev *VAR_15, int VAR_16)
{
 struct b43_phy *VAR_17 = &VAR_15->phy;
 u16 VAR_18;
 int VAR_19 = 0;

 if (VAR_16 == VAR_0 || VAR_16 == VAR_1)
  VAR_19 = 1;

 FUNC_1(VAR_15, FUNC_0(VAR_15) & ~VAR_2);

 FUNC_3(VAR_15, VAR_8, ~VAR_9,
   (VAR_19 ? VAR_1 : VAR_16) <<
   VAR_10);

 if (VAR_19) {
  VAR_18 = FUNC_4(VAR_15, VAR_4);
  if (VAR_16 == VAR_1)
   VAR_18 &= ~VAR_5;
  else
   VAR_18 |= VAR_5;
  FUNC_6(VAR_15, VAR_4, VAR_18);
 }

 VAR_18 = FUNC_4(VAR_15, VAR_6);
 if (VAR_19)
  VAR_18 |= VAR_7;
 else
  VAR_18 &= ~VAR_7;
 FUNC_6(VAR_15, VAR_6, VAR_18);

 if (VAR_19)
  FUNC_5(VAR_15, VAR_6, VAR_7);
 else {
  FUNC_2(VAR_15, VAR_6,
        VAR_7);
 }

 if (VAR_17->rev >= 2) {
  FUNC_5(VAR_15, VAR_12, VAR_13);
  FUNC_3(VAR_15, VAR_11, 0xFF00, 0x15);

  if (VAR_17->rev == 2)
   FUNC_6(VAR_15, VAR_3, 8);
  else
   FUNC_3(VAR_15, VAR_3, 0xFF00, 8);
 }
 if (VAR_17->rev >= 6)
  FUNC_6(VAR_15, VAR_14, 0xDC);

 FUNC_1(VAR_15, FUNC_0(VAR_15) | VAR_2);
}
