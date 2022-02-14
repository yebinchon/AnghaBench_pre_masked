
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pipe_state {int* pipe_0x0200; int* pipe_0x4400; } ;
struct nv10_graph_priv {int dummy; } ;
struct nv10_graph_chan {int* lma_window; struct pipe_state pipe_state; } ;
struct nouveau_object {scalar_t__ parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nv10_graph_priv*,int*,int) ;
 int FUNC_1 (struct nv10_graph_priv*,int*,int) ;
 int FUNC_2 (struct nv10_graph_priv*) ;
 struct nv10_graph_priv* FUNC_3 (struct nv10_graph_chan*) ;
 int FUNC_4 (struct nv10_graph_priv*,int ) ;
 int FUNC_5 (struct nv10_graph_priv*,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct nouveau_object *VAR_4, u32 VAR_5,
      void *VAR_6, u32 VAR_7)
{
 struct nv10_graph_chan *VAR_8 = (void *)VAR_4->parent;
 struct nv10_graph_priv *VAR_9 = FUNC_3(VAR_8);
 struct pipe_state *VAR_10 = &VAR_8->pipe_state;
 u32 VAR_11[1], VAR_12[8], VAR_13[3], VAR_14[3];
 u32 VAR_15, VAR_16;
 u32 VAR_17 = *(u32 *)VAR_6;
 int VAR_18;

 VAR_8->lma_window[(VAR_5 - 0x1638) / 4] = VAR_17;

 if (VAR_5 != 0x1644)
  return 0;

 FUNC_2(VAR_9);

 FUNC_1(VAR_9, VAR_11, 0x0040);
 FUNC_1(VAR_9, VAR_10->pipe_0x0200, 0x0200);

 FUNC_0(VAR_9, VAR_8->lma_window, 0x6790);

 FUNC_2(VAR_9);

 VAR_15 = FUNC_4(VAR_9, VAR_2);
 VAR_16 = FUNC_4(VAR_9, VAR_3);

 FUNC_1(VAR_9, VAR_10->pipe_0x4400, 0x4400);
 FUNC_1(VAR_9, VAR_12, 0x64c0);
 FUNC_1(VAR_9, VAR_14, 0x6ab0);
 FUNC_1(VAR_9, VAR_13, 0x6a80);

 FUNC_2(VAR_9);

 FUNC_5(VAR_9, VAR_2, 0x10000000);
 FUNC_5(VAR_9, VAR_3, 0x00000000);
 FUNC_5(VAR_9, VAR_0, 0x000064c0);
 for (VAR_18 = 0; VAR_18 < 4; VAR_18++)
  FUNC_5(VAR_9, VAR_1, 0x3f800000);
 for (VAR_18 = 0; VAR_18 < 4; VAR_18++)
  FUNC_5(VAR_9, VAR_1, 0x00000000);

 FUNC_5(VAR_9, VAR_0, 0x00006ab0);
 for (VAR_18 = 0; VAR_18 < 3; VAR_18++)
  FUNC_5(VAR_9, VAR_1, 0x3f800000);

 FUNC_5(VAR_9, VAR_0, 0x00006a80);
 for (VAR_18 = 0; VAR_18 < 3; VAR_18++)
  FUNC_5(VAR_9, VAR_1, 0x00000000);

 FUNC_5(VAR_9, VAR_0, 0x00000040);
 FUNC_5(VAR_9, VAR_1, 0x00000008);

 FUNC_0(VAR_9, VAR_10->pipe_0x0200, 0x0200);

 FUNC_2(VAR_9);

 FUNC_0(VAR_9, VAR_11, 0x0040);

 FUNC_5(VAR_9, VAR_2, VAR_15);
 FUNC_5(VAR_9, VAR_3, VAR_16);

 FUNC_0(VAR_9, VAR_12, 0x64c0);
 FUNC_0(VAR_9, VAR_14, 0x6ab0);
 FUNC_0(VAR_9, VAR_13, 0x6a80);
 FUNC_0(VAR_9, VAR_10->pipe_0x4400, 0x4400);

 FUNC_5(VAR_9, VAR_0, 0x000000c0);
 FUNC_5(VAR_9, VAR_1, 0x00000000);

 FUNC_2(VAR_9);

 return 0;
}
