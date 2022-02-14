
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* mach_node_t ;
typedef int kern_return_t ;
typedef int ipc_port_t ;
struct TYPE_4__ {int bootstrap_port; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

kern_return_t
FUNC_5(mach_node_t VAR_2)
{
    if (!FUNC_1(VAR_2))
        return VAR_0;

    ipc_port_t VAR_3 = VAR_2->bootstrap_port;
    if (FUNC_0(VAR_3)) {
        FUNC_3(VAR_3);
        FUNC_2(VAR_3);
        FUNC_4(VAR_3);
    }

    return VAR_1;
}
