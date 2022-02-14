
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nv10_graph_priv {int dummy; } ;
struct nv10_graph_chan {int* nv10; int* nv17; } ;
struct TYPE_2__ {int chipset; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (struct nv10_graph_chan*,int,int) ;
 int FUNC_2 (struct nv10_graph_chan*) ;
 struct nv10_graph_priv* FUNC_3 (struct nv10_graph_chan*) ;
 int * VAR_5 ;
 TYPE_1__* FUNC_4 (struct nv10_graph_priv*) ;
 int FUNC_5 (struct nv10_graph_priv*,int ,int,int) ;
 int FUNC_6 (struct nv10_graph_priv*,int ) ;
 int FUNC_7 (struct nv10_graph_priv*,int ,int) ;

__attribute__((used)) static int
FUNC_8(struct nv10_graph_chan *VAR_6, int VAR_7)
{
 struct nv10_graph_priv *VAR_8 = FUNC_3(VAR_6);
 u32 VAR_9;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_4); VAR_10++)
  FUNC_7(VAR_8, VAR_4[VAR_10], VAR_6->nv10[VAR_10]);

 if (FUNC_4(VAR_8)->chipset >= 0x17) {
  for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_5); VAR_10++)
   FUNC_7(VAR_8, VAR_5[VAR_10], VAR_6->nv17[VAR_10]);
 }

 FUNC_2(VAR_6);

 VAR_9 = FUNC_6(VAR_8, VAR_3) & 0xffff;
 FUNC_1(VAR_6, VAR_7, VAR_9);

 FUNC_7(VAR_8, VAR_0, 0x10010100);
 FUNC_5(VAR_8, VAR_1, 0xff000000, VAR_7 << 24);
 FUNC_5(VAR_8, VAR_2, 0x30000000, 0x00000000);
 return 0;
}
