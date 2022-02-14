
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43legacy_phy {int rev; } ;
struct b43legacy_wldev {struct b43legacy_phy phy; } ;
typedef int s16 ;


 int FUNC_0 (struct b43legacy_wldev*) ;
 int FUNC_1 (struct b43legacy_wldev*,int,int) ;
 int FUNC_2 (struct b43legacy_wldev*,int) ;
 int FUNC_3 (struct b43legacy_wldev*,int,int) ;

__attribute__((used)) static void FUNC_4(struct b43legacy_wldev *VAR_0,
      s16 VAR_1, s16 VAR_2, s16 VAR_3)
{
 struct b43legacy_phy *VAR_4 = &VAR_0->phy;
 u16 VAR_5;
 u16 VAR_6 = 0x08;
 u16 VAR_7 = 0x18;
 u16 VAR_8 = 0x0400;
 u16 VAR_9;

 if (VAR_4->rev <= 1) {
  VAR_8 = 0x5000;
  VAR_6 = 0x10;
  VAR_7 = 0x20;
 }

 for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
  FUNC_1(VAR_0, VAR_8 + VAR_5, VAR_1);

 for (VAR_5 = VAR_6; VAR_5 < VAR_7; VAR_5++)
  FUNC_1(VAR_0, VAR_8 + VAR_5, VAR_2);

 if (VAR_3 != -1) {
  VAR_9 = ((u16)VAR_3 << 14) | ((u16)VAR_3 << 6);
  FUNC_3(VAR_0, 0x04A0,
        (FUNC_2(VAR_0, 0x04A0) & 0xBFBF)
        | VAR_9);
  FUNC_3(VAR_0, 0x04A1,
        (FUNC_2(VAR_0, 0x04A1) & 0xBFBF)
        | VAR_9);
  FUNC_3(VAR_0, 0x04A2,
        (FUNC_2(VAR_0, 0x04A2) & 0xBFBF)
        | VAR_9);
 }
 FUNC_0(VAR_0);
}
