
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct b43legacy_wldev {TYPE_2__* dev; } ;
struct TYPE_3__ {int revision; } ;
struct TYPE_4__ {TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct b43legacy_wldev*,int ) ;
 int FUNC_1 (struct b43legacy_wldev*,int ,int) ;
 int FUNC_2 (struct b43legacy_wldev*,int ,int ) ;
 int FUNC_3 (int) ;

void FUNC_4(struct b43legacy_wldev *VAR_4,
         int VAR_5, int VAR_6)
{
 int VAR_7;
 u32 VAR_8;


VAR_5 = 0;
VAR_6 = 1;

 if (VAR_5 == -1) {



 }
 if (VAR_6 == -1) {




 }
 VAR_8 = FUNC_0(VAR_4, VAR_2);
 if (VAR_5)
  VAR_8 |= VAR_1;
 else
  VAR_8 &= ~VAR_1;
 if (VAR_6)
  VAR_8 |= VAR_0;
 else
  VAR_8 &= ~VAR_0;
 FUNC_2(VAR_4, VAR_2, VAR_8);
 if (VAR_6 && VAR_4->dev->id.revision >= 5) {
  for (VAR_7 = 0; VAR_7 < 100; VAR_7++) {
   if (FUNC_1(VAR_4, VAR_3,
       0x0040) != 4)
    break;
   FUNC_3(10);
  }
 }
}
