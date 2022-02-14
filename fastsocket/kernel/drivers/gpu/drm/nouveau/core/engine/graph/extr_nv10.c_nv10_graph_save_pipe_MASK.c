
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_state {int pipe_0x0000; int pipe_0x0040; int pipe_0x7800; int pipe_0x7400; int pipe_0x7000; int pipe_0x6c00; int pipe_0x6800; int pipe_0x6400; int pipe_0x0200; int pipe_0x4400; } ;
struct nv10_graph_priv {int dummy; } ;
struct nv10_graph_chan {struct pipe_state pipe_state; } ;


 int FUNC_0 (struct nv10_graph_priv*,int ,int) ;
 struct nv10_graph_priv* FUNC_1 (struct nv10_graph_chan*) ;

__attribute__((used)) static void
FUNC_2(struct nv10_graph_chan *VAR_0)
{
 struct nv10_graph_priv *VAR_1 = FUNC_1(VAR_0);
 struct pipe_state *VAR_2 = &VAR_0->pipe_state;

 FUNC_0(VAR_1, VAR_2->pipe_0x4400, 0x4400);
 FUNC_0(VAR_1, VAR_2->pipe_0x0200, 0x0200);
 FUNC_0(VAR_1, VAR_2->pipe_0x6400, 0x6400);
 FUNC_0(VAR_1, VAR_2->pipe_0x6800, 0x6800);
 FUNC_0(VAR_1, VAR_2->pipe_0x6c00, 0x6c00);
 FUNC_0(VAR_1, VAR_2->pipe_0x7000, 0x7000);
 FUNC_0(VAR_1, VAR_2->pipe_0x7400, 0x7400);
 FUNC_0(VAR_1, VAR_2->pipe_0x7800, 0x7800);
 FUNC_0(VAR_1, VAR_2->pipe_0x0040, 0x0040);
 FUNC_0(VAR_1, VAR_2->pipe_0x0000, 0x0000);
}
