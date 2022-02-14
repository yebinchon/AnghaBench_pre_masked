
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pipe_state {int pipe_0x0040; int pipe_0x0000; int pipe_0x4400; int pipe_0x7800; int pipe_0x7400; int pipe_0x7000; int pipe_0x6c00; int pipe_0x6800; int pipe_0x6400; int pipe_0x0200; } ;
struct nv10_graph_priv {int dummy; } ;
struct nv10_graph_chan {struct pipe_state pipe_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nv10_graph_priv*,int ,int) ;
 int FUNC_1 (struct nv10_graph_priv*) ;
 struct nv10_graph_priv* FUNC_2 (struct nv10_graph_chan*) ;
 int FUNC_3 (struct nv10_graph_priv*,int ) ;
 int FUNC_4 (struct nv10_graph_priv*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct nv10_graph_chan *VAR_4)
{
 struct nv10_graph_priv *VAR_5 = FUNC_2(VAR_4);
 struct pipe_state *VAR_6 = &VAR_4->pipe_state;
 u32 VAR_7, VAR_8;
 int VAR_9;

 FUNC_1(VAR_5);

 VAR_7 = FUNC_3(VAR_5, VAR_2);
 VAR_8 = FUNC_3(VAR_5, VAR_3);
 FUNC_4(VAR_5, VAR_2, 0x10000000);
 FUNC_4(VAR_5, VAR_3, 0x00000000);
 FUNC_4(VAR_5, VAR_0, 0x000064c0);
 for (VAR_9 = 0; VAR_9 < 4; VAR_9++)
  FUNC_4(VAR_5, VAR_1, 0x3f800000);
 for (VAR_9 = 0; VAR_9 < 4; VAR_9++)
  FUNC_4(VAR_5, VAR_1, 0x00000000);

 FUNC_4(VAR_5, VAR_0, 0x00006ab0);
 for (VAR_9 = 0; VAR_9 < 3; VAR_9++)
  FUNC_4(VAR_5, VAR_1, 0x3f800000);

 FUNC_4(VAR_5, VAR_0, 0x00006a80);
 for (VAR_9 = 0; VAR_9 < 3; VAR_9++)
  FUNC_4(VAR_5, VAR_1, 0x00000000);

 FUNC_4(VAR_5, VAR_0, 0x00000040);
 FUNC_4(VAR_5, VAR_1, 0x00000008);


 FUNC_0(VAR_5, VAR_6->pipe_0x0200, 0x0200);
 FUNC_1(VAR_5);


 FUNC_4(VAR_5, VAR_2, VAR_7);
 FUNC_4(VAR_5, VAR_3, VAR_8);
 FUNC_0(VAR_5, VAR_6->pipe_0x6400, 0x6400);
 FUNC_0(VAR_5, VAR_6->pipe_0x6800, 0x6800);
 FUNC_0(VAR_5, VAR_6->pipe_0x6c00, 0x6c00);
 FUNC_0(VAR_5, VAR_6->pipe_0x7000, 0x7000);
 FUNC_0(VAR_5, VAR_6->pipe_0x7400, 0x7400);
 FUNC_0(VAR_5, VAR_6->pipe_0x7800, 0x7800);
 FUNC_0(VAR_5, VAR_6->pipe_0x4400, 0x4400);
 FUNC_0(VAR_5, VAR_6->pipe_0x0000, 0x0000);
 FUNC_0(VAR_5, VAR_6->pipe_0x0040, 0x0040);
 FUNC_1(VAR_5);
}
