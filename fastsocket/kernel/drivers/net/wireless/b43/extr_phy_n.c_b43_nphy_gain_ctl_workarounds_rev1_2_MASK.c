
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int rev; scalar_t__ is_40mhz; struct b43_phy_n* n; } ;
struct b43_wldev {int wl; TYPE_1__ phy; } ;
struct b43_phy_n {scalar_t__ elna_gain_config; scalar_t__ gain_boost; } ;


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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_32 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*,int,int*,int*,int) ;
 int FUNC_4 (struct b43_wldev*,int ,int,int) ;
 int FUNC_5 (struct b43_wldev*,int ,int ) ;
 int FUNC_6 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct b43_wldev *VAR_33)
{
 struct b43_phy_n *VAR_34 = VAR_33->phy.n;

 u8 VAR_35, VAR_36;
 u8 VAR_37;
 u16 VAR_38;
 u8 VAR_39[3] = { 6, 8, 7 };
 u8 VAR_40[3] = { 10, 30, 1 };


 FUNC_5(VAR_33, VAR_2, VAR_3);
 FUNC_5(VAR_33, VAR_13, VAR_14);


 FUNC_6(VAR_33, VAR_10, 0x84);
 FUNC_6(VAR_33, VAR_21, 0x84);

 if (!VAR_33->phy.is_40mhz) {

  FUNC_6(VAR_33, VAR_23, 0x002B);
  FUNC_6(VAR_33, VAR_24, 0x002B);
  FUNC_6(VAR_33, VAR_30, 0x0009);
  FUNC_6(VAR_33, VAR_31, 0x0009);
 }


 FUNC_4(VAR_33, VAR_5,
   ~VAR_6, 21);
 FUNC_4(VAR_33, VAR_16,
   ~VAR_17, 21);

 if (!VAR_33->phy.is_40mhz) {
  FUNC_4(VAR_33, VAR_2,
   ~VAR_4, 0x1);
  FUNC_4(VAR_33, VAR_13,
   ~VAR_15, 0x1);
  FUNC_4(VAR_33, VAR_0,
   ~VAR_1, 0x1);
  FUNC_4(VAR_33, VAR_11,
   ~VAR_12, 0x1);
 }

 FUNC_6(VAR_33, VAR_22, 0x809C);

 if (VAR_34->gain_boost) {
  if (FUNC_1(VAR_33->wl) == VAR_32 &&
   VAR_33->phy.is_40mhz)
   VAR_37 = 4;
  else
   VAR_37 = 5;
 } else {
  VAR_37 = VAR_33->phy.is_40mhz ? 6 : 7;
 }


 FUNC_4(VAR_33, VAR_7, ~VAR_8,
   VAR_37 << VAR_9);
 FUNC_4(VAR_33, VAR_18, ~VAR_19,
   VAR_37 << VAR_20);

 FUNC_6(VAR_33, VAR_28, 0x1D06);

 for (VAR_35 = 0; VAR_35 < 4; VAR_35++)
  FUNC_6(VAR_33, VAR_29, (VAR_37 << 8 | 0x7C));

 FUNC_2(VAR_33);

 if (VAR_34->elna_gain_config) {
  FUNC_6(VAR_33, VAR_28, 0x0808);
  FUNC_6(VAR_33, VAR_29, 0x0);
  FUNC_6(VAR_33, VAR_29, 0x1);
  FUNC_6(VAR_33, VAR_29, 0x1);
  FUNC_6(VAR_33, VAR_29, 0x1);

  FUNC_6(VAR_33, VAR_28, 0x0C08);
  FUNC_6(VAR_33, VAR_29, 0x0);
  FUNC_6(VAR_33, VAR_29, 0x1);
  FUNC_6(VAR_33, VAR_29, 0x1);
  FUNC_6(VAR_33, VAR_29, 0x1);

  FUNC_6(VAR_33, VAR_28, 0x1D06);

  for (VAR_35 = 0; VAR_35 < 4; VAR_35++)
   FUNC_6(VAR_33, VAR_29,
      (VAR_37 << 8 | 0x74));
 }

 if (VAR_33->phy.rev == 2) {
  for (VAR_35 = 0; VAR_35 < 4; VAR_35++) {
   FUNC_6(VAR_33, VAR_28,
     (0x0400 * VAR_35) + 0x0020);
   for (VAR_36 = 0; VAR_36 < 21; VAR_36++) {
    VAR_38 = VAR_36 * (VAR_35 < 2 ? 3 : 1);
    FUNC_6(VAR_33,
     VAR_29, VAR_38);
   }
  }
 }

 FUNC_3(VAR_33, 5, VAR_39, VAR_40, 3);
 FUNC_4(VAR_33, VAR_25,
  ~VAR_26 & 0xFFFF,
  0x5A << VAR_27);

 if (FUNC_1(VAR_33->wl) == VAR_32)
  FUNC_4(VAR_33, FUNC_0(0xC5D), 0xFF80, 4);
}
