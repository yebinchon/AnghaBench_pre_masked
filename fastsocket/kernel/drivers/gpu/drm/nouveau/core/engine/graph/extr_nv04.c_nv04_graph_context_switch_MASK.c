
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv04_graph_priv {int lock; struct nv04_graph_chan** chan; } ;
struct nv04_graph_chan {int dummy; } ;


 int VAR_0 ;
 struct nv04_graph_chan* FUNC_0 (struct nv04_graph_priv*) ;
 int FUNC_1 (struct nv04_graph_priv*) ;
 int FUNC_2 (struct nv04_graph_chan*,int) ;
 int FUNC_3 (struct nv04_graph_chan*) ;
 int FUNC_4 (struct nv04_graph_priv*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_7(struct nv04_graph_priv *VAR_1)
{
 struct nv04_graph_chan *VAR_2 = ((void*)0);
 struct nv04_graph_chan *VAR_3 = ((void*)0);
 unsigned long VAR_4;
 int VAR_5;

 FUNC_5(&VAR_1->lock, VAR_4);
 FUNC_1(VAR_1);


 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  FUNC_3(VAR_2);


 VAR_5 = (FUNC_4(VAR_1, VAR_0) >> 24) & 0x0f;
 VAR_3 = VAR_1->chan[VAR_5];
 if (VAR_3)
  FUNC_2(VAR_3, VAR_5);

 FUNC_6(&VAR_1->lock, VAR_4);
}
