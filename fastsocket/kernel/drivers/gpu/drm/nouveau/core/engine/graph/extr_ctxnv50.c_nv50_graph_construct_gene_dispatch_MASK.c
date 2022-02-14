
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_grctx {struct nouveau_device* device; } ;
struct nouveau_device {int chipset; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct nouveau_grctx*,int,int ) ;

__attribute__((used)) static void
FUNC_2(struct nouveau_grctx *VAR_0)
{

 struct nouveau_device *VAR_1 = VAR_0->device;

 if (VAR_1->chipset == 0x50)
  FUNC_1(VAR_0, 5, 0);
 else if (!FUNC_0(VAR_1->chipset))
  FUNC_1(VAR_0, 6, 0);
 else
  FUNC_1(VAR_0, 4, 0);


 if (VAR_1->chipset == 0x50)
  FUNC_1(VAR_0, 8*3, 0);
 else
  FUNC_1(VAR_0, 0x100*3, 0);

 FUNC_1(VAR_0, 3, 0);

 if (FUNC_0(VAR_1->chipset))
  FUNC_1(VAR_0, 3, 0);


 FUNC_1(VAR_0, 9, 0);

 FUNC_1(VAR_0, 9, 0);

 FUNC_1(VAR_0, 9, 0);

 FUNC_1(VAR_0, 9, 0);

 if (VAR_1->chipset < 0x90)
  FUNC_1(VAR_0, 4, 0);

 FUNC_1(VAR_0, 2, 0);

 FUNC_1(VAR_0, 6*2, 0);
 FUNC_1(VAR_0, 2, 0);

 FUNC_1(VAR_0, 2, 0);

 FUNC_1(VAR_0, 6*2, 0);
 FUNC_1(VAR_0, 2, 0);

 if (VAR_1->chipset == 0x50)
  FUNC_1(VAR_0, 0x1c, 0);
 else if (VAR_1->chipset < 0xa0)
  FUNC_1(VAR_0, 0x1e, 0);
 else
  FUNC_1(VAR_0, 0x22, 0);

 FUNC_1(VAR_0, 0x15, 0);
}
