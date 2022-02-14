
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43legacy_phy {int analog; } ;
struct b43legacy_wldev {struct b43legacy_phy phy; } ;


 int FUNC_0 (struct b43legacy_wldev*,int) ;
 int FUNC_1 (struct b43legacy_wldev*,int,int) ;
 int FUNC_2 (struct b43legacy_wldev*,int) ;
 int FUNC_3 (struct b43legacy_wldev*,int,int) ;

void FUNC_4(struct b43legacy_wldev *VAR_0,
         u16 VAR_1)
{
 struct b43legacy_phy *VAR_2 = &VAR_0->phy;
 u16 VAR_3;

 if (VAR_2->analog == 0) {
  VAR_3 = (FUNC_2(VAR_0, 0x03E6) & 0xFFF0);
  VAR_3 |= (VAR_1 & 0x000F);
  FUNC_3(VAR_0, 0x03E6, VAR_3);
  return;
 }

 if (VAR_2->analog > 1) {
  VAR_3 = FUNC_0(VAR_0, 0x0060) & 0xFFC3;
  VAR_3 |= (VAR_1 << 2) & 0x003C;
 } else {
  VAR_3 = FUNC_0(VAR_0, 0x0060) & 0xFF87;
  VAR_3 |= (VAR_1 << 3) & 0x0078;
 }
 FUNC_1(VAR_0, 0x0060, VAR_3);
}
