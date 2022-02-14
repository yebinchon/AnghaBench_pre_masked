
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {scalar_t__ gmode; } ;
struct b43_wldev {TYPE_3__* dev; TYPE_1__ phy; } ;
struct TYPE_6__ {TYPE_2__* bus_sprom; } ;
struct TYPE_5__ {int ant_available_bg; int ant_available_a; } ;



u8 FUNC_0(struct b43_wldev *VAR_0,
      u8 VAR_1)
{
 u8 VAR_2;

 if (VAR_1 == 0) {

  return 0;
 }


 if (VAR_0->phy.gmode)
  VAR_2 = VAR_0->dev->bus_sprom->ant_available_bg;
 else
  VAR_2 = VAR_0->dev->bus_sprom->ant_available_a;

 if (!(VAR_2 & (1 << (VAR_1 - 1)))) {

  return 0;
 }

 return VAR_1;
}
