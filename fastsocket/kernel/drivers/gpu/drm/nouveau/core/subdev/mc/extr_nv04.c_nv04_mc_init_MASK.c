
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv04_mc_priv {int base; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nv04_mc_priv*,int,int) ;

int
FUNC_2(struct nouveau_object *VAR_0)
{
 struct nv04_mc_priv *VAR_1 = (void *)VAR_0;

 FUNC_1(VAR_1, 0x000200, 0xffffffff);
 FUNC_1(VAR_1, 0x001850, 0x00000001);

 return FUNC_0(&VAR_1->base);
}
