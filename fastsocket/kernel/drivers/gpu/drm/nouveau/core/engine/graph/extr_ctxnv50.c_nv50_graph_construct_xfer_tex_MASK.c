
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_grctx {struct nouveau_device* device; } ;
struct nouveau_device {int chipset; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nouveau_grctx*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct nouveau_grctx *VAR_0)
{
 struct nouveau_device *VAR_1 = VAR_0->device;
 FUNC_1(VAR_0, 2, 0);
 if (VAR_1->chipset != 0x50)
  FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 1);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 1);
 FUNC_1(VAR_0, 1, 0);
 if (VAR_1->chipset == 0x50)
  FUNC_1(VAR_0, 1, 0);
 else
  FUNC_1(VAR_0, 2, 0);
 FUNC_1(VAR_0, 1, 0x2a712488);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0x4085c000);
 FUNC_1(VAR_0, 1, 0x40);
 FUNC_1(VAR_0, 1, 0x100);
 FUNC_1(VAR_0, 1, 0x10100);
 FUNC_1(VAR_0, 1, 0x02800000);
 FUNC_1(VAR_0, 1, 0);
 if (VAR_1->chipset == 0x50) {
  FUNC_1(VAR_0, 1, 0);
  FUNC_1(VAR_0, 1, 0);
  FUNC_1(VAR_0, 1, 0);
  FUNC_1(VAR_0, 1, 0);
  FUNC_1(VAR_0, 1, 0);
 } else if (!FUNC_0(VAR_1->chipset)) {
  FUNC_1(VAR_0, 1, 0);
  FUNC_1(VAR_0, 1, 0);
  FUNC_1(VAR_0, 1, 0);
  FUNC_1(VAR_0, 1, 0);
  FUNC_1(VAR_0, 1, 0);
  FUNC_1(VAR_0, 1, 0);
  FUNC_1(VAR_0, 1, 0);
  FUNC_1(VAR_0, 1, 0);
 } else {
  FUNC_1(VAR_0, 0x6, 0);
 }
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);
}
