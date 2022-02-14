
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct b43_phy {int radio_ver; int radio_rev; int channel; } ;
struct b43_wldev {TYPE_2__* dev; struct b43_phy phy; } ;
struct TYPE_4__ {TYPE_1__* bus_sprom; } ;
struct TYPE_3__ {int boardflags_lo; } ;


 int VAR_0 ;
 int FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*,int) ;

__attribute__((used)) static void FUNC_4(struct b43_wldev *VAR_1)
{
 struct b43_phy *VAR_2 = &VAR_1->phy;

 if (!(VAR_1->dev->bus_sprom->boardflags_lo & VAR_0))
  return;

 FUNC_2(VAR_1);
 FUNC_0(VAR_1);
 if ((VAR_2->radio_ver == 0x2050) && (VAR_2->radio_rev == 8)) {
  u8 VAR_3 = VAR_2->channel;


  if (VAR_3 >= 8)
   FUNC_3(VAR_1, 1);
  else
   FUNC_3(VAR_1, 13);
  FUNC_3(VAR_1, VAR_3);
 }
 FUNC_1(VAR_1);
}
