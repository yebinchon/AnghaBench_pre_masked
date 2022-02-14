
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct b43_phy {int radio_ver; int type; struct b43_phy_g* g; } ;
struct b43_wldev {TYPE_2__* dev; struct b43_phy phy; } ;
struct b43_phy_g {int* nrssi_lt; } ;
typedef int s8 ;
typedef int s32 ;
struct TYPE_4__ {TYPE_1__* bus_sprom; } ;
struct TYPE_3__ {int boardflags_lo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static s8 FUNC_1(struct b43_wldev *VAR_2,
          u8 VAR_3, int VAR_4,
          int VAR_5, int VAR_6)
{
 struct b43_phy *VAR_7 = &VAR_2->phy;
 struct b43_phy_g *VAR_8 = VAR_7->g;
 s32 VAR_9;

 switch (VAR_7->radio_ver) {
 case 0x2050:
  if (VAR_4) {
   VAR_9 = VAR_3;
   if (VAR_9 > 127)
    VAR_9 -= 256;
   VAR_9 *= 73;
   VAR_9 /= 64;
   if (VAR_6)
    VAR_9 += 25;
   else
    VAR_9 -= 3;
  } else {
   if (VAR_2->dev->bus_sprom->
       boardflags_lo & VAR_0) {
    if (VAR_3 > 63)
     VAR_3 = 63;
    FUNC_0(VAR_7->type != VAR_1);
    VAR_9 = VAR_8->nrssi_lt[VAR_3];
    VAR_9 = 31 - VAR_9;
    VAR_9 *= -131;
    VAR_9 /= 128;
    VAR_9 -= 57;
   } else {
    VAR_9 = VAR_3;
    VAR_9 = 31 - VAR_9;
    VAR_9 *= -149;
    VAR_9 /= 128;
    VAR_9 -= 68;
   }
   if (VAR_7->type == VAR_1 && VAR_6)
    VAR_9 += 25;
  }
  break;
 case 0x2060:
  if (VAR_3 > 127)
   VAR_9 = VAR_3 - 256;
  else
   VAR_9 = VAR_3;
  break;
 default:
  VAR_9 = VAR_3;
  VAR_9 -= 11;
  VAR_9 *= 103;
  VAR_9 /= 64;
  if (VAR_5)
   VAR_9 -= 109;
  else
   VAR_9 -= 83;
 }

 return (s8) VAR_9;
}
