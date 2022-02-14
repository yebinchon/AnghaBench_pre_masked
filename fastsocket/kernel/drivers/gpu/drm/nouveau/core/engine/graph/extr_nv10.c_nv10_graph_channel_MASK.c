
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv10_graph_priv {struct nv10_graph_chan** chan; } ;
struct nv10_graph_chan {int dummy; } ;


 int FUNC_0 (struct nv10_graph_chan**) ;
 int FUNC_1 (struct nv10_graph_priv*,int) ;

__attribute__((used)) static struct nv10_graph_chan *
FUNC_2(struct nv10_graph_priv *VAR_0)
{
 struct nv10_graph_chan *VAR_1 = ((void*)0);
 if (FUNC_1(VAR_0, 0x400144) & 0x00010000) {
  int VAR_2 = FUNC_1(VAR_0, 0x400148) >> 24;
  if (VAR_2 < FUNC_0(VAR_0->chan))
   VAR_1 = VAR_0->chan[VAR_2];
 }
 return VAR_1;
}
