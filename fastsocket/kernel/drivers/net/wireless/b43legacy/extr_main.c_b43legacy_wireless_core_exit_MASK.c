
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct b43legacy_phy {int * lo_control; int * tssi2dbm; scalar_t__ dyn_tssi_tbl; } ;
struct b43legacy_wldev {TYPE_1__* dev; TYPE_2__* wl; struct b43legacy_phy phy; } ;
struct TYPE_4__ {int * current_beacon; } ;
struct TYPE_3__ {int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43legacy_wldev*) ;
 int FUNC_2 (struct b43legacy_wldev*) ;
 int FUNC_3 (struct b43legacy_wldev*) ;
 int FUNC_4 (struct b43legacy_wldev*) ;
 int FUNC_5 (struct b43legacy_wldev*,int) ;
 int FUNC_6 (struct b43legacy_wldev*,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct b43legacy_wldev*,int ) ;
 scalar_t__ FUNC_9 (struct b43legacy_wldev*) ;
 int FUNC_10 (struct b43legacy_wldev*,int ) ;
 int FUNC_11 (struct b43legacy_wldev*,int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_16(struct b43legacy_wldev *VAR_5)
{
 struct b43legacy_phy *VAR_6 = &VAR_5->phy;
 u32 VAR_7;

 FUNC_0(FUNC_9(VAR_5) > VAR_3);
 if (FUNC_9(VAR_5) != VAR_3)
  return;
 FUNC_8(VAR_5, VAR_4);


 VAR_7 = FUNC_6(VAR_5, VAR_2);
 VAR_7 &= ~VAR_1;
 VAR_7 |= VAR_0;
 FUNC_11(VAR_5, VAR_2, VAR_7);

 FUNC_3(VAR_5);
 FUNC_7(VAR_5->wl);
 FUNC_4(VAR_5);
 FUNC_2(VAR_5);
 FUNC_1(VAR_5);
 FUNC_5(VAR_5, 1);
 FUNC_10(VAR_5, 0);
 if (VAR_6->dyn_tssi_tbl)
  FUNC_13(VAR_6->tssi2dbm);
 FUNC_13(VAR_6->lo_control);
 VAR_6->lo_control = ((void*)0);
 if (VAR_5->wl->current_beacon) {
  FUNC_12(VAR_5->wl->current_beacon);
  VAR_5->wl->current_beacon = ((void*)0);
 }

 FUNC_15(VAR_5->dev, 0);
 FUNC_14(VAR_5->dev->bus);
}
