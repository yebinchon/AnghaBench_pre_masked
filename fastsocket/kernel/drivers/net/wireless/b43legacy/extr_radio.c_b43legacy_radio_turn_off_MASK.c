
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {int rfover; int rfoverval; int valid; } ;
struct b43legacy_phy {int radio_on; scalar_t__ type; TYPE_3__ radio_off_context; } ;
struct b43legacy_wldev {int wl; TYPE_2__* dev; struct b43legacy_phy phy; } ;
struct TYPE_4__ {int revision; } ;
struct TYPE_5__ {TYPE_1__ id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct b43legacy_wldev*,int) ;
 int FUNC_1 (struct b43legacy_wldev*,int,int) ;
 int FUNC_2 (int ,char*) ;

void FUNC_3(struct b43legacy_wldev *VAR_3, bool VAR_4)
{
 struct b43legacy_phy *VAR_5 = &VAR_3->phy;

 if (!VAR_5->radio_on && !VAR_4)
  return;

 if (VAR_5->type == VAR_0 && VAR_3->dev->id.revision >= 5) {
  u16 VAR_6, VAR_7;

  VAR_6 = FUNC_0(VAR_3, VAR_1);
  VAR_7 = FUNC_0(VAR_3, VAR_2);
  if (!VAR_4) {
   VAR_5->radio_off_context.rfover = VAR_6;
   VAR_5->radio_off_context.rfoverval = VAR_7;
   VAR_5->radio_off_context.valid = 1;
  }
  FUNC_1(VAR_3, VAR_1, VAR_6 | 0x008C);
  FUNC_1(VAR_3, VAR_2,
        VAR_7 & 0xFF73);
 } else
  FUNC_1(VAR_3, 0x0015, 0xAA00);
 VAR_5->radio_on = 0;
 FUNC_2(VAR_3->wl, "Radio initialized\n");
}
