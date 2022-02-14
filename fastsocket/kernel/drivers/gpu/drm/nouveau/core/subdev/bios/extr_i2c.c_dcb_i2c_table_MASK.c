
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nouveau_bios {int dummy; } ;


 int FUNC_0 (struct nouveau_bios*,int*,int*,int*,int*) ;
 int FUNC_1 (struct nouveau_bios*,int) ;
 int FUNC_2 (struct nouveau_bios*,int) ;

u16
FUNC_3(struct nouveau_bios *VAR_0, u8 *VAR_1, u8 *VAR_2, u8 *VAR_3, u8 *VAR_4)
{
 u16 VAR_5 = 0x0000;
 u16 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_6) {
  if (*VAR_1 >= 0x15)
   VAR_5 = FUNC_2(VAR_0, VAR_6 + 2);
  if (*VAR_1 >= 0x30)
   VAR_5 = FUNC_2(VAR_0, VAR_6 + 4);
 }

 if (VAR_5 && *VAR_1 >= 0x30) {
  *VAR_1 = FUNC_1(VAR_0, VAR_5 + 0);
  *VAR_2 = FUNC_1(VAR_0, VAR_5 + 1);
  *VAR_3 = FUNC_1(VAR_0, VAR_5 + 2);
  *VAR_4 = FUNC_1(VAR_0, VAR_5 + 3);
 } else {
  *VAR_1 = *VAR_1;
  *VAR_2 = 0;
  *VAR_3 = 16;
  *VAR_4 = 4;
 }

 return VAR_5;
}
