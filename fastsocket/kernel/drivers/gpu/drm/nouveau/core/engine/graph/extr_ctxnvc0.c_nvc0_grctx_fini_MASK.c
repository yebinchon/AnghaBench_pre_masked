
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvc0_grctx {int chan; struct nvc0_graph_priv* priv; } ;
struct nvc0_graph_priv {int size; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct nvc0_graph_priv*,char*) ;
 int FUNC_3 (struct nvc0_graph_priv*,int,int,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct nvc0_graph_priv*,int,int,int) ;
 int FUNC_6 (struct nvc0_graph_priv*,int,int) ;

int
FUNC_7(struct nvc0_grctx *VAR_3)
{
 struct nvc0_graph_priv *VAR_4 = VAR_3->priv;
 int VAR_5;




 FUNC_3(VAR_4, 0x409b04, 0x80000000, 0x00000000);
 FUNC_6(VAR_4, 0x409000, 0x00000100);
 if (!FUNC_5(VAR_4, 0x409b00, 0x80000000, 0x00000000)) {
  FUNC_2(VAR_4, "grctx template channel unload timeout\n");
  return -VAR_0;
 }

 VAR_4->data = FUNC_0(VAR_4->size, VAR_2);
 if (VAR_4->data) {
  for (VAR_5 = 0; VAR_5 < VAR_4->size; VAR_5 += 4)
   VAR_4->data[VAR_5 / 4] = FUNC_4(VAR_3->chan, 0x80000 + VAR_5);
 }

 FUNC_1(((void*)0), &VAR_3->chan);
 return VAR_4->data ? 0 : -VAR_1;
}
