
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bt_mesh_rpl {int old_iv; int seq; int src; } ;
struct TYPE_2__ {int addr; } ;
struct bt_mesh_net_rx {int old_iv; int seq; TYPE_1__ ctx; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct bt_mesh_rpl*) ;

__attribute__((used)) static void FUNC_2(struct bt_mesh_rpl *VAR_1, struct bt_mesh_net_rx *VAR_2)
{
    VAR_1->src = VAR_2->ctx.addr;
    VAR_1->seq = VAR_2->seq;
    VAR_1->old_iv = VAR_2->old_iv;

    if (FUNC_0(VAR_0)) {
        FUNC_1(VAR_1);
    }
}
