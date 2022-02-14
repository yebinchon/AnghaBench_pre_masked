
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct b43legacy_phy {int radio_ver; int type; int radio_rev; } ;
struct b43legacy_wldev {TYPE_4__* dev; struct b43legacy_phy phy; } ;
struct TYPE_8__ {TYPE_3__* bus; } ;
struct TYPE_6__ {int board_rev; } ;
struct TYPE_5__ {int type; } ;
struct TYPE_7__ {int chip_id; TYPE_2__ sprom; TYPE_1__ boardinfo; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct b43legacy_wldev*) ;

u16 FUNC_1(struct b43legacy_wldev *VAR_1)
{
 struct b43legacy_phy *VAR_2 = &VAR_1->phy;
 u16 VAR_3 = 0xFFFF;

 switch (VAR_2->radio_ver) {
 case 0x2053:
  switch (VAR_2->radio_rev) {
  case 1:
   VAR_3 = 6;
   break;
  }
  break;
 case 0x2050:
  switch (VAR_2->radio_rev) {
  case 0:
   VAR_3 = 5;
   break;
  case 1:
   if (VAR_2->type == VAR_0) {
    if (FUNC_0(VAR_1) &&
        VAR_1->dev->bus->boardinfo.type == 0x421 &&
        VAR_1->dev->bus->sprom.board_rev >= 30)
     VAR_3 = 3;
    else if (FUNC_0(VAR_1) &&
      VAR_1->dev->bus->boardinfo.type == 0x416)
     VAR_3 = 3;
    else
     VAR_3 = 1;
   } else {
    if (FUNC_0(VAR_1) &&
        VAR_1->dev->bus->boardinfo.type == 0x421 &&
        VAR_1->dev->bus->sprom.board_rev >= 30)
     VAR_3 = 7;
    else
     VAR_3 = 6;
   }
   break;
  case 2:
   if (VAR_2->type == VAR_0) {
    if (FUNC_0(VAR_1) &&
        VAR_1->dev->bus->boardinfo.type == 0x421 &&
        VAR_1->dev->bus->sprom.board_rev >= 30)
     VAR_3 = 3;
    else if (FUNC_0(VAR_1) &&
      VAR_1->dev->bus->boardinfo.type ==
      0x416)
     VAR_3 = 5;
    else if (VAR_1->dev->bus->chip_id == 0x4320)
     VAR_3 = 4;
    else
     VAR_3 = 3;
   } else
    VAR_3 = 6;
   break;
  case 3:
   VAR_3 = 5;
   break;
  case 4:
  case 5:
   VAR_3 = 1;
   break;
  case 6:
  case 7:
   VAR_3 = 5;
   break;
  case 8:
   VAR_3 = 0x1A;
   break;
  case 9:
  default:
   VAR_3 = 5;
  }
 }
 if (FUNC_0(VAR_1) &&
     VAR_1->dev->bus->boardinfo.type == 0x421) {
  if (VAR_1->dev->bus->sprom.board_rev < 0x43)
   VAR_3 = 2;
  else if (VAR_1->dev->bus->sprom.board_rev < 0x51)
   VAR_3 = 3;
 }
 if (VAR_3 == 0xFFFF)
  VAR_3 = 5;

 return VAR_3;
}
