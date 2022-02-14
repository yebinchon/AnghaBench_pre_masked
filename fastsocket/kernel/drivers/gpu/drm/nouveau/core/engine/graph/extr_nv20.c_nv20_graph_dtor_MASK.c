
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv20_graph_priv {int base; int ctxtab; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct nouveau_object *VAR_0)
{
 struct nv20_graph_priv *VAR_1 = (void *)VAR_0;
 FUNC_0(((void*)0), &VAR_1->ctxtab);
 FUNC_1(&VAR_1->base);
}
