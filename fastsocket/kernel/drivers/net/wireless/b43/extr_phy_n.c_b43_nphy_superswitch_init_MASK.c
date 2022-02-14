
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int rev; } ;
struct b43_wldev {TYPE_6__* dev; TYPE_1__ phy; } ;
struct TYPE_12__ {int bus_type; TYPE_5__* sdev; TYPE_3__* bdev; } ;
struct TYPE_11__ {TYPE_4__* bus; } ;
struct TYPE_10__ {int chipco; } ;
struct TYPE_9__ {TYPE_2__* bus; } ;
struct TYPE_8__ {int drv_cc; } ;




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
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct b43_wldev*,int ,int,int) ;
 int FUNC_2 (struct b43_wldev*,int ,int ,int ) ;
 int FUNC_3 (struct b43_wldev*,int ,int) ;
 int FUNC_4 (struct b43_wldev*,int ,int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int,int) ;

__attribute__((used)) static void FUNC_7(struct b43_wldev *VAR_10, bool VAR_11)
{
 if (VAR_10->phy.rev >= 3) {
  if (!VAR_11)
   return;
  if (0 ) {
   FUNC_3(VAR_10, FUNC_0(9, 2), 0x211);
   FUNC_3(VAR_10, FUNC_0(9, 3), 0x222);
   FUNC_3(VAR_10, FUNC_0(9, 8), 0x144);
   FUNC_3(VAR_10, FUNC_0(9, 12), 0x188);
  }
 } else {
  FUNC_4(VAR_10, VAR_5, 0);
  FUNC_4(VAR_10, VAR_4, 0);

  switch (VAR_10->dev->bus_type) {
  }

  FUNC_2(VAR_10, VAR_3, ~VAR_0, 0);
  FUNC_1(VAR_10, VAR_2, ~0, 0xFC00);
  FUNC_1(VAR_10, VAR_1, (~0xFC00 & 0xFFFF),
         0);

  if (VAR_11) {
   FUNC_4(VAR_10, VAR_6, 0x2D8);
   FUNC_4(VAR_10, VAR_8, 0x301);
   FUNC_4(VAR_10, VAR_7, 0x2D8);
   FUNC_4(VAR_10, VAR_9, 0x301);
  }
 }
}
