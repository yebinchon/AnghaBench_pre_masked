
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_ib_demux_pv_ctx {int port; } ;
struct ib_event {int event; } ;


 int FUNC_0 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ib_event *VAR_0, void *VAR_1)
{
 struct mlx4_ib_demux_pv_ctx *VAR_2 = VAR_1;


 FUNC_0("Fatal error (%d) on a MAD QP on port %d\n",
        VAR_0->event, VAR_2->port);
}
