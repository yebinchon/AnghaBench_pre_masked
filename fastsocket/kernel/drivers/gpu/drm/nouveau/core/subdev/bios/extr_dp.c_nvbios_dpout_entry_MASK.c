
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nouveau_bios {int dummy; } ;


 int FUNC_0 (struct nouveau_bios*,int) ;
 int FUNC_1 (struct nouveau_bios*,int) ;
 int FUNC_2 (struct nouveau_bios*,int*,int*,int*,int*) ;

__attribute__((used)) static u16
FUNC_3(struct nouveau_bios *VAR_0, u8 VAR_1,
     u8 *VAR_2, u8 *VAR_3, u8 *VAR_4, u8 *VAR_5)
{
 u16 VAR_6 = FUNC_2(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6 && VAR_1 < *VAR_4) {
  u16 VAR_7 = FUNC_1(VAR_0, VAR_6 + *VAR_3 + VAR_1 * *VAR_5);
  switch (*VAR_2 * !!VAR_7) {
  case 0x21:
  case 0x30:
   *VAR_3 = FUNC_0(VAR_0, VAR_6 + 0x04);
   *VAR_5 = FUNC_0(VAR_0, VAR_6 + 0x05);
   *VAR_4 = FUNC_0(VAR_0, VAR_7 + 0x04);
   break;
  case 0x40:
   *VAR_3 = FUNC_0(VAR_0, VAR_6 + 0x04);
   *VAR_4 = 0;
   *VAR_5 = 0;
   break;
  default:
   break;
  }
  return VAR_7;
 }
 *VAR_2 = 0x00;
 return 0x0000;
}
