
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct b43legacy_wldev {TYPE_3__* dev; struct b43legacy_wl* wl; } ;
struct b43legacy_wl {int filter_flags; } ;
struct TYPE_4__ {int revision; } ;
struct TYPE_6__ {TYPE_2__* bus; TYPE_1__ id; } ;
struct TYPE_5__ {int chip_id; int chip_rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (struct b43legacy_wl*,int ) ;
 int FUNC_1 (struct b43legacy_wldev*,int ) ;
 int FUNC_2 (struct b43legacy_wldev*,int,int) ;
 int FUNC_3 (struct b43legacy_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct b43legacy_wldev *VAR_15)
{
 struct b43legacy_wl *VAR_16 = VAR_15->wl;
 u32 VAR_17;
 u16 VAR_18;

 VAR_17 = FUNC_1(VAR_15, VAR_7);

 VAR_17 &= ~VAR_0;
 VAR_17 &= ~VAR_5;
 VAR_17 &= ~VAR_4;
 VAR_17 &= ~VAR_3;
 VAR_17 &= ~VAR_6;
 VAR_17 &= ~VAR_1;
 VAR_17 |= VAR_2;

 if (FUNC_0(VAR_16, VAR_14))
  VAR_17 |= VAR_0;
 else if (FUNC_0(VAR_16, VAR_13))
  VAR_17 &= ~VAR_2;

 if (VAR_16->filter_flags & VAR_9)
  VAR_17 |= VAR_5;
 if (VAR_16->filter_flags & VAR_10)
  VAR_17 |= VAR_3;
 if (VAR_16->filter_flags & VAR_11)
  VAR_17 |= VAR_4;
 if (VAR_16->filter_flags & VAR_12)
  VAR_17 |= VAR_6;
 if (VAR_16->filter_flags & VAR_8)
  VAR_17 |= VAR_1;




 if (VAR_15->dev->id.revision <= 4)
  VAR_17 |= VAR_6;

 FUNC_3(VAR_15, VAR_7, VAR_17);

 VAR_18 = 2;
 if ((VAR_17 & VAR_2) &&
     !(VAR_17 & VAR_0)) {
  if (VAR_15->dev->bus->chip_id == 0x4306 &&
      VAR_15->dev->bus->chip_rev == 3)
   VAR_18 = 100;
  else
   VAR_18 = 50;
 }
 FUNC_2(VAR_15, 0x612, VAR_18);
}
