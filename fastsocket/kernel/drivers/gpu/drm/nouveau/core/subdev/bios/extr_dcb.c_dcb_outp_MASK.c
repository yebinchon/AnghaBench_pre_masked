
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nouveau_bios {int dummy; } ;


 int FUNC_0 (struct nouveau_bios*,int*,int*,int*,int*) ;

u16
FUNC_1(struct nouveau_bios *VAR_0, u8 VAR_1, u8 *VAR_2, u8 *VAR_3)
{
 u8 VAR_4, VAR_5;
 u16 VAR_6 = FUNC_0(VAR_0, VAR_2, &VAR_4, &VAR_5, VAR_3);
 if (VAR_6 && VAR_1 < VAR_5)
  return VAR_6 + VAR_4 + (VAR_1 * *VAR_3);
 return 0x0000;
}
