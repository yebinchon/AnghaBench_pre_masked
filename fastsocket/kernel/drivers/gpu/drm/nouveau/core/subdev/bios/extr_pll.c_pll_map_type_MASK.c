
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct pll_mapping {scalar_t__ reg; int type; } ;
struct nouveau_bios {int dummy; } ;


 int FUNC_0 (struct nouveau_bios*,int) ;
 scalar_t__ FUNC_1 (struct nouveau_bios*,int) ;
 int FUNC_2 (struct nouveau_bios*,int*,int*,int*,int*) ;
 struct pll_mapping* FUNC_3 (struct nouveau_bios*) ;

__attribute__((used)) static u16
FUNC_4(struct nouveau_bios *VAR_0, u8 VAR_1, u32 *VAR_2, u8 *VAR_3, u8 *VAR_4)
{
 struct pll_mapping *VAR_5;
 u8 VAR_6, VAR_7;
 u16 VAR_8;

 VAR_8 = FUNC_2(VAR_0, VAR_3, &VAR_6, &VAR_7, VAR_4);
 if (VAR_8 && *VAR_3 >= 0x30) {
  VAR_8 += VAR_6;
  while (VAR_7--) {
   if (FUNC_0(VAR_0, VAR_8 + 0) == VAR_1) {
    *VAR_2 = FUNC_1(VAR_0, VAR_8 + 3);
    return VAR_8;
   }
   VAR_8 += *VAR_4;
  }
  return 0x0000;
 }

 VAR_5 = FUNC_3(VAR_0);
 while (VAR_5->reg) {
  if (VAR_5->type == VAR_1 && *VAR_3 >= 0x20) {
   u16 VAR_9 = (VAR_8 += VAR_6);
   *VAR_2 = VAR_5->reg;
   while (VAR_7--) {
    if (FUNC_1(VAR_0, VAR_8) == VAR_5->reg)
     return VAR_8;
    VAR_8 += *VAR_4;
   }
   return VAR_9;
  } else
  if (VAR_5->type == VAR_1) {
   *VAR_2 = VAR_5->reg;
   return VAR_8 + 1;
  }
  VAR_5++;
 }

 return 0x0000;
}
