
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

__attribute__((used)) static u16
FUNC_3(struct nouveau_bios *VAR_0, u8 *VAR_1, u8 *VAR_2, u8 *VAR_3, u8 *VAR_4)
{
 u8 VAR_5, VAR_6, VAR_7, VAR_8;
 u16 VAR_9, VAR_10 = 0;

 VAR_9 = FUNC_0(VAR_0, &VAR_5, &VAR_6, &VAR_7, &VAR_8);
 if (!VAR_9 || (VAR_5 != 0x30 && VAR_5 != 0x40))
  return 0x0000;

 VAR_10 = FUNC_2(VAR_0, VAR_9 + 18);
 if (!VAR_10)
  return 0x0000;

 *VAR_1 = FUNC_1(VAR_0, VAR_10 + 0);
 *VAR_2 = FUNC_1(VAR_0, VAR_10 + 1);
 *VAR_4 = FUNC_1(VAR_0, VAR_10 + 2);
 *VAR_3 = FUNC_1(VAR_0, VAR_10 + 3);

 return VAR_10 + *VAR_2;
}
