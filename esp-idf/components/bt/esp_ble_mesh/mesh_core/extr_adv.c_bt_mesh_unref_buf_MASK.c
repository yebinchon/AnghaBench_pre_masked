
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_buf {int dummy; } ;
struct TYPE_4__ {scalar_t__ arg; } ;
typedef TYPE_1__ bt_mesh_msg_t ;
struct TYPE_5__ {unsigned int busy; } ;


 TYPE_3__* FUNC_0 (struct net_buf*) ;
 int FUNC_1 (struct net_buf*) ;

__attribute__((used)) static void FUNC_2(bt_mesh_msg_t *VAR_0)
{
    struct net_buf *VAR_1;

    if (VAR_0->arg) {
        VAR_1 = (struct net_buf *)VAR_0->arg;
        FUNC_0(VAR_1)->busy = 0U;
        FUNC_1(VAR_1);
    }

    return;
}
