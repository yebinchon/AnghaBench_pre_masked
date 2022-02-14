
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv04_graph_priv {int dummy; } ;
struct nv04_graph_chan {int* nv04; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 struct nv04_graph_priv* FUNC_1 (struct nv04_graph_chan*) ;
 int FUNC_2 (struct nv04_graph_priv*,int ,int,int) ;
 int FUNC_3 (struct nv04_graph_priv*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct nv04_graph_chan *VAR_4, int VAR_5)
{
 struct nv04_graph_priv *VAR_6 = FUNC_1(VAR_4);
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3); VAR_7++)
  FUNC_3(VAR_6, VAR_3[VAR_7], VAR_4->nv04[VAR_7]);

 FUNC_3(VAR_6, VAR_0, 0x10010100);
 FUNC_2(VAR_6, VAR_1, 0xff000000, VAR_5 << 24);
 FUNC_2(VAR_6, VAR_2, 0xfff00000, 0x00000000);
 return 0;
}
