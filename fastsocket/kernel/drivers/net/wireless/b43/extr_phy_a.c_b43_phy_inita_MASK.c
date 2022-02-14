
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct b43_phy {scalar_t__ type; int rev; scalar_t__ gmode; } ;
struct b43_wldev {TYPE_2__* dev; struct b43_phy phy; } ;
struct TYPE_4__ {scalar_t__ board_vendor; scalar_t__ board_type; TYPE_1__* bus_sprom; } ;
struct TYPE_3__ {int boardflags_lo; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (struct b43_wldev*,int,int) ;
 int FUNC_3 (struct b43_wldev*,int,int,int) ;
 int FUNC_4 (struct b43_wldev*,int) ;
 int FUNC_5 (struct b43_wldev*,int ) ;
 int FUNC_6 (struct b43_wldev*,int,int) ;
 int FUNC_7 (struct b43_wldev*) ;
 int FUNC_8 (struct b43_wldev*) ;
 int FUNC_9 (struct b43_wldev*) ;
 int FUNC_10 (struct b43_wldev*) ;
 int FUNC_11 () ;

void FUNC_12(struct b43_wldev *VAR_10)
{
 struct b43_phy *VAR_11 = &VAR_10->phy;




 FUNC_1((VAR_11->type != VAR_1) &&
      (VAR_11->type != VAR_2));

 FUNC_11();

 if (VAR_11->rev >= 6) {
  if (VAR_11->type == VAR_1)
   FUNC_2(VAR_10, FUNC_0(0x1B), ~0x1000);
  if (FUNC_4(VAR_10, VAR_5) & VAR_6)
   FUNC_6(VAR_10, VAR_5, 0x0010);
  else
   FUNC_2(VAR_10, VAR_5, ~0x1010);
 }

 FUNC_9(VAR_10);

 if (VAR_11->type == VAR_1) {
  if (VAR_11->gmode && (VAR_11->rev < 3))
   FUNC_6(VAR_10, 0x0034, 0x0001);
  FUNC_5(VAR_10, 0);

  FUNC_6(VAR_10, VAR_3, VAR_4);

  FUNC_8(VAR_10);

  if ((VAR_10->dev->board_vendor == VAR_7) &&
      ((VAR_10->dev->board_type == VAR_8) ||
       (VAR_10->dev->board_type == VAR_9))) {
   ;
  }

  if (VAR_11->rev >= 3)
   FUNC_7(VAR_10);

  FUNC_10(VAR_10);


 }

 if ((VAR_11->type == VAR_2) &&
     (VAR_10->dev->bus_sprom->boardflags_lo & VAR_0)) {
  FUNC_3(VAR_10, FUNC_0(0x6E), 0xE000, 0x3CF);
 }
}
