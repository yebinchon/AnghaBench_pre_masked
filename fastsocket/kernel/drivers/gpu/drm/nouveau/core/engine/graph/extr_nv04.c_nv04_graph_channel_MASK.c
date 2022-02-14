
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv04_graph_priv {struct nv04_graph_chan** chan; } ;
struct nv04_graph_chan {int dummy; } ;


 int FUNC_0 (struct nv04_graph_chan**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct nv04_graph_priv*,int ) ;

__attribute__((used)) static struct nv04_graph_chan *
FUNC_2(struct nv04_graph_priv *VAR_2)
{
 struct nv04_graph_chan *VAR_3 = ((void*)0);
 if (FUNC_1(VAR_2, VAR_0) & 0x00010000) {
  int VAR_4 = FUNC_1(VAR_2, VAR_1) >> 24;
  if (VAR_4 < FUNC_0(VAR_2->chan))
   VAR_3 = VAR_2->chan[VAR_4];
 }
 return VAR_3;
}
