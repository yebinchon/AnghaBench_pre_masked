
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct b43legacy_phy {int radio_ver; int* nrssi_lt; int type; } ;
struct b43legacy_wldev {TYPE_3__* dev; struct b43legacy_phy phy; } ;
typedef int s8 ;
typedef int s32 ;
struct TYPE_6__ {TYPE_2__* bus; } ;
struct TYPE_4__ {int boardflags_lo; } ;
struct TYPE_5__ {TYPE_1__ sprom; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static s8 FUNC_0(struct b43legacy_wldev *VAR_2,
         u8 VAR_3, int VAR_4,
         int VAR_5, int VAR_6)
{
 struct b43legacy_phy *VAR_7 = &VAR_2->phy;
 s32 VAR_8;

 switch (VAR_7->radio_ver) {
 case 0x2050:
  if (VAR_4) {
   VAR_8 = VAR_3;
   if (VAR_8 > 127)
    VAR_8 -= 256;
   VAR_8 *= 73;
   VAR_8 /= 64;
   if (VAR_6)
    VAR_8 += 25;
   else
    VAR_8 -= 3;
  } else {
   if (VAR_2->dev->bus->sprom.boardflags_lo
       & VAR_0) {
    if (VAR_3 > 63)
     VAR_3 = 63;
    VAR_8 = VAR_7->nrssi_lt[VAR_3];
    VAR_8 = 31 - VAR_8;
    VAR_8 *= -131;
    VAR_8 /= 128;
    VAR_8 -= 57;
   } else {
    VAR_8 = VAR_3;
    VAR_8 = 31 - VAR_8;
    VAR_8 *= -149;
    VAR_8 /= 128;
    VAR_8 -= 68;
   }
   if (VAR_7->type == VAR_1 &&
       VAR_6)
    VAR_8 += 25;
  }
  break;
 case 0x2060:
  if (VAR_3 > 127)
   VAR_8 = VAR_3 - 256;
  else
   VAR_8 = VAR_3;
  break;
 default:
  VAR_8 = VAR_3;
  VAR_8 -= 11;
  VAR_8 *= 103;
  VAR_8 /= 64;
  if (VAR_5)
   VAR_8 -= 109;
  else
   VAR_8 -= 83;
 }

 return (s8)VAR_8;
}
