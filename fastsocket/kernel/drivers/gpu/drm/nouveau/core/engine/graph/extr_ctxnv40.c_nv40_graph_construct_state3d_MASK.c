
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_grctx {struct nouveau_device* device; } ;
struct nouveau_device {int chipset; } ;


 int FUNC_0 (struct nouveau_grctx*,int,int) ;
 int FUNC_1 (struct nouveau_grctx*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct nouveau_grctx *VAR_0)
{
 struct nouveau_device *VAR_1 = VAR_0->device;
 int VAR_2;

 if (VAR_1->chipset == 0x40) {
  FUNC_0(VAR_0, 0x401880, 51);
  FUNC_1(VAR_0, 0x401940, 0x00000100);
 } else
 if (VAR_1->chipset == 0x46 || VAR_1->chipset == 0x47 ||
     VAR_1->chipset == 0x49 || VAR_1->chipset == 0x4b) {
  FUNC_0(VAR_0, 0x401880, 32);
  for (VAR_2 = 0; VAR_2 < 16; VAR_2++)
   FUNC_1(VAR_0, 0x401880 + (VAR_2 * 4), 0x00000111);
  if (VAR_1->chipset == 0x46)
   FUNC_0(VAR_0, 0x401900, 16);
  FUNC_0(VAR_0, 0x401940, 3);
 }
 FUNC_0(VAR_0, 0x40194c, 18);
 FUNC_1(VAR_0, 0x401954, 0x00000111);
 FUNC_1(VAR_0, 0x401958, 0x00080060);
 FUNC_1(VAR_0, 0x401974, 0x00000080);
 FUNC_1(VAR_0, 0x401978, 0xffff0000);
 FUNC_1(VAR_0, 0x40197c, 0x00000001);
 FUNC_1(VAR_0, 0x401990, 0x46400000);
 if (VAR_1->chipset == 0x40) {
  FUNC_0(VAR_0, 0x4019a0, 2);
  FUNC_0(VAR_0, 0x4019ac, 5);
 } else {
  FUNC_0(VAR_0, 0x4019a0, 1);
  FUNC_0(VAR_0, 0x4019b4, 3);
 }
 FUNC_1(VAR_0, 0x4019bc, 0xffff0000);
 switch (VAR_1->chipset) {
 case 0x46:
 case 0x47:
 case 0x49:
 case 0x4b:
  FUNC_0(VAR_0, 0x4019c0, 18);
  for (VAR_2 = 0; VAR_2 < 16; VAR_2++)
   FUNC_1(VAR_0, 0x4019c0 + (VAR_2 * 4), 0x88888888);
  break;
 }
 FUNC_0(VAR_0, 0x401a08, 8);
 FUNC_1(VAR_0, 0x401a10, 0x0fff0000);
 FUNC_1(VAR_0, 0x401a14, 0x0fff0000);
 FUNC_1(VAR_0, 0x401a1c, 0x00011100);
 FUNC_0(VAR_0, 0x401a2c, 4);
 FUNC_0(VAR_0, 0x401a44, 26);
 for (VAR_2 = 0; VAR_2 < 16; VAR_2++)
  FUNC_1(VAR_0, 0x401a44 + (VAR_2 * 4), 0x07ff0000);
 FUNC_1(VAR_0, 0x401a8c, 0x4b7fffff);
 if (VAR_1->chipset == 0x40) {
  FUNC_0(VAR_0, 0x401ab8, 3);
 } else {
  FUNC_0(VAR_0, 0x401ab8, 1);
  FUNC_0(VAR_0, 0x401ac0, 1);
 }
 FUNC_0(VAR_0, 0x401ad0, 8);
 FUNC_1(VAR_0, 0x401ad0, 0x30201000);
 FUNC_1(VAR_0, 0x401ad4, 0x70605040);
 FUNC_1(VAR_0, 0x401ad8, 0xb8a89888);
 FUNC_1(VAR_0, 0x401adc, 0xf8e8d8c8);
 FUNC_0(VAR_0, 0x401b10, VAR_1->chipset == 0x40 ? 2 : 1);
 FUNC_1(VAR_0, 0x401b10, 0x40100000);
 FUNC_0(VAR_0, 0x401b18, VAR_1->chipset == 0x40 ? 6 : 5);
 FUNC_1(VAR_0, 0x401b28, VAR_1->chipset == 0x40 ?
         0x00000004 : 0x00000000);
 FUNC_0(VAR_0, 0x401b30, 25);
 FUNC_1(VAR_0, 0x401b34, 0x0000ffff);
 FUNC_1(VAR_0, 0x401b68, 0x435185d6);
 FUNC_1(VAR_0, 0x401b6c, 0x2155b699);
 FUNC_1(VAR_0, 0x401b70, 0xfedcba98);
 FUNC_1(VAR_0, 0x401b74, 0x00000098);
 FUNC_1(VAR_0, 0x401b84, 0xffffffff);
 FUNC_1(VAR_0, 0x401b88, 0x00ff7000);
 FUNC_1(VAR_0, 0x401b8c, 0x0000ffff);
 if (VAR_1->chipset != 0x44 && VAR_1->chipset != 0x4a &&
     VAR_1->chipset != 0x4e)
  FUNC_0(VAR_0, 0x401b94, 1);
 FUNC_0(VAR_0, 0x401b98, 8);
 FUNC_1(VAR_0, 0x401b9c, 0x00ff0000);
 FUNC_0(VAR_0, 0x401bc0, 9);
 FUNC_1(VAR_0, 0x401be0, 0x00ffff00);
 FUNC_0(VAR_0, 0x401c00, 192);
 for (VAR_2 = 0; VAR_2 < 16; VAR_2++) {
  FUNC_1(VAR_0, 0x401c40 + (VAR_2 * 4), 0x00018488);
  FUNC_1(VAR_0, 0x401c80 + (VAR_2 * 4), 0x00028202);
  FUNC_1(VAR_0, 0x401d00 + (VAR_2 * 4), 0x0000aae4);
  FUNC_1(VAR_0, 0x401d40 + (VAR_2 * 4), 0x01012000);
  FUNC_1(VAR_0, 0x401d80 + (VAR_2 * 4), 0x00080008);
  FUNC_1(VAR_0, 0x401e00 + (VAR_2 * 4), 0x00100008);
 }
 for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
  FUNC_1(VAR_0, 0x401e90 + (VAR_2 * 4), 0x0001bc80);
  FUNC_1(VAR_0, 0x401ea0 + (VAR_2 * 4), 0x00000202);
  FUNC_1(VAR_0, 0x401ec0 + (VAR_2 * 4), 0x00000008);
  FUNC_1(VAR_0, 0x401ee0 + (VAR_2 * 4), 0x00080008);
 }
 FUNC_0(VAR_0, 0x400f5c, 3);
 FUNC_1(VAR_0, 0x400f5c, 0x00000002);
 FUNC_0(VAR_0, 0x400f84, 1);
}
