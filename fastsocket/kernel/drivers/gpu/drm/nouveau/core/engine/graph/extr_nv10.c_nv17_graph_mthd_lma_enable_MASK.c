
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv10_graph_priv {int dummy; } ;
struct nv10_graph_chan {int dummy; } ;
struct nouveau_object {scalar_t__ parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct nv10_graph_priv*) ;
 struct nv10_graph_priv* FUNC_1 (struct nv10_graph_chan*) ;
 int FUNC_2 (struct nv10_graph_priv*,int,int,int) ;

__attribute__((used)) static int
FUNC_3(struct nouveau_object *VAR_1, u32 VAR_2,
      void *VAR_3, u32 VAR_4)
{
 struct nv10_graph_chan *VAR_5 = (void *)VAR_1->parent;
 struct nv10_graph_priv *VAR_6 = FUNC_1(VAR_5);

 FUNC_0(VAR_6);

 FUNC_2(VAR_6, VAR_0, 0x00000100, 0x00000100);
 FUNC_2(VAR_6, 0x4006b0, 0x08000000, 0x08000000);
 return 0;
}
