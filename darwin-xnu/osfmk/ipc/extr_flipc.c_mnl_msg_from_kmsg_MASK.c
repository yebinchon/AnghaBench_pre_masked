
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef TYPE_8__* mnl_msg_t ;
typedef void* mach_port_t ;
typedef scalar_t__ mach_port_name_t ;
typedef int mach_msg_size_t ;
struct TYPE_26__ {scalar_t__ msgh_voucher_port; void* msgh_local_port; void* msgh_remote_port; } ;
typedef TYPE_9__ mach_msg_header_t ;
typedef int kern_return_t ;
typedef TYPE_10__* ipc_kmsg_t ;
struct TYPE_25__ {scalar_t__ object; int size; scalar_t__ qos; int node_id; int cmd; int sub; } ;
struct TYPE_24__ {int msgh_bits; TYPE_6__* msgh_remote_port; } ;
struct TYPE_20__ {TYPE_2__* fport; } ;
struct TYPE_21__ {TYPE_3__ port; } ;
struct TYPE_22__ {TYPE_4__ data; } ;
struct TYPE_23__ {TYPE_5__ ip_messages; } ;
struct TYPE_18__ {scalar_t__ name; } ;
struct TYPE_19__ {TYPE_1__ obj; } ;
struct TYPE_17__ {TYPE_7__* ikm_header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_8__* VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_8__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (void const*,void*,int ) ;
 int FUNC_2 (TYPE_10__*) ;
 int VAR_8 ;
 TYPE_8__* FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (void*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static kern_return_t FUNC_6(ipc_kmsg_t VAR_9, mnl_msg_t *VAR_10)
{
    if (VAR_9->ikm_header->msgh_bits & VAR_4) {
        FUNC_5("mnl_msg_from_kmsg(): Complex messages not supported.");
        return VAR_1;
    }

    mach_msg_size_t VAR_11 = FUNC_2(VAR_9);

    mnl_msg_t VAR_12 = FUNC_3(VAR_11, 0);

    if (VAR_12 == VAR_6)
        return VAR_2;


    VAR_12->sub = VAR_5;
    VAR_12->cmd = VAR_0;
    VAR_12->node_id = VAR_8;
    VAR_12->qos = 0;
    VAR_12->size = VAR_11;
    VAR_12->object = VAR_9->ikm_header->msgh_remote_port->ip_messages.data.port.fport->obj.name;


    FUNC_1((const void*)VAR_9->ikm_header, (void*)FUNC_0(VAR_12), VAR_11);


    mach_msg_header_t *VAR_13 = (mach_msg_header_t*)FUNC_0(VAR_12);
    VAR_13->msgh_remote_port = (mach_port_t)VAR_12->object;
    VAR_13->msgh_local_port = (mach_port_t)
    FUNC_4(VAR_13->msgh_local_port);
    VAR_13->msgh_voucher_port = (mach_port_name_t)VAR_7;

    *VAR_10 = (mnl_msg_t)VAR_12;

    return VAR_3;
}
