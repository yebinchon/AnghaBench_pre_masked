
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_sclass {struct nouveau_sclass* sclass; } ;
struct nouveau_parent {int base; struct nouveau_sclass* sclass; } ;


 int FUNC_0 (struct nouveau_sclass*) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct nouveau_parent *VAR_0)
{
 struct nouveau_sclass *VAR_1;

 while ((VAR_1 = VAR_0->sclass)) {
  VAR_0->sclass = VAR_1->sclass;
  FUNC_0(VAR_1);
 }

 FUNC_1(&VAR_0->base);
}
