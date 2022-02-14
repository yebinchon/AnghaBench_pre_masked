
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv04_graph_priv {int lock; } ;
struct nv04_graph_chan {int base; } ;
struct nouveau_object {scalar_t__ engine; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 struct nv04_graph_chan* FUNC_1 (struct nv04_graph_priv*) ;
 int FUNC_2 (struct nv04_graph_chan*) ;
 int FUNC_3 (struct nv04_graph_priv*,int ,int,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_6(struct nouveau_object *VAR_1, bool VAR_2)
{
 struct nv04_graph_priv *VAR_3 = (void *)VAR_1->engine;
 struct nv04_graph_chan *VAR_4 = (void *)VAR_1;
 unsigned long VAR_5;

 FUNC_4(&VAR_3->lock, VAR_5);
 FUNC_3(VAR_3, VAR_0, 0x00000001, 0x00000000);
 if (FUNC_1(VAR_3) == VAR_4)
  FUNC_2(VAR_4);
 FUNC_3(VAR_3, VAR_0, 0x00000001, 0x00000001);
 FUNC_5(&VAR_3->lock, VAR_5);

 return FUNC_0(&VAR_4->base, VAR_2);
}
