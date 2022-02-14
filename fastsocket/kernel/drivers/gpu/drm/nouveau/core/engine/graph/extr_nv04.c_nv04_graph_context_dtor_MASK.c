
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv04_graph_priv {int lock; int ** chan; } ;
struct nv04_graph_chan {size_t chid; int base; } ;
struct nouveau_object {scalar_t__ engine; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_3(struct nouveau_object *VAR_0)
{
 struct nv04_graph_priv *VAR_1 = (void *)VAR_0->engine;
 struct nv04_graph_chan *VAR_2 = (void *)VAR_0;
 unsigned long VAR_3;

 FUNC_1(&VAR_1->lock, VAR_3);
 VAR_1->chan[VAR_2->chid] = ((void*)0);
 FUNC_2(&VAR_1->lock, VAR_3);

 FUNC_0(&VAR_2->base);
}
