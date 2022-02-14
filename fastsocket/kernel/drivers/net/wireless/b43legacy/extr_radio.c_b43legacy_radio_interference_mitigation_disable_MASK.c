
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct b43legacy_phy {int* interfstack; int rev; int aci_enable; } ;
struct b43legacy_wldev {int bad_frames_preempt; struct b43legacy_phy phy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct b43legacy_wldev*) ;
 int FUNC_2 (struct b43legacy_wldev*) ;
 int FUNC_3 (struct b43legacy_wldev*,int) ;
 int FUNC_4 (struct b43legacy_wldev*,int,int) ;
 int FUNC_5 (struct b43legacy_wldev*,int ,int ) ;
 int FUNC_6 (struct b43legacy_wldev*,int ,int ,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(struct b43legacy_wldev *VAR_4,
      int VAR_5)
{
 struct b43legacy_phy *VAR_6 = &VAR_4->phy;
 u32 VAR_7;
 u32 *VAR_8 = VAR_6->interfstack;

 switch (VAR_5) {
 case 128:
  if (VAR_6->rev != 1) {
   FUNC_4(VAR_4, 0x042B,
         FUNC_3(VAR_4, 0x042B)
         & ~0x0800);
   FUNC_4(VAR_4, VAR_0,
         FUNC_3(VAR_4,
         VAR_0) | 0x4000);
   break;
  }
  FUNC_8(0x0078);
  FUNC_2(VAR_4);
  FUNC_8(0x0406);
  FUNC_4(VAR_4, 0x042B,
        FUNC_3(VAR_4, 0x042B) & ~0x0800);
  if (!VAR_4->bad_frames_preempt)
   FUNC_4(VAR_4, VAR_1,
         FUNC_3(VAR_4,
         VAR_1)
         & ~(1 << 11));
  FUNC_4(VAR_4, VAR_0,
        FUNC_3(VAR_4, VAR_0)
        | 0x4000);
  FUNC_8(0x04A0);
  FUNC_8(0x04A1);
  FUNC_8(0x04A2);
  FUNC_8(0x04A8);
  FUNC_8(0x04AB);
  FUNC_8(0x04A7);
  FUNC_8(0x04A3);
  FUNC_8(0x04A9);
  FUNC_8(0x0493);
  FUNC_8(0x04AA);
  FUNC_8(0x04AC);
  break;
 case 129:
  if (!(FUNC_3(VAR_4, 0x0033) & 0x0800))
   break;

  VAR_6->aci_enable = 0;

  FUNC_8(VAR_1);
  FUNC_8(VAR_0);
  FUNC_8(0x0033);
  FUNC_8(0x04A3);
  FUNC_8(0x04A9);
  FUNC_8(0x0493);
  FUNC_8(0x04AA);
  FUNC_8(0x04AC);
  FUNC_8(0x04A0);
  FUNC_8(0x04A7);
  if (VAR_6->rev >= 2) {
   FUNC_8(0x04C0);
   FUNC_8(0x04C1);
  } else
   FUNC_8(0x0406);
  FUNC_8(0x04A1);
  FUNC_8(0x04AB);
  FUNC_8(0x04A8);
  if (VAR_6->rev == 2) {
   FUNC_8(0x04AD);
   FUNC_8(0x04AE);
  } else if (VAR_6->rev >= 3) {
   FUNC_8(0x04AD);
   FUNC_8(0x0415);
   FUNC_8(0x0416);
   FUNC_8(0x0417);
   FUNC_7(0x1A00 + 0x2);
   FUNC_7(0x1A00 + 0x3);
  }
  FUNC_8(0x04A2);
  FUNC_8(0x04A8);
  FUNC_8(0x042B);
  FUNC_8(0x048C);
  VAR_7 = FUNC_5(VAR_4, VAR_2,
          VAR_3);
  if (VAR_7 & 0x800) {
   VAR_7 &= ~0x800;
   FUNC_6(VAR_4, VAR_2,
           VAR_3,
           VAR_7);
  }
  FUNC_1(VAR_4);
  break;
 default:
  FUNC_0(1);
 }
}
