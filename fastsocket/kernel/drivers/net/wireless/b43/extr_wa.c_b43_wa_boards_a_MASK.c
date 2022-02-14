
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rev; } ;
struct b43_wldev {TYPE_2__ phy; TYPE_1__* dev; } ;
struct TYPE_3__ {scalar_t__ board_vendor; scalar_t__ board_type; int board_rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct b43_wldev*,int ,int,int) ;
 int FUNC_1 (struct b43_wldev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_5)
{
 if (VAR_5->dev->board_vendor == VAR_2 &&
     VAR_5->dev->board_type == VAR_3 &&
     VAR_5->dev->board_rev < 0x30) {
  FUNC_1(VAR_5, 0x0010, 0xE000);
  FUNC_1(VAR_5, 0x0013, 0x0140);
  FUNC_1(VAR_5, 0x0014, 0x0280);
 } else {
  if (VAR_5->dev->board_type == VAR_4 &&
      VAR_5->dev->board_rev < 0x20) {
   FUNC_1(VAR_5, 0x0013, 0x0210);
   FUNC_1(VAR_5, 0x0014, 0x0840);
  } else {
   FUNC_1(VAR_5, 0x0013, 0x0140);
   FUNC_1(VAR_5, 0x0014, 0x0280);
  }
  if (VAR_5->phy.rev <= 4)
   FUNC_1(VAR_5, 0x0010, 0xE000);
  else
   FUNC_1(VAR_5, 0x0010, 0x2000);
  FUNC_0(VAR_5, VAR_0, 1, 0x0039);
  FUNC_0(VAR_5, VAR_1, 7, 0x0040);
 }
}
