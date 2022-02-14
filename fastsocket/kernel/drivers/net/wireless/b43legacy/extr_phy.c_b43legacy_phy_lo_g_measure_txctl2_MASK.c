
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct b43legacy_phy {int txctl2; } ;
struct b43legacy_wldev {struct b43legacy_phy phy; } ;


 scalar_t__ FUNC_0 (struct b43legacy_wldev*,int ) ;
 int FUNC_1 (struct b43legacy_wldev*,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct b43legacy_wldev *VAR_0)
{
 struct b43legacy_phy *VAR_1 = &VAR_0->phy;
 u16 VAR_2 = 0;
 u16 VAR_3;
 u32 VAR_4;
 u32 VAR_5;

 FUNC_1(VAR_0, 0x0052, 0x0000);
 FUNC_2(10);
 VAR_4 = FUNC_0(VAR_0, 0);
 for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
  FUNC_1(VAR_0, 0x0052, VAR_3);
  FUNC_2(10);
  VAR_5 = FUNC_0(VAR_0, 0);
  if (VAR_5 < VAR_4) {
   VAR_4 = VAR_5;
   VAR_2 = VAR_3;
  }
 }
 VAR_1->txctl2 = VAR_2;
}
