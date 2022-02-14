
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct b43legacy_phy {int channel; int txctl2; struct b43legacy_lopair* _lo_pairs; scalar_t__ gmode; } ;
struct b43legacy_wldev {int wl; struct b43legacy_phy phy; } ;
struct b43legacy_lopair {int low; int high; int used; } ;
typedef int control ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct b43legacy_wldev*) ;
 struct b43legacy_lopair* FUNC_1 (struct b43legacy_phy*,int,int) ;
 int FUNC_2 (struct b43legacy_wldev*,int const) ;
 int FUNC_3 (struct b43legacy_wldev*) ;
 int FUNC_4 (struct b43legacy_wldev*,struct b43legacy_lopair*,struct b43legacy_lopair*,int) ;
 int FUNC_5 (struct b43legacy_wldev*,int) ;
 int FUNC_6 (struct b43legacy_wldev*,int) ;
 int FUNC_7 (struct b43legacy_wldev*,int,int) ;
 int FUNC_8 (struct b43legacy_wldev*,int) ;
 int FUNC_9 (struct b43legacy_wldev*,int,int) ;
 int FUNC_10 (struct b43legacy_wldev*,int,int) ;
 int FUNC_11 (struct b43legacy_wldev*,int) ;
 scalar_t__ FUNC_12 (struct b43legacy_wldev*) ;
 int FUNC_13 () ;
 int FUNC_14 (struct b43legacy_wldev*,int,int) ;
 int FUNC_15 (int ,char*,int,int,int) ;
 int FUNC_16 (struct b43legacy_lopair*,struct b43legacy_lopair*,int) ;
 int FUNC_17 (int) ;

void FUNC_18(struct b43legacy_wldev *VAR_4)
{
 static const u8 VAR_5[10] = { 3, 1, 5, 7, 9, 2, 0, 4, 6, 8 };
 const int VAR_6 = (FUNC_12(VAR_4)
         < VAR_3);
 struct b43legacy_phy *VAR_7 = &VAR_4->phy;
 u16 VAR_8;
 u16 VAR_9;
 u16 VAR_10 = 0;
 u16 VAR_11;
 struct b43legacy_lopair VAR_12;
 struct b43legacy_lopair *VAR_13;
 u16 VAR_14;
 u16 VAR_15[16] = { 0 };
 u8 VAR_16;


 u8 VAR_17 = 0;
 u16 VAR_18;

 VAR_16 = VAR_7->channel;

 if (VAR_7->gmode) {
  VAR_15[0] = FUNC_5(VAR_4, VAR_2);
  VAR_15[1] = FUNC_5(VAR_4, 0x0802);
  FUNC_7(VAR_4, VAR_2, VAR_15[0]
        & 0x7FFF);
  FUNC_7(VAR_4, 0x0802, VAR_15[1] & 0xFFFC);
 }
 VAR_15[3] = FUNC_11(VAR_4, 0x03E2);
 FUNC_14(VAR_4, 0x03E2, VAR_15[3] | 0x8000);
 VAR_15[4] = FUNC_11(VAR_4, VAR_1);
 VAR_15[5] = FUNC_5(VAR_4, 0x15);
 VAR_15[6] = FUNC_5(VAR_4, 0x2A);
 VAR_15[7] = FUNC_5(VAR_4, 0x35);
 VAR_15[8] = FUNC_5(VAR_4, 0x60);
 VAR_15[9] = FUNC_8(VAR_4, 0x43);
 VAR_15[10] = FUNC_8(VAR_4, 0x7A);
 VAR_15[11] = FUNC_8(VAR_4, 0x52);
 if (VAR_7->gmode) {
  VAR_15[12] = FUNC_5(VAR_4, 0x0811);
  VAR_15[13] = FUNC_5(VAR_4, 0x0812);
  VAR_15[14] = FUNC_5(VAR_4, 0x0814);
  VAR_15[15] = FUNC_5(VAR_4, 0x0815);
 }
 FUNC_9(VAR_4, 6, 0);
 if (VAR_7->gmode) {
  FUNC_7(VAR_4, VAR_2, VAR_15[0]
        & 0x7FFF);
  FUNC_7(VAR_4, 0x0802, VAR_15[1] & 0xFFFC);
  FUNC_0(VAR_4);
 }
 FUNC_10(VAR_4, 0x0043, 0x0006);

 FUNC_6(VAR_4, 2);

 FUNC_14(VAR_4, VAR_1, 0x0000);
 FUNC_7(VAR_4, 0x002E, 0x007F);
 FUNC_7(VAR_4, 0x080F, 0x0078);
 FUNC_7(VAR_4, 0x0035, VAR_15[7] & ~(1 << 7));
 FUNC_10(VAR_4, 0x007A, VAR_15[10] & 0xFFF0);
 FUNC_7(VAR_4, 0x002B, 0x0203);
 FUNC_7(VAR_4, 0x002A, 0x08A3);
 if (VAR_7->gmode) {
  FUNC_7(VAR_4, 0x0814, VAR_15[14] | 0x0003);
  FUNC_7(VAR_4, 0x0815, VAR_15[15] & 0xFFFC);
  FUNC_7(VAR_4, 0x0811, 0x01B3);
  FUNC_7(VAR_4, 0x0812, 0x00B2);
 }
 if (VAR_6)
  FUNC_3(VAR_4);
 FUNC_7(VAR_4, 0x080F, 0x8078);


 VAR_12.low = 0;
 VAR_12.high = 0;
 for (VAR_8 = 0; VAR_8 < 10; VAR_8++) {

  VAR_9 = VAR_5[VAR_8];
  if (VAR_6) {
   if (VAR_9 == 3) {
    VAR_12.low = 0;
    VAR_12.high = 0;
   } else if (((VAR_9 % 2 == 1) && (VAR_10 % 2 == 1)) ||
      ((VAR_9 % 2 == 0) && (VAR_10 % 2 == 0))) {
    VAR_13 = FUNC_1(VAR_7, VAR_10,
           0);
    FUNC_16(&VAR_12, VAR_13, sizeof(VAR_12));
   } else {
    VAR_13 = FUNC_1(VAR_7, 3, 0);
    FUNC_16(&VAR_12, VAR_13, sizeof(VAR_12));
   }
  }

  for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
   if (VAR_6) {
    VAR_14 = VAR_9 * 2 + VAR_11;
    VAR_17 = 0;
    VAR_18 = 0;
    if (VAR_14 > 14) {
     VAR_18 = 1;
     if (VAR_14 > 17)
      VAR_17 = 1;
     if (VAR_14 > 19)
      VAR_17 = 2;
    }
   } else {
    VAR_13 = FUNC_1(VAR_7, VAR_9,
           VAR_11 * 2);
    if (!VAR_13->used)
     continue;
    FUNC_16(&VAR_12, VAR_13, sizeof(VAR_12));
    VAR_17 = 3;
    VAR_18 = 0;
   }
   FUNC_10(VAR_4, 0x43, VAR_9);
   FUNC_10(VAR_4, 0x52, VAR_7->txctl2);
   FUNC_17(10);
   FUNC_13();

   FUNC_6(VAR_4, VAR_11 * 2);

   VAR_14 = (VAR_15[10] & 0xFFF0);
   if (VAR_18)
    VAR_14 |= 0x0008;
   FUNC_10(VAR_4, 0x007A, VAR_14);

   VAR_13 = FUNC_1(VAR_7, VAR_9, VAR_11 * 2);
   FUNC_4(VAR_4, &VAR_12, VAR_13,
       VAR_17);
  }
  VAR_10 = VAR_9;
 }

 for (VAR_9 = 10; VAR_9 < 14; VAR_9++) {

  for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
   if (VAR_6) {
    VAR_13 = FUNC_1(VAR_7, VAR_9 - 9,
         VAR_11 * 2);
    FUNC_16(&VAR_12, VAR_13, sizeof(VAR_12));


    VAR_14 = (VAR_9 - 9) * 2 + VAR_11 - 5;
    VAR_17 = 0;
    VAR_18 = 0;
    if (VAR_14 > 14) {
     VAR_18 = 1;
     if (VAR_14 > 17)
      VAR_17 = 1;
     if (VAR_14 > 19)
      VAR_17 = 2;
    }
   } else {
    VAR_13 = FUNC_1(VAR_7, VAR_9 - 9,
           VAR_11 * 2);
    if (!VAR_13->used)
     continue;
    FUNC_16(&VAR_12, VAR_13, sizeof(VAR_12));
    VAR_17 = 3;
    VAR_18 = 0;
   }
   FUNC_10(VAR_4, 0x43, VAR_9 - 9);


   FUNC_10(VAR_4, 0x52,
           VAR_7->txctl2
           | (3 << 4));
   FUNC_17(10);
   FUNC_13();

   FUNC_6(VAR_4, VAR_11 * 2);

   VAR_14 = (VAR_15[10] & 0xFFF0);
   if (VAR_18)
    VAR_14 |= 0x0008;
   FUNC_10(VAR_4, 0x7A, VAR_14);

   VAR_13 = FUNC_1(VAR_7, VAR_9, VAR_11 * 2);
   FUNC_4(VAR_4, &VAR_12, VAR_13,
       VAR_17);
  }
 }


 if (VAR_7->gmode) {
  FUNC_7(VAR_4, 0x0015, 0xE300);
  FUNC_7(VAR_4, 0x0812, (VAR_17 << 8) | 0xA0);
  FUNC_17(5);
  FUNC_7(VAR_4, 0x0812, (VAR_17 << 8) | 0xA2);
  FUNC_17(2);
  FUNC_7(VAR_4, 0x0812, (VAR_17 << 8) | 0xA3);
  FUNC_13();
 } else
  FUNC_7(VAR_4, 0x0015, VAR_17 | 0xEFA0);
 FUNC_2(VAR_4, VAR_6);
 FUNC_7(VAR_4, 0x002E, 0x807F);
 if (VAR_7->gmode)
  FUNC_7(VAR_4, 0x002F, 0x0202);
 else
  FUNC_7(VAR_4, 0x002F, 0x0101);
 FUNC_14(VAR_4, VAR_1, VAR_15[4]);
 FUNC_7(VAR_4, 0x0015, VAR_15[5]);
 FUNC_7(VAR_4, 0x002A, VAR_15[6]);
 FUNC_7(VAR_4, 0x0035, VAR_15[7]);
 FUNC_7(VAR_4, 0x0060, VAR_15[8]);
 FUNC_10(VAR_4, 0x0043, VAR_15[9]);
 FUNC_10(VAR_4, 0x007A, VAR_15[10]);
 VAR_15[11] &= 0x00F0;
 VAR_15[11] |= (FUNC_8(VAR_4, 0x52) & 0x000F);
 FUNC_10(VAR_4, 0x52, VAR_15[11]);
 FUNC_14(VAR_4, 0x03E2, VAR_15[3]);
 if (VAR_7->gmode) {
  FUNC_7(VAR_4, 0x0811, VAR_15[12]);
  FUNC_7(VAR_4, 0x0812, VAR_15[13]);
  FUNC_7(VAR_4, 0x0814, VAR_15[14]);
  FUNC_7(VAR_4, 0x0815, VAR_15[15]);
  FUNC_7(VAR_4, VAR_2, VAR_15[0]);
  FUNC_7(VAR_4, 0x0802, VAR_15[1]);
 }
 FUNC_9(VAR_4, VAR_16, 1);
}
