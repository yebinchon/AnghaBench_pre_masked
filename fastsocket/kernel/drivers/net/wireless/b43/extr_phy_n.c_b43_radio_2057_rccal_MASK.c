
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_phy {int radio_rev; } ;
struct b43_wldev {int wl; struct b43_phy phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct b43_wldev*,int ) ;
 int FUNC_1 (struct b43_wldev*,int ,int,int,int,int) ;
 int FUNC_2 (struct b43_wldev*,int,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static u16 FUNC_5(struct b43_wldev *VAR_5)
{
 struct b43_phy *VAR_6 = &VAR_5->phy;
 bool VAR_7 = (VAR_6->radio_rev == 3 || VAR_6->radio_rev == 4 ||
   VAR_6->radio_rev == 6);
 u16 VAR_8;

 if (VAR_7) {
  FUNC_2(VAR_5, VAR_1, 0x61);
  FUNC_2(VAR_5, VAR_3, 0xC0);
 } else {
  FUNC_2(VAR_5, 0x1AE, 0x61);
  FUNC_2(VAR_5, VAR_3, 0xE1);
 }
 FUNC_2(VAR_5, VAR_4, 0x6E);
 FUNC_2(VAR_5, VAR_2, 0x55);
 if (!FUNC_1(VAR_5, VAR_0, 1, 1, 500,
      5000000))
  FUNC_3(VAR_5->wl, "Radio 0x2057 rccal timeout\n");
 FUNC_2(VAR_5, VAR_2, 0x15);
 if (VAR_7) {
  FUNC_2(VAR_5, VAR_1, 0x69);
  FUNC_2(VAR_5, VAR_3, 0xB0);
 } else {
  FUNC_2(VAR_5, 0x1AE, 0x69);
  FUNC_2(VAR_5, VAR_3, 0xD5);
 }
 FUNC_2(VAR_5, VAR_4, 0x6E);
 FUNC_2(VAR_5, VAR_2, 0x55);
 if (!FUNC_1(VAR_5, VAR_0, 1, 1, 500,
      5000000))
  FUNC_3(VAR_5->wl, "Radio 0x2057 rccal timeout\n");
 FUNC_2(VAR_5, VAR_2, 0x15);
 if (VAR_7) {
  FUNC_2(VAR_5, VAR_1, 0x73);
  FUNC_2(VAR_5, VAR_4, 0x28);
  FUNC_2(VAR_5, VAR_3, 0xB0);
 } else {
  FUNC_2(VAR_5, 0x1AE, 0x73);
  FUNC_2(VAR_5, VAR_4, 0x6E);
  FUNC_2(VAR_5, VAR_3, 0x99);
 }
 FUNC_2(VAR_5, VAR_2, 0x55);
 if (!FUNC_1(VAR_5, VAR_0, 1, 1, 500,
      5000000)) {
  FUNC_4(VAR_5->wl, "Radio 0x2057 rcal timeout\n");
  return 0;
 }
 VAR_8 = FUNC_0(VAR_5, VAR_0);
 FUNC_2(VAR_5, VAR_2, 0x15);
 return VAR_8;
}
