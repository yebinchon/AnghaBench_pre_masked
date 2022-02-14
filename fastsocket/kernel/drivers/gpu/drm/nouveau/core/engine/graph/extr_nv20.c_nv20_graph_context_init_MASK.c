
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nv20_graph_priv {int ctxtab; } ;
struct nv20_graph_chan {int chid; int base; } ;
struct nouveau_object {scalar_t__ engine; } ;
struct TYPE_2__ {int addr; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (struct nv20_graph_chan*) ;
 int FUNC_2 (int ,int,int) ;

int
FUNC_3(struct nouveau_object *VAR_0)
{
 struct nv20_graph_priv *VAR_1 = (void *)VAR_0->engine;
 struct nv20_graph_chan *VAR_2 = (void *)VAR_0;
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_2->base);
 if (VAR_3)
  return VAR_3;

 FUNC_2(VAR_1->ctxtab, VAR_2->chid * 4, FUNC_1(VAR_2)->addr >> 4);
 return 0;
}
