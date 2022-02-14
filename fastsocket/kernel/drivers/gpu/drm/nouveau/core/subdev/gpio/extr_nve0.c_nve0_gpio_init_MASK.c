
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nve0_gpio_priv {int base; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nve0_gpio_priv*,int,int) ;

int
FUNC_2(struct nouveau_object *VAR_0)
{
 struct nve0_gpio_priv *VAR_1 = (void *)VAR_0;
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_1->base);
 if (VAR_2)
  return VAR_2;

 FUNC_1(VAR_1, 0xdc00, 0xffffffff);
 FUNC_1(VAR_1, 0xdc80, 0xffffffff);
 return 0;
}
