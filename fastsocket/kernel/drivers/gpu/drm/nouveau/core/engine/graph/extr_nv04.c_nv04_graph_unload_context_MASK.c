
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv04_graph_priv {int dummy; } ;
struct nv04_graph_chan {int * nv04; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 struct nv04_graph_priv* FUNC_1 (struct nv04_graph_chan*) ;
 int FUNC_2 (struct nv04_graph_priv*,int ,int,int) ;
 int FUNC_3 (struct nv04_graph_priv*,int ) ;
 int FUNC_4 (struct nv04_graph_priv*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct nv04_graph_chan *VAR_3)
{
 struct nv04_graph_priv *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++)
  VAR_3->nv04[VAR_5] = FUNC_3(VAR_4, VAR_2[VAR_5]);

 FUNC_4(VAR_4, VAR_0, 0x10000000);
 FUNC_2(VAR_4, VAR_1, 0xff000000, 0x0f000000);
 return 0;
}
