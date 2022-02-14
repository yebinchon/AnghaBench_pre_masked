
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43legacy_phy {int rev; } ;
struct b43legacy_wldev {struct b43legacy_phy phy; } ;


 int FUNC_0 (struct b43legacy_wldev*) ;
 int FUNC_1 (struct b43legacy_wldev*,int,int) ;
 int FUNC_2 (struct b43legacy_wldev*,int) ;
 int FUNC_3 (struct b43legacy_wldev*,int,int) ;

__attribute__((used)) static void FUNC_4(struct b43legacy_wldev *VAR_0)
{
 struct b43legacy_phy *VAR_1 = &VAR_0->phy;
 u16 VAR_2;
 u16 VAR_3;
 u16 VAR_4 = 0x0400;
 u16 VAR_5 = 0x0008;
 u16 VAR_6 = 0x0018;

 if (VAR_1->rev <= 1) {
  VAR_4 = 0x5000;
  VAR_5 = 0x0010;
  VAR_6 = 0x0020;
 }

 for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
  VAR_3 = (VAR_2 & 0xFFFC);
  VAR_3 |= (VAR_2 & 0x0001) << 1;
  VAR_3 |= (VAR_2 & 0x0002) >> 1;

  FUNC_1(VAR_0, VAR_4 + VAR_2, VAR_3);
 }

 for (VAR_2 = VAR_5; VAR_2 < VAR_6; VAR_2++)
  FUNC_1(VAR_0, VAR_4 + VAR_2, VAR_2 - VAR_5);

 FUNC_3(VAR_0, 0x04A0,
       (FUNC_2(VAR_0, 0x04A0) & 0xBFBF)
       | 0x4040);
 FUNC_3(VAR_0, 0x04A1,
       (FUNC_2(VAR_0, 0x04A1) & 0xBFBF)
       | 0x4040);
 FUNC_3(VAR_0, 0x04A2,
       (FUNC_2(VAR_0, 0x04A2) & 0xBFBF)
       | 0x4000);
 FUNC_0(VAR_0);
}
