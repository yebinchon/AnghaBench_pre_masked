
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nouveau_bios {int dummy; } ;


 int FUNC_0 (struct nouveau_bios*,int*,int*) ;
 int FUNC_1 (struct nouveau_bios*,int) ;
 int FUNC_2 (struct nouveau_bios*,int) ;
 int FUNC_3 (struct nouveau_bios*,char*,int) ;

u8
FUNC_4(struct nouveau_bios *VAR_0, u8 VAR_1)
{
 u8 VAR_2, VAR_3;
 u16 VAR_4 = FUNC_0(VAR_0, &VAR_2, &VAR_3);
 if (VAR_4 && VAR_3 >= 8) {
  u16 VAR_5 = FUNC_2(VAR_0, VAR_4 + 6);
  if (VAR_5) {
   VAR_2 = FUNC_1(VAR_0, VAR_5);
   if (VAR_2 == 0x10) {
    if (VAR_1 < FUNC_1(VAR_0, VAR_5 + 3)) {
     VAR_5 += FUNC_1(VAR_0, VAR_5 + 1);
     VAR_5 += VAR_1;
     return FUNC_1(VAR_0, VAR_5);
    }

    return 0x00;
   }

   FUNC_3(VAR_0, "unknown ddc map v%02x\n", VAR_2);
  }
 }


 return (VAR_1 << 4) | VAR_1;
}
