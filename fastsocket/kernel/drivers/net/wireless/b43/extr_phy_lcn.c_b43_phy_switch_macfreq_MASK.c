
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ type; } ;
struct b43_wldev {TYPE_1__ phy; TYPE_2__* dev; } ;
struct TYPE_4__ {int chip_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_3, u8 VAR_4)
{
 if (VAR_3->dev->chip_id == 43224 || VAR_3->dev->chip_id == 43225) {
  switch (VAR_4) {
  case 2:
   FUNC_0(VAR_3, VAR_1, 0x2082);
   FUNC_0(VAR_3, VAR_0, 0x8);
   break;
  case 1:
   FUNC_0(VAR_3, VAR_1, 0x5341);
   FUNC_0(VAR_3, VAR_0, 0x8);
   break;
  default:
   FUNC_0(VAR_3, VAR_1, 0x8889);
   FUNC_0(VAR_3, VAR_0, 0x8);
   break;
  }
 } else if (VAR_3->phy.type == VAR_2) {
  switch (VAR_4) {
  case 1:
   FUNC_0(VAR_3, VAR_1, 0x7CE0);
   FUNC_0(VAR_3, VAR_0, 0xC);
   break;
  default:
   FUNC_0(VAR_3, VAR_1, 0xCCCD);
   FUNC_0(VAR_3, VAR_0, 0xC);
   break;
  }
 }
}
