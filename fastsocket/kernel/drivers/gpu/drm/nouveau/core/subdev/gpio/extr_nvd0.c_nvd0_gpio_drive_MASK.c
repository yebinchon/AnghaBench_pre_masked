
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_gpio {int dummy; } ;


 int FUNC_0 (struct nouveau_gpio*,int,int,int) ;

int
FUNC_1(struct nouveau_gpio *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 u32 VAR_4 = ((VAR_2 ^ 1) << 13) | (VAR_3 << 12);
 FUNC_0(VAR_0, 0x00d610 + (VAR_1 * 4), 0x00003000, VAR_4);
 FUNC_0(VAR_0, 0x00d604, 0x00000001, 0x00000001);
 return 0;
}
