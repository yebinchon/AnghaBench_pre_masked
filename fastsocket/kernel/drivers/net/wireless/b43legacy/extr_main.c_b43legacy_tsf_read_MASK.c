
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct b43legacy_wldev {TYPE_2__* dev; } ;
struct TYPE_3__ {int revision; } ;
struct TYPE_4__ {TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct b43legacy_wldev*,int ) ;
 scalar_t__ FUNC_1 (struct b43legacy_wldev*,int ) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(struct b43legacy_wldev *VAR_6, u64 *VAR_7)
{






 if (VAR_6->dev->id.revision >= 3) {
  u32 VAR_8;
  u32 VAR_9;
  u32 VAR_10;

  do {
   VAR_9 = FUNC_1(VAR_6,
     VAR_0);
   VAR_8 = FUNC_1(VAR_6,
     VAR_1);
   VAR_10 = FUNC_1(VAR_6,
     VAR_0);
  } while (FUNC_2(VAR_9 != VAR_10));

  *VAR_7 = VAR_9;
  *VAR_7 <<= 32;
  *VAR_7 |= VAR_8;
 } else {
  u64 VAR_11;
  u16 VAR_12;
  u16 VAR_13;
  u16 VAR_14;
  u16 VAR_15;
  u16 VAR_16;
  u16 VAR_17;
  u16 VAR_18;

  do {
   VAR_15 = FUNC_0(VAR_6, VAR_5);
   VAR_14 = FUNC_0(VAR_6, VAR_4);
   VAR_13 = FUNC_0(VAR_6, VAR_3);
   VAR_12 = FUNC_0(VAR_6, VAR_2);

   VAR_18 = FUNC_0(VAR_6, VAR_5);
   VAR_17 = FUNC_0(VAR_6, VAR_4);
   VAR_16 = FUNC_0(VAR_6, VAR_3);
  } while (VAR_15 != VAR_18 || VAR_14 != VAR_17 || VAR_13 != VAR_16);

  *VAR_7 = VAR_15;
  *VAR_7 <<= 48;
  VAR_11 = VAR_14;
  VAR_11 <<= 32;
  *VAR_7 |= VAR_11;
  VAR_11 = VAR_13;
  VAR_11 <<= 16;
  *VAR_7 |= VAR_11;
  *VAR_7 |= VAR_12;
 }
}
