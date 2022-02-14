
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct b43_wldev {int wl; } ;
typedef scalar_t__ s32 ;
typedef enum n_rssi_type { ____Placeholder_n_rssi_type } n_rssi_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct b43_wldev*,int,int) ;
 int FUNC_4 (struct b43_wldev*,int,scalar_t__*,int) ;
 int FUNC_5 (struct b43_wldev*,int*) ;
 int FUNC_6 (struct b43_wldev*) ;
 int FUNC_7 (struct b43_wldev*,int,int) ;
 int FUNC_8 (struct b43_wldev*,int ,scalar_t__,int,int,int) ;
 int FUNC_9 (struct b43_wldev*,int,int*) ;
 int FUNC_10 (struct b43_wldev*,int*) ;
 int FUNC_11 (struct b43_wldev*,int ) ;
 int FUNC_12 (struct b43_wldev*,int ,int) ;
 int FUNC_13 (struct b43_wldev*,int ,int) ;
 int FUNC_14 (struct b43_wldev*,int ,int,int) ;
 int FUNC_15 (struct b43_wldev*,int ) ;
 int FUNC_16 (struct b43_wldev*,int ,int) ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_18(struct b43_wldev *VAR_14, enum n_rssi_type VAR_15)
{
 int VAR_16, VAR_17, VAR_18;
 u8 VAR_19[4];
 u8 VAR_20, VAR_21;
 u16 VAR_22, VAR_23;
 u8 VAR_24[2];
 u16 VAR_25[2];

 s32 VAR_26[4];
 u8 VAR_27;
 u8 VAR_28;

 u16 VAR_29[2];
 u16 VAR_30[2] = { 0xFFFF, 0xFFFF };
 s32 VAR_31[4] = { };
 u8 VAR_32[4] = { };
 s32 VAR_33[4][4] = { };
 s32 VAR_34[4][2] = { };

 if (VAR_15 == VAR_11) {
  VAR_20 = 0;
  VAR_21 = 6;
 } else if (VAR_15 == VAR_12 || VAR_15 == VAR_13) {
  VAR_20 = 25;
  VAR_21 = 4;
 } else {
  FUNC_0(1);
  return;
 }

 VAR_22 = FUNC_3(VAR_14, 0, 0);
 FUNC_3(VAR_14, 7, 4);
 FUNC_5(VAR_14, VAR_29);
 FUNC_10(VAR_14, VAR_30);

 if (FUNC_2(VAR_14->wl) == VAR_8)
  VAR_23 = 0x140;
 else
  VAR_23 = 0x110;

 VAR_25[0] = FUNC_11(VAR_14, VAR_6);
 VAR_24[0] = FUNC_15(VAR_14, VAR_1);
 FUNC_12(VAR_14, VAR_6, VAR_23);
 FUNC_16(VAR_14, VAR_1, VAR_21);

 VAR_25[1] = FUNC_11(VAR_14, VAR_7);
 VAR_24[1] = FUNC_15(VAR_14, VAR_4);
 FUNC_12(VAR_14, VAR_7, VAR_23);
 FUNC_16(VAR_14, VAR_4, VAR_21);

 VAR_19[0] = FUNC_15(VAR_14, VAR_0) & 0x07;
 VAR_19[1] = FUNC_15(VAR_14, VAR_3) & 0x07;
 FUNC_13(VAR_14, VAR_0, 0xF8);
 FUNC_13(VAR_14, VAR_3, 0xF8);
 VAR_19[2] = FUNC_15(VAR_14, VAR_2) & 0x07;
 VAR_19[3] = FUNC_15(VAR_14, VAR_5) & 0x07;

 FUNC_7(VAR_14, 5, VAR_15);
 FUNC_8(VAR_14, 0, 0, 5, VAR_9, VAR_15);
 FUNC_8(VAR_14, 0, 0, 5, VAR_10, VAR_15);

 for (VAR_18 = 0; VAR_18 < 4; VAR_18++) {
  u8 VAR_35[4];
  for (VAR_17 = 0; VAR_17 < 4; VAR_17++)
   VAR_35[VAR_17] = VAR_18;
  if (VAR_15 != VAR_13)
   FUNC_9(VAR_14, VAR_15, VAR_35);
  FUNC_4(VAR_14, VAR_15, VAR_33[VAR_18], 8);
  if (VAR_15 == VAR_12 || VAR_15 == VAR_13)
   for (VAR_17 = 0; VAR_17 < 2; VAR_17++)
    VAR_34[VAR_18][VAR_17] = FUNC_17(VAR_33[VAR_18][2 * VAR_17],
          VAR_33[VAR_18][2 * VAR_17 + 1]);
 }

 for (VAR_16 = 0; VAR_16 < 4; VAR_16++) {
  s32 VAR_36 = 0x100000;
  u8 VAR_37 = 0;
  s32 VAR_38 = 249;
  s32 VAR_39;
  for (VAR_18 = 0; VAR_18 < 4; VAR_18++) {
   if (VAR_15 == VAR_11)
    VAR_39 = FUNC_1(VAR_33[VAR_18][VAR_16] - VAR_20 * 8);
   else
    VAR_39 = FUNC_1(VAR_34[VAR_18][VAR_16 / 2] - VAR_20 * 8);

   if (VAR_39 < VAR_36) {
    VAR_36 = VAR_39;
    VAR_37 = VAR_18;
   }

   if (VAR_33[VAR_18][VAR_16] < VAR_38)
    VAR_38 = VAR_33[VAR_18][VAR_16];
  }
  VAR_31[VAR_16] = VAR_38;
  VAR_32[VAR_16] = VAR_37;
 }

 if (VAR_15 != VAR_13)
  FUNC_9(VAR_14, VAR_15, VAR_32);

 for (VAR_16 = 0; VAR_16 < 4; VAR_16++) {
  VAR_26[VAR_16] = (VAR_20 * 8) - VAR_33[VAR_32[VAR_16]][VAR_16];

  if (VAR_26[VAR_16] < 0)
   VAR_26[VAR_16] = -((FUNC_1(VAR_26[VAR_16]) + 4) / 8);
  else
   VAR_26[VAR_16] = (VAR_26[VAR_16] + 4) / 8;

  if (VAR_31[VAR_16] == 248)
   VAR_26[VAR_16] = VAR_20 - 32;

  VAR_27 = (VAR_16 / 2) ? 2 : 1;
  VAR_28 = (VAR_16 % 2) ? VAR_10 : VAR_9;

  FUNC_8(VAR_14, 0, VAR_26[VAR_16], VAR_27, VAR_28,
      VAR_15);
 }

 FUNC_14(VAR_14, VAR_0, 0xF8, VAR_19[0]);
 FUNC_14(VAR_14, VAR_3, 0xF8, VAR_19[1]);

 switch (VAR_19[2]) {
 case 1:
  FUNC_7(VAR_14, 1, VAR_11);
  break;
 case 4:
  FUNC_7(VAR_14, 1, VAR_12);
  break;
 case 2:
  FUNC_7(VAR_14, 1, VAR_13);
  break;
 default:
  FUNC_7(VAR_14, 1, VAR_13);
  break;
 }

 switch (VAR_19[3]) {
 case 1:
  FUNC_7(VAR_14, 2, VAR_11);
  break;
 case 4:
  FUNC_7(VAR_14, 2, VAR_12);
  break;
 default:
  FUNC_7(VAR_14, 2, VAR_13);
  break;
 }

 FUNC_7(VAR_14, 0, VAR_15);

 FUNC_12(VAR_14, VAR_6, VAR_25[0]);
 FUNC_16(VAR_14, VAR_1, VAR_24[0]);
 FUNC_12(VAR_14, VAR_7, VAR_25[1]);
 FUNC_16(VAR_14, VAR_4, VAR_24[1]);

 FUNC_3(VAR_14, 7, VAR_22);
 FUNC_10(VAR_14, VAR_29);


 FUNC_6(VAR_14);
}
