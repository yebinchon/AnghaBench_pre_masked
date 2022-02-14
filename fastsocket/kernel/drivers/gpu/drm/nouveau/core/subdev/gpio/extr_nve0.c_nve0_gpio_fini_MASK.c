
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nve0_gpio_priv {int base; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct nve0_gpio_priv*,int,int) ;

int
FUNC_2(struct nouveau_object *VAR_0, bool VAR_1)
{
 struct nve0_gpio_priv *VAR_2 = (void *)VAR_0;
 FUNC_1(VAR_2, 0xdc08, 0x00000000);
 FUNC_1(VAR_2, 0xdc88, 0x00000000);
 return FUNC_0(&VAR_2->base, VAR_1);
}
