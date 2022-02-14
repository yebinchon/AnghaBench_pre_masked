
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* mach_node_t ;
typedef int kern_return_t ;
typedef int ipc_port_t ;
struct TYPE_6__ {int node_id; } ;
struct TYPE_7__ {TYPE_1__ info; int bootstrap_port; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_2__*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

kern_return_t
FUNC_7(mach_node_t VAR_0)
{
    kern_return_t VAR_1;

    FUNC_3(FUNC_1(VAR_0));
    ipc_port_t VAR_2 = VAR_0->bootstrap_port;
    FUNC_3(FUNC_0(VAR_2));

    FUNC_5(VAR_2);

    VAR_1 = FUNC_4(VAR_2,
                           VAR_0,
                           FUNC_2(VAR_0->info.node_id));
    FUNC_6(VAR_2);

    return VAR_1;
}
