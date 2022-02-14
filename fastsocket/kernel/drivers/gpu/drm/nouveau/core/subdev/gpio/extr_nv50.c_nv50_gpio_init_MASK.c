
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nv50_gpio_priv {int base; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_2__ {int chipset; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (struct nv50_gpio_priv*) ;
 int FUNC_2 (struct nv50_gpio_priv*,int,int) ;

int
FUNC_3(struct nouveau_object *VAR_0)
{
 struct nv50_gpio_priv *VAR_1 = (void *)VAR_0;
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_1->base);
 if (VAR_2)
  return VAR_2;


 FUNC_2(VAR_1, 0xe050, 0x00000000);
 FUNC_2(VAR_1, 0xe054, 0xffffffff);
 if (FUNC_1(VAR_1)->chipset >= 0x90) {
  FUNC_2(VAR_1, 0xe070, 0x00000000);
  FUNC_2(VAR_1, 0xe074, 0xffffffff);
 }

 return 0;
}
