
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nv10_graph_priv {int dummy; } ;
struct nv10_graph_chan {void** nv17; void** nv10; } ;
struct TYPE_2__ {int chipset; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 struct nv10_graph_priv* FUNC_1 (struct nv10_graph_chan*) ;
 int FUNC_2 (struct nv10_graph_chan*) ;
 int * VAR_3 ;
 TYPE_1__* FUNC_3 (struct nv10_graph_priv*) ;
 int FUNC_4 (struct nv10_graph_priv*,int ,int,int) ;
 void* FUNC_5 (struct nv10_graph_priv*,int ) ;
 int FUNC_6 (struct nv10_graph_priv*,int ,int) ;

__attribute__((used)) static int
FUNC_7(struct nv10_graph_chan *VAR_4)
{
 struct nv10_graph_priv *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++)
  VAR_4->nv10[VAR_6] = FUNC_5(VAR_5, VAR_2[VAR_6]);

 if (FUNC_3(VAR_5)->chipset >= 0x17) {
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3); VAR_6++)
   VAR_4->nv17[VAR_6] = FUNC_5(VAR_5, VAR_3[VAR_6]);
 }

 FUNC_2(VAR_4);

 FUNC_6(VAR_5, VAR_0, 0x10000000);
 FUNC_4(VAR_5, VAR_1, 0xff000000, 0x1f000000);
 return 0;
}
