
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_gpio {int dummy; } ;


 int FUNC_0 (struct nouveau_gpio*,int) ;

int
FUNC_1(struct nouveau_gpio *VAR_0, int VAR_1)
{
 return !!(FUNC_0(VAR_0, 0x00d610 + (VAR_1 * 4)) & 0x00004000);
}
