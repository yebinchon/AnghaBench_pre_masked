
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv10_gpio_priv {int base; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct nv10_gpio_priv*,int,int) ;

__attribute__((used)) static int
FUNC_2(struct nouveau_object *VAR_0, bool VAR_1)
{
 struct nv10_gpio_priv *VAR_2 = (void *)VAR_0;
 FUNC_1(VAR_2, 0x001144, 0x00000000);
 return FUNC_0(&VAR_2->base, VAR_1);
}
