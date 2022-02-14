
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_phy {scalar_t__ type; int radio_ver; int radio_rev; } ;
struct b43_wldev {struct b43_bus_dev* dev; struct b43_phy phy; } ;
struct b43_rfatt {int with_padmix; int att; } ;
struct b43_bus_dev {scalar_t__ board_vendor; scalar_t__ board_type; int board_rev; int chip_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_0(struct b43_wldev *VAR_5,
          struct b43_rfatt *VAR_6)
{
 struct b43_bus_dev *VAR_7 = VAR_5->dev;
 struct b43_phy *VAR_8 = &VAR_5->phy;

 VAR_6->with_padmix = 0;

 if (VAR_5->dev->board_vendor == VAR_2 &&
     VAR_5->dev->board_type == VAR_3) {
  if (VAR_5->dev->board_rev < 0x43) {
   VAR_6->att = 2;
   return;
  } else if (VAR_5->dev->board_rev < 0x51) {
   VAR_6->att = 3;
   return;
  }
 }

 if (VAR_8->type == VAR_0) {
  VAR_6->att = 0x60;
  return;
 }

 switch (VAR_8->radio_ver) {
 case 0x2053:
  switch (VAR_8->radio_rev) {
  case 1:
   VAR_6->att = 6;
   return;
  }
  break;
 case 0x2050:
  switch (VAR_8->radio_rev) {
  case 0:
   VAR_6->att = 5;
   return;
  case 1:
   if (VAR_8->type == VAR_1) {
    if (VAR_7->board_vendor == VAR_2
        && VAR_7->board_type == VAR_3
        && VAR_7->board_rev >= 30)
     VAR_6->att = 3;
    else if (VAR_7->board_vendor ==
      VAR_2
      && VAR_7->board_type ==
      VAR_4)
     VAR_6->att = 3;
    else
     VAR_6->att = 1;
   } else {
    if (VAR_7->board_vendor == VAR_2
        && VAR_7->board_type == VAR_3
        && VAR_7->board_rev >= 30)
     VAR_6->att = 7;
    else
     VAR_6->att = 6;
   }
   return;
  case 2:
   if (VAR_8->type == VAR_1) {
    if (VAR_7->board_vendor == VAR_2
        && VAR_7->board_type == VAR_3
        && VAR_7->board_rev >= 30)
     VAR_6->att = 3;
    else if (VAR_7->board_vendor ==
      VAR_2
      && VAR_7->board_type ==
      VAR_4)
     VAR_6->att = 5;
    else if (VAR_7->chip_id == 0x4320)
     VAR_6->att = 4;
    else
     VAR_6->att = 3;
   } else
    VAR_6->att = 6;
   return;
  case 3:
   VAR_6->att = 5;
   return;
  case 4:
  case 5:
   VAR_6->att = 1;
   return;
  case 6:
  case 7:
   VAR_6->att = 5;
   return;
  case 8:
   VAR_6->att = 0xA;
   VAR_6->with_padmix = 1;
   return;
  case 9:
  default:
   VAR_6->att = 5;
   return;
  }
 }
 VAR_6->att = 5;
}
