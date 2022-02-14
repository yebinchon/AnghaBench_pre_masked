
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nv50_gpio_priv {int base; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_2__ {int chipset; } ;


 int FUNC_0 (int *,int) ;
 TYPE_1__* FUNC_1 (struct nv50_gpio_priv*) ;
 int FUNC_2 (struct nv50_gpio_priv*,int,int) ;

int
FUNC_3(struct nouveau_object *VAR_0, bool VAR_1)
{
 struct nv50_gpio_priv *VAR_2 = (void *)VAR_0;
 FUNC_2(VAR_2, 0xe050, 0x00000000);
 if (FUNC_1(VAR_2)->chipset >= 0x90)
  FUNC_2(VAR_2, 0xe070, 0x00000000);
 return FUNC_0(&VAR_2->base, VAR_1);
}
