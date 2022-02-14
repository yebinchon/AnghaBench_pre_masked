
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nouveau_bios {int dummy; } ;


 int FUNC_0 (struct nouveau_bios*,int) ;
 int FUNC_1 (struct nouveau_bios*,int*,int*,int*,int*) ;

__attribute__((used)) static u16
FUNC_2(struct nouveau_bios *VAR_0, u16 VAR_1, u8 VAR_2,
     u8 *VAR_3, u8 *VAR_4, u8 *VAR_5, u8 *VAR_6)
{
 if (*VAR_3 >= 0x40) {
  VAR_1 = FUNC_1(VAR_0, VAR_3, VAR_4, VAR_5, VAR_6);
  *VAR_4 = *VAR_4 + (*VAR_6 * * VAR_5);
  *VAR_6 = FUNC_0(VAR_0, VAR_1 + 0x06);
  *VAR_5 = FUNC_0(VAR_0, VAR_1 + 0x07);
 }

 if (VAR_2 < *VAR_5)
  return VAR_1 + *VAR_4 + (VAR_2 * *VAR_6);

 return 0x0000;
}
