
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct b43legacy_phy {int analog; int radio_ver; int channel; scalar_t__ gmode; } ;
struct b43legacy_wldev {scalar_t__ bad_frames_preempt; TYPE_3__* dev; struct b43legacy_phy phy; } ;
struct TYPE_6__ {TYPE_2__* bus; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_5__ {TYPE_1__ boardinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b43legacy_wldev*,int) ;
 int FUNC_1 (struct b43legacy_wldev*,int,int) ;
 int FUNC_2 (struct b43legacy_wldev*,int) ;
 int FUNC_3 (struct b43legacy_wldev*,int,int ) ;
 int FUNC_4 (struct b43legacy_wldev*,int,int,int) ;
 int FUNC_5 (struct b43legacy_wldev*,int,int) ;
 int FUNC_6 (struct b43legacy_wldev*,int) ;
 int FUNC_7 (struct b43legacy_wldev*,int,int) ;
 int FUNC_8 (struct b43legacy_wldev*) ;

__attribute__((used)) static void FUNC_9(struct b43legacy_wldev *VAR_2)
{
 struct b43legacy_phy *VAR_3 = &VAR_2->phy;
 u16 VAR_4;
 u16 VAR_5;
 u8 VAR_6;

 if (VAR_3->analog == 1)
  FUNC_5(VAR_2, 0x007A,
     FUNC_2(VAR_2, 0x007A)
     | 0x0050);
 if (!FUNC_8(VAR_2) &&
     (VAR_2->dev->bus->boardinfo.type != 0x0416)) {
  VAR_5 = 0x2120;
  for (VAR_4 = 0x00A8 ; VAR_4 < 0x00C7; VAR_4++) {
   FUNC_1(VAR_2, VAR_4, VAR_5);
   VAR_5 += 0x0202;
  }
 }
 FUNC_1(VAR_2, 0x0035,
       (FUNC_0(VAR_2, 0x0035) & 0xF0FF)
       | 0x0700);
 if (VAR_3->radio_ver == 0x2050)
  FUNC_1(VAR_2, 0x0038, 0x0667);

 if (VAR_3->gmode) {
  if (VAR_3->radio_ver == 0x2050) {
   FUNC_5(VAR_2, 0x007A,
     FUNC_2(VAR_2, 0x007A)
     | 0x0020);
   FUNC_5(VAR_2, 0x0051,
     FUNC_2(VAR_2, 0x0051)
     | 0x0004);
  }
  FUNC_7(VAR_2, VAR_0, 0x0000);

  FUNC_1(VAR_2, 0x0802, FUNC_0(VAR_2, 0x0802)
        | 0x0100);
  FUNC_1(VAR_2, 0x042B, FUNC_0(VAR_2, 0x042B)
        | 0x2000);

  FUNC_1(VAR_2, 0x001C, 0x186A);

  FUNC_1(VAR_2, 0x0013, (FUNC_0(VAR_2,
        0x0013) & 0x00FF) | 0x1900);
  FUNC_1(VAR_2, 0x0035, (FUNC_0(VAR_2,
        0x0035) & 0xFFC0) | 0x0064);
  FUNC_1(VAR_2, 0x005D, (FUNC_0(VAR_2,
        0x005D) & 0xFF80) | 0x000A);
  FUNC_1(VAR_2, 0x5B, 0x0000);
  FUNC_1(VAR_2, 0x5C, 0x0000);
 }

 if (VAR_2->bad_frames_preempt)
  FUNC_1(VAR_2, VAR_1,
        FUNC_0(VAR_2,
        VAR_1) | (1 << 12));

 if (VAR_3->analog == 1) {
  FUNC_1(VAR_2, 0x0026, 0xCE00);
  FUNC_1(VAR_2, 0x0021, 0x3763);
  FUNC_1(VAR_2, 0x0022, 0x1BC3);
  FUNC_1(VAR_2, 0x0023, 0x06F9);
  FUNC_1(VAR_2, 0x0024, 0x037E);
 } else
  FUNC_1(VAR_2, 0x0026, 0xCC00);
 FUNC_1(VAR_2, 0x0030, 0x00C6);
 FUNC_7(VAR_2, 0x03EC, 0x3F22);

 if (VAR_3->analog == 1)
  FUNC_1(VAR_2, 0x0020, 0x3E1C);
 else
  FUNC_1(VAR_2, 0x0020, 0x301C);

 if (VAR_3->analog == 0)
  FUNC_7(VAR_2, 0x03E4, 0x3000);

 VAR_6 = (VAR_3->channel == 0xFF) ? 1 : VAR_3->channel;

 FUNC_3(VAR_2, 7, 0);

 if (VAR_3->radio_ver != 0x2050) {
  FUNC_5(VAR_2, 0x0075, 0x0080);
  FUNC_5(VAR_2, 0x0079, 0x0081);
 }

 FUNC_5(VAR_2, 0x0050, 0x0020);
 FUNC_5(VAR_2, 0x0050, 0x0023);

 if (VAR_3->radio_ver == 0x2050) {
  FUNC_5(VAR_2, 0x0050, 0x0020);
  FUNC_5(VAR_2, 0x005A, 0x0070);
 }

 FUNC_5(VAR_2, 0x005B, 0x007B);
 FUNC_5(VAR_2, 0x005C, 0x00B0);

 FUNC_5(VAR_2, 0x007A, FUNC_2(VAR_2,
    0x007A) | 0x0007);

 FUNC_3(VAR_2, VAR_6, 0);

 FUNC_1(VAR_2, 0x0014, 0x0080);
 FUNC_1(VAR_2, 0x0032, 0x00CA);
 FUNC_1(VAR_2, 0x002A, 0x88A3);

 FUNC_4(VAR_2, 0xFFFF, 0xFFFF, 0xFFFF);

 if (VAR_3->radio_ver == 0x2050)
  FUNC_5(VAR_2, 0x005D, 0x000D);

 FUNC_7(VAR_2, 0x03E4, (FUNC_6(VAR_2, 0x03E4) &
     0xFFC0) | 0x0004);
}
