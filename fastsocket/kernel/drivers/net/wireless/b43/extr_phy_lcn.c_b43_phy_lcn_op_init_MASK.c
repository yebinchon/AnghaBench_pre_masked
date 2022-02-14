
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bcma_drv_cc {int dummy; } ;
struct TYPE_8__ {int radio_ver; int channel; } ;
struct b43_wldev {TYPE_4__ phy; int wl; TYPE_3__* dev; } ;
struct TYPE_7__ {TYPE_2__* bdev; } ;
struct TYPE_6__ {TYPE_1__* bus; } ;
struct TYPE_5__ {struct bcma_drv_cc drv_cc; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*) ;
 int FUNC_5 (struct b43_wldev*) ;
 int FUNC_6 (struct b43_wldev*) ;
 int FUNC_7 (struct b43_wldev*,int,int) ;
 int FUNC_8 (struct b43_wldev*,int,int,int) ;
 int FUNC_9 (struct b43_wldev*,int,int) ;
 int FUNC_10 (struct b43_wldev*,int,int) ;
 int FUNC_11 (struct b43_wldev*) ;
 int FUNC_12 (struct b43_wldev*,int ) ;
 int FUNC_13 (struct bcma_drv_cc*,int ,int ,int) ;
 int FUNC_14 (struct bcma_drv_cc*,int ,int,int) ;
 int FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct b43_wldev *VAR_1)
{
 struct bcma_drv_cc *VAR_2 = &VAR_1->dev->bdev->bus->drv_cc;

 FUNC_9(VAR_1, 0x44a, 0x80);
 FUNC_7(VAR_1, 0x44a, 0x7f);
 FUNC_9(VAR_1, 0x6d1, 0x80);
 FUNC_10(VAR_1, 0x6d0, 0x7);

 FUNC_2(VAR_1);

 FUNC_10(VAR_1, 0x60a, 0xa0);
 FUNC_10(VAR_1, 0x46a, 0x19);
 FUNC_8(VAR_1, 0x663, 0xFF00, 0x64);

 FUNC_5(VAR_1);

 FUNC_4(VAR_1);
 FUNC_3(VAR_1);

 if (VAR_1->phy.radio_ver == 0x2064)
  FUNC_11(VAR_1);
 else
  FUNC_0(1);

 if (FUNC_1(VAR_1->wl) == VAR_0)
  FUNC_6(VAR_1);

 FUNC_12(VAR_1, VAR_1->phy.channel);

 FUNC_14(VAR_2, 0, 0xf, 0x9);
 FUNC_13(VAR_2, 0, 0, 0x03cddddd);



 FUNC_9(VAR_1, 0x448, 0x4000);
 FUNC_15(100);
 FUNC_7(VAR_1, 0x448, ~0x4000);



 return 0;
}
