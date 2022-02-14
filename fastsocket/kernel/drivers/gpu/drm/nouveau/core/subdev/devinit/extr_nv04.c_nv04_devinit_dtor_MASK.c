
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv04_devinit_priv {int base; int owner; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nv04_devinit_priv*,int) ;
 int FUNC_2 (struct nv04_devinit_priv*,int ) ;

void
FUNC_3(struct nouveau_object *VAR_0)
{
 struct nv04_devinit_priv *VAR_1 = (void *)VAR_0;


 FUNC_2(VAR_1, VAR_1->owner);
 FUNC_1(VAR_1, 1);

 FUNC_0(&VAR_1->base);
}
