
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
 int VAR_2;

 FUNC_0(VAR_0, 1, 4);
 FUNC_0(VAR_0, 1, 4);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 1, 0x80);
 FUNC_0(VAR_0, 1, 4);
 FUNC_0(VAR_0, 1, 0x80c14);
 FUNC_0(VAR_0, 1, 0);
 if (VAR_1->chipset == 0x50)
  FUNC_0(VAR_0, 1, 0x3ff);
 else
  FUNC_0(VAR_0, 1, 0x7ff);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 1, 0);
 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  switch (VAR_1->chipset) {
  case 0x50:
  case 0x86:
  case 0x98:
  case 0xaa:
  case 0xac:
   FUNC_0(VAR_0, 0xa0, 0);
   break;
  case 0x84:
  case 0x92:
  case 0x94:
  case 0x96:
   FUNC_0(VAR_0, 0x120, 0);
   break;
  case 0xa5:
  case 0xa8:
   FUNC_0(VAR_0, 0x100, 0);
   break;
  case 0xa0:
  case 0xa3:
  case 0xaf:
   FUNC_0(VAR_0, 0x400, 0);
   break;
  }
  FUNC_0(VAR_0, 4, 0);
  FUNC_0(VAR_0, 4, 0);
 }
 FUNC_0(VAR_0, 1, 4);
 FUNC_0(VAR_0, 1, 4);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 1, 0x80);
 FUNC_0(VAR_0, 1, 4);
 FUNC_0(VAR_0, 1, 1);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 1, 0x27);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 1, 0x26);
 FUNC_0(VAR_0, 1, 0);
}
