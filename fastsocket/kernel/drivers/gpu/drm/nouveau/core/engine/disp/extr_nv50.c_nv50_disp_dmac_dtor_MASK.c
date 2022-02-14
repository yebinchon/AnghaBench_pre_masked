
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv50_disp_dmac {int base; int pushdma; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (int *,struct nouveau_object**) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct nouveau_object *VAR_0)
{
 struct nv50_disp_dmac *VAR_1 = (void *)VAR_0;
 FUNC_0(((void*)0), (struct nouveau_object **)&VAR_1->pushdma);
 FUNC_1(&VAR_1->base);
}
