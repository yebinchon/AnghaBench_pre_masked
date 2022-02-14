
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct b43_phy {int radio_rev; } ;
struct b43_wldev {int wl; struct b43_phy phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct b43_wldev*,int,int) ;
 int FUNC_1 (struct b43_wldev*,int,int) ;
 int FUNC_2 (struct b43_wldev*,int,int,int) ;
 int FUNC_3 (struct b43_wldev*,int ) ;
 int FUNC_4 (struct b43_wldev*,int,int) ;
 int FUNC_5 (struct b43_wldev*,int ,int,int,int,int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static u8 FUNC_8(struct b43_wldev *VAR_7)
{
 struct b43_phy *VAR_8 = &VAR_7->phy;
 u16 VAR_9;

 if (VAR_8->radio_rev == 5) {
  FUNC_0(VAR_7, 0x342, ~0x2);
  FUNC_7(10);
  FUNC_4(VAR_7, VAR_2, 0x1);
  FUNC_2(VAR_7, 0x1ca, ~0x2, 0x1);
 }

 FUNC_4(VAR_7, VAR_3, 0x1);
 FUNC_7(10);
 FUNC_4(VAR_7, VAR_3, 0x3);
 if (!FUNC_5(VAR_7, VAR_5, 1, 1, 100, 1000000)) {
  FUNC_6(VAR_7->wl, "Radio 0x2057 rcal timeout\n");
  return 0;
 }
 FUNC_1(VAR_7, VAR_3, ~0x2);
 VAR_9 = FUNC_3(VAR_7, VAR_4) & 0x3E;
 FUNC_1(VAR_7, VAR_3, ~0x1);

 if (VAR_8->radio_rev == 5) {
  FUNC_1(VAR_7, VAR_1, ~0x1);
  FUNC_1(VAR_7, 0x1ca, ~0x2);
 }
 if (VAR_8->radio_rev <= 4 || VAR_8->radio_rev == 6) {
  FUNC_2(VAR_7, VAR_6, ~0x3C, VAR_9);
  FUNC_2(VAR_7, VAR_0, ~0xF0,
      VAR_9 << 2);
 }

 return VAR_9 & 0x3e;
}
