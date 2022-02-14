
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nouveau_bios {int bmp_offset; } ;
struct dcb_i2c_entry {int type; int share; int drive; int sense; } ;







 int VAR_0 ;
 int FUNC_0 (struct nouveau_bios*,int,int*,int*) ;
 int FUNC_1 (struct nouveau_bios*,int) ;
 int FUNC_2 (struct nouveau_bios*,char*,int) ;

int
FUNC_3(struct nouveau_bios *VAR_1, u8 VAR_2, struct dcb_i2c_entry *VAR_3)
{
 u8 VAR_4, VAR_5;
 u16 VAR_6 = FUNC_0(VAR_1, VAR_2, &VAR_4, &VAR_5);
 if (VAR_6) {
  VAR_3->type = FUNC_1(VAR_1, VAR_6 + 3);
  VAR_3->share = 128;
  if (VAR_4 < 0x30) {
   VAR_3->type &= 0x07;
   if (VAR_3->type == 0x07)
    VAR_3->type = 128;
  }

  switch (VAR_3->type) {
  case 132:
   VAR_3->drive = FUNC_1(VAR_1, VAR_6 + 0);
   VAR_3->sense = FUNC_1(VAR_1, VAR_6 + 1);
   return 0;
  case 131:
   VAR_3->drive = FUNC_1(VAR_1, VAR_6 + 1);
   return 0;
  case 129:
  case 130:
   VAR_3->drive = FUNC_1(VAR_1, VAR_6 + 0) & 0x0f;
   if (FUNC_1(VAR_1, VAR_6 + 1) & 0x01) {
    VAR_3->share = FUNC_1(VAR_1, VAR_6 + 1) >> 1;
    VAR_3->share &= 0x0f;
   }
   return 0;
  case 128:
   return 0;
  default:
   FUNC_2(VAR_1, "unknown i2c type %d\n", VAR_3->type);
   VAR_3->type = 128;
   return 0;
  }
 }

 if (VAR_1->bmp_offset && VAR_2 < 2) {



  if (FUNC_1(VAR_1, VAR_1->bmp_offset + 5) < 4)
   VAR_6 = 0x0048;
  else
   VAR_6 = 0x0036 + VAR_1->bmp_offset;

  if (VAR_2 == 0) {
   VAR_3->drive = FUNC_1(VAR_1, VAR_6 + 4);
   if (!VAR_3->drive) VAR_3->drive = 0x3f;
   VAR_3->sense = FUNC_1(VAR_1, VAR_6 + 5);
   if (!VAR_3->sense) VAR_3->sense = 0x3e;
  } else
  if (VAR_2 == 1) {
   VAR_3->drive = FUNC_1(VAR_1, VAR_6 + 6);
   if (!VAR_3->drive) VAR_3->drive = 0x37;
   VAR_3->sense = FUNC_1(VAR_1, VAR_6 + 7);
   if (!VAR_3->sense) VAR_3->sense = 0x36;
  }

  VAR_3->type = 132;
  VAR_3->share = 128;
  return 0;
 }

 return -VAR_0;
}
