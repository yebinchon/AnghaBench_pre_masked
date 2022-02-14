
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvc0_graph_priv {int base; int unk4188b4; int unk4188b8; int fuc41ad; int fuc41ac; int fuc409d; int fuc409c; int data; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct nouveau_object *VAR_0)
{
 struct nvc0_graph_priv *VAR_1 = (void *)VAR_0;

 FUNC_0(VAR_1->data);

 FUNC_3(&VAR_1->fuc409c);
 FUNC_3(&VAR_1->fuc409d);
 FUNC_3(&VAR_1->fuc41ac);
 FUNC_3(&VAR_1->fuc41ad);

 FUNC_1(((void*)0), &VAR_1->unk4188b8);
 FUNC_1(((void*)0), &VAR_1->unk4188b4);

 FUNC_2(&VAR_1->base);
}
