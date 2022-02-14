
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int chip; } ;
struct nouveau_bios {TYPE_1__ version; } ;


 int FUNC_0 (struct nouveau_bios*,int*,int*) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int FUNC_1 (struct nouveau_bios*,int) ;
 int FUNC_2 (struct nouveau_bios*,int) ;
 int FUNC_3 (struct nouveau_bios*,char*,...) ;

u8
FUNC_4(struct nouveau_bios *VAR_4, u8 VAR_5)
{
 u8 VAR_6, VAR_7;
 u16 VAR_8 = FUNC_0(VAR_4, &VAR_6, &VAR_7);
 if (VAR_8 && VAR_7 >= 6) {
  u16 VAR_9 = FUNC_2(VAR_4, VAR_8 + 4);
  if (VAR_9) {
   VAR_6 = FUNC_1(VAR_4, VAR_9);
   if (VAR_6 == 0x10) {
    if (VAR_5 < FUNC_1(VAR_4, VAR_9 + 3)) {
     VAR_9 += FUNC_1(VAR_4, VAR_9 + 1);
     VAR_9 += VAR_5;
     return FUNC_1(VAR_4, VAR_9);
    }

    return 0x00;
   }

   FUNC_3(VAR_4, "unknown sor map v%02x\n", VAR_6);
  }
 }

 if (VAR_4->version.chip == 0x84 || VAR_4->version.chip == 0x86)
  return VAR_0[VAR_5];
 if (VAR_4->version.chip == 0x92)
  return VAR_1[VAR_5];
 if (VAR_4->version.chip == 0x94 || VAR_4->version.chip == 0x96)
  return VAR_2[VAR_5];
 if (VAR_4->version.chip == 0x98)
  return VAR_3[VAR_5];

 FUNC_3(VAR_4, "missing sor map\n");
 return 0x00;
}
