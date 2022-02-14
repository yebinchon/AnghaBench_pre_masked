
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv04_devinit_priv {scalar_t__ owner; int base; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct nv04_devinit_priv*,int) ;
 int FUNC_2 (struct nv04_devinit_priv*,int,int,int) ;
 scalar_t__ FUNC_3 (struct nv04_devinit_priv*) ;
 int FUNC_4 (struct nv04_devinit_priv*,int ) ;

int
FUNC_5(struct nouveau_object *VAR_0, bool VAR_1)
{
 struct nv04_devinit_priv *VAR_2 = (void *)VAR_0;


 FUNC_2(VAR_2, 0x000200, 0x00000001, 0x00000001);


 FUNC_1(VAR_2, 0);
 if (VAR_2->owner < 0)
  VAR_2->owner = FUNC_3(VAR_2);
 FUNC_4(VAR_2, 0);

 return FUNC_0(&VAR_2->base, VAR_1);
}
