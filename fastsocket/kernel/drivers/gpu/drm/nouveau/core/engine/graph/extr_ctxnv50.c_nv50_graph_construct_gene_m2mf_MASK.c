
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_grctx {struct nouveau_device* device; } ;
struct nouveau_device {int chipset; } ;


 int FUNC_0 (struct nouveau_grctx*,int,int) ;

__attribute__((used)) static void
FUNC_1(struct nouveau_grctx *VAR_0)
{

 struct nouveau_device *VAR_1 = VAR_0->device;
 int VAR_2 = 0;
 if (VAR_1->chipset < 0x92 || VAR_1->chipset == 0x98)
  VAR_2 = 1;

 FUNC_0 (VAR_0, 1, 0);
 FUNC_0 (VAR_0, 1, 0);
 FUNC_0 (VAR_0, 1, 0);
 FUNC_0 (VAR_0, 1, 0);
 FUNC_0 (VAR_0, 1, 0);
 FUNC_0 (VAR_0, 1, 0);
 FUNC_0 (VAR_0, 1, 0);
 FUNC_0 (VAR_0, 1, 0);
 FUNC_0 (VAR_0, 1, 0);
 FUNC_0 (VAR_0, 1, 0x21);
 FUNC_0 (VAR_0, 1, 1);
 FUNC_0 (VAR_0, 1, 0x2);
 FUNC_0 (VAR_0, 1, 0x100);
 FUNC_0 (VAR_0, 1, 0x100);
 FUNC_0 (VAR_0, 1, 1);
 FUNC_0 (VAR_0, 1, 0);
 FUNC_0 (VAR_0, 1, 0);
 FUNC_0 (VAR_0, 1, 1);
 FUNC_0 (VAR_0, 1, 0x2);
 FUNC_0 (VAR_0, 1, 0x100);
 FUNC_0 (VAR_0, 1, 0x100);
 FUNC_0 (VAR_0, 1, 1);
 FUNC_0 (VAR_0, 1, 0);
 FUNC_0 (VAR_0, 1, 0);
 FUNC_0 (VAR_0, 1, 0);
 FUNC_0 (VAR_0, 1, 0);

 if (VAR_2)
  FUNC_0(VAR_0, 0x40, 0);
 else
  FUNC_0(VAR_0, 0x100, 0);
 FUNC_0(VAR_0, 4, 0);

 if (VAR_2)
  FUNC_0(VAR_0, 0x400, 0);
 else
  FUNC_0(VAR_0, 0x800, 0);
 FUNC_0(VAR_0, 4, 0);

 FUNC_0(VAR_0, 0x40, 0);
 FUNC_0(VAR_0, 0x6, 0);
}
