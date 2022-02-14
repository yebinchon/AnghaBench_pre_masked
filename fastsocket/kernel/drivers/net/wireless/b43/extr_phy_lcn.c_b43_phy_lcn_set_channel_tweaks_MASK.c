
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct bcma_drv_cc {int dummy; } ;
struct b43_wldev {TYPE_3__* dev; } ;
struct TYPE_6__ {TYPE_2__* bdev; } ;
struct TYPE_5__ {TYPE_1__* bus; } ;
struct TYPE_4__ {struct bcma_drv_cc drv_cc; } ;


 int VAR_0 ;
 int FUNC_0 (struct b43_wldev*,int) ;
 int FUNC_1 (struct b43_wldev*,int,int,int) ;
 int FUNC_2 (struct b43_wldev*,int,int) ;
 int FUNC_3 (struct b43_wldev*,int,int) ;
 int FUNC_4 (struct bcma_drv_cc*,int ,int) ;
 int FUNC_5 (struct bcma_drv_cc*,int,int,int) ;
 int FUNC_6 (struct bcma_drv_cc*,int,int) ;

__attribute__((used)) static void FUNC_7(struct b43_wldev *VAR_1, int VAR_2)
{
 struct bcma_drv_cc *VAR_3 = &VAR_1->dev->bdev->bus->drv_cc;

 FUNC_1(VAR_1, 0x448, ~0x300, (VAR_2 == 14) ? 0x200 : 0x100);

 if (VAR_2 == 1 || VAR_2 == 2 || VAR_2 == 3 || VAR_2 == 4 ||
     VAR_2 == 9 || VAR_2 == 10 || VAR_2 == 11 || VAR_2 == 12) {
  FUNC_6(VAR_3, 0x2, 0x03000c04);
  FUNC_5(VAR_3, 0x3, 0x00ffffff, 0x0);
  FUNC_6(VAR_3, 0x4, 0x200005c0);

  FUNC_4(VAR_3, VAR_0, 0x400);

  FUNC_3(VAR_1, 0x942, 0);

  FUNC_0(VAR_1, 0);
  FUNC_1(VAR_1, 0x424, (u16) ~0xff00, 0x1b00);
  FUNC_3(VAR_1, 0x425, 0x5907);
 } else {
  FUNC_6(VAR_3, 0x2, 0x03140c04);
  FUNC_5(VAR_3, 0x3, 0x00ffffff, 0x333333);
  FUNC_6(VAR_3, 0x4, 0x202c2820);

  FUNC_4(VAR_3, VAR_0, 0x400);

  FUNC_3(VAR_1, 0x942, 0);

  FUNC_0(VAR_1, 1);
  FUNC_1(VAR_1, 0x424, (u16) ~0xff00, 0x1f00);
  FUNC_3(VAR_1, 0x425, 0x590a);
 }

 FUNC_2(VAR_1, 0x44a, 0x44);
 FUNC_3(VAR_1, 0x44a, 0x80);
}
