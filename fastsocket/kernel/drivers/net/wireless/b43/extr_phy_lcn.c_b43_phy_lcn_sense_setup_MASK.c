
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_4__ {TYPE_1__* lcn; } ;
struct b43_wldev {TYPE_2__ phy; } ;
typedef enum lcn_sense_type { ____Placeholder_lcn_sense_type } lcn_sense_type ;
struct TYPE_3__ {int tx_pwr_curr_idx; } ;


 int FUNC_0 (int,int) ;


 int FUNC_1 (struct b43_wldev*,int,int) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;
 int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*) ;
 int FUNC_5 (struct b43_wldev*,int,int) ;
 int FUNC_6 (struct b43_wldev*,int,int,int) ;
 int FUNC_7 (struct b43_wldev*,int) ;
 int FUNC_8 (struct b43_wldev*,int,int) ;
 int FUNC_9 (struct b43_wldev*,int,int) ;
 int FUNC_10 (struct b43_wldev*,int) ;
 int FUNC_11 (struct b43_wldev*,int,int) ;
 int FUNC_12 (struct b43_wldev*,int,int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;

__attribute__((used)) static void FUNC_15(struct b43_wldev *VAR_0,
        enum lcn_sense_type VAR_1)
{
 u8 VAR_2, VAR_3, VAR_4;
 u16 VAR_5;
 u8 VAR_6;
 u8 VAR_7;

 u16 VAR_8[6][2] = {
  { 0x007, 0 }, { 0x0ff, 0 }, { 0x11f, 0 }, { 0x005, 0 },
  { 0x025, 0 }, { 0x112, 0 },
 };
 u16 VAR_9[14][2] = {
  { 0x503, 0 }, { 0x4a4, 0 }, { 0x4d0, 0 }, { 0x4d9, 0 },
  { 0x4da, 0 }, { 0x4a6, 0 }, { 0x938, 0 }, { 0x939, 0 },
  { 0x4d8, 0 }, { 0x4d0, 0 }, { 0x4d7, 0 }, { 0x4a5, 0 },
  { 0x40d, 0 }, { 0x4a2, 0 },
 };
 u16 VAR_10;

 FUNC_13(1);


 for (VAR_7 = 0; VAR_7 < 6; VAR_7++)
  VAR_8[VAR_7][1] = FUNC_10(VAR_0,
             VAR_8[VAR_7][0]);
 for (VAR_7 = 0; VAR_7 < 14; VAR_7++)
  VAR_9[VAR_7][1] = FUNC_7(VAR_0, VAR_9[VAR_7][0]);
 FUNC_4(VAR_0);
 VAR_10 = FUNC_10(VAR_0, 0x4a4);

 VAR_6 = VAR_0->phy.lcn->tx_pwr_curr_idx;



 FUNC_11(VAR_0, 0x007, 0x1);
 FUNC_11(VAR_0, 0x0ff, 0x10);
 FUNC_11(VAR_0, 0x11f, 0x4);

 FUNC_5(VAR_0, 0x503, ~0x1);
 FUNC_5(VAR_0, 0x503, ~0x4);
 FUNC_5(VAR_0, 0x4a4, ~0x4000);
 FUNC_5(VAR_0, 0x4a4, (u16) ~0x8000);
 FUNC_5(VAR_0, 0x4d0, ~0x20);
 FUNC_8(VAR_0, 0x4a5, 0xff);
 FUNC_6(VAR_0, 0x4a5, ~0x7000, 0x5000);
 FUNC_5(VAR_0, 0x4a5, ~0x700);
 FUNC_6(VAR_0, 0x40d, ~0xff, 64);
 FUNC_6(VAR_0, 0x40d, ~0x700, 0x600);
 FUNC_6(VAR_0, 0x4a2, ~0xff, 64);
 FUNC_6(VAR_0, 0x4a2, ~0x700, 0x600);
 FUNC_6(VAR_0, 0x4d9, ~0x70, 0x20);
 FUNC_6(VAR_0, 0x4d9, ~0x700, 0x300);
 FUNC_6(VAR_0, 0x4d9, ~0x7000, 0x1000);
 FUNC_5(VAR_0, 0x4da, ~0x1000);
 FUNC_8(VAR_0, 0x4da, 0x2000);
 FUNC_8(VAR_0, 0x4a6, 0x8000);

 FUNC_12(VAR_0, 0x025, 0xc);
 FUNC_11(VAR_0, 0x005, 0x8);
 FUNC_8(VAR_0, 0x938, 0x4);
 FUNC_8(VAR_0, 0x939, 0x4);
 FUNC_8(VAR_0, 0x4a4, 0x1000);


 FUNC_2(VAR_0, FUNC_0(0x8, 0x6), 0x640);

 switch (VAR_1) {
 case 129:
  FUNC_8(VAR_0, 0x4d7, 0x8);
  FUNC_6(VAR_0, 0x4d7, ~0x7000, 0x1000);
  VAR_2 = 8;
  VAR_3 = 0x4;
  VAR_4 = 2;
  FUNC_11(VAR_0, 0x082, 0x20);
  break;
 case 128:
  FUNC_8(VAR_0, 0x4d7, 0x8);
  FUNC_6(VAR_0, 0x4d7, ~0x7000, 0x3000);
  VAR_2 = 7;
  VAR_3 = 0xa;
  VAR_4 = 2;
  break;
 }
 VAR_5 = (0x200 | (VAR_2 << 4) | VAR_3);

 FUNC_8(VAR_0, 0x4d8, 0x1);
 FUNC_6(VAR_0, 0x4d8, ~(0x3ff << 2), VAR_5 << 2);
 FUNC_8(VAR_0, 0x4d8, 0x2);
 FUNC_6(VAR_0, 0x4d8, ~(0x7 << 12), VAR_4 << 12);
 FUNC_8(VAR_0, 0x4d0, 0x20);
 FUNC_12(VAR_0, 0x112, 0x6);

 FUNC_1(VAR_0, 1, 0);

 if (!(FUNC_7(VAR_0, 0x476) & 0x8000))
  FUNC_14(10);


 for (VAR_7 = 0; VAR_7 < 6; VAR_7++)
  FUNC_12(VAR_0, VAR_8[VAR_7][0],
    VAR_8[VAR_7][1]);
 for (VAR_7 = 0; VAR_7 < 14; VAR_7++)
  FUNC_9(VAR_0, VAR_9[VAR_7][0], VAR_9[VAR_7][1]);

 FUNC_12(VAR_0, 0x4a4, VAR_10);

 FUNC_3(VAR_0);

 FUNC_13(1);
}
