
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct flipc_port {int dummy; } ;
typedef int mnl_obj_t ;
typedef int mnl_name_t ;
typedef scalar_t__ mach_node_t ;
typedef scalar_t__ kern_return_t ;
typedef TYPE_3__* ipc_port_t ;
typedef TYPE_4__* flipc_port_t ;
struct TYPE_12__ {int name; } ;
struct TYPE_15__ {TYPE_3__* lport; int state; scalar_t__ hostnode; TYPE_1__ obj; } ;
struct TYPE_13__ {TYPE_4__* imq_fport; } ;
struct TYPE_14__ {TYPE_2__ ip_messages; } ;


 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 TYPE_3__* VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_4__*,int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,TYPE_4__*) ;

__attribute__((used)) static kern_return_t
FUNC_9(ipc_port_t VAR_8, mach_node_t VAR_9, mnl_name_t VAR_10)
{

    FUNC_4(FUNC_1(VAR_8));
    FUNC_4(FUNC_2(VAR_9));
    FUNC_4(FUNC_3(VAR_10));
    FUNC_4(!FUNC_0(VAR_8->ip_messages.imq_fport));


    flipc_port_t VAR_11 = (flipc_port_t) FUNC_7(VAR_6);
    if (!FUNC_0(VAR_11))
        return VAR_4;
    FUNC_5(VAR_11, sizeof(struct flipc_port));
    VAR_11->obj.name = VAR_10;
    VAR_11->hostnode = VAR_9;
    if (VAR_9 == VAR_7)
        VAR_11->state = VAR_1;
    else
        VAR_11->state = VAR_2;


    VAR_11->lport = VAR_8;
    VAR_8->ip_messages.imq_fport = VAR_11;


    kern_return_t VAR_12 = FUNC_6((mnl_obj_t)VAR_11);
    if (VAR_12 != VAR_5) {
        VAR_8->ip_messages.imq_fport = VAR_0;
        VAR_11->lport = VAR_3;
        FUNC_8(VAR_6, VAR_11);
    }

    return VAR_12;
}
