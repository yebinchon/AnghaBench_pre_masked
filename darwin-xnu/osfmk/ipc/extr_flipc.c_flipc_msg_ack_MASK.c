
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_10__ ;


struct mnl_msg {int dummy; } ;
struct flipc_ack_msg {int dummy; } ;
typedef int msg ;
typedef int mnl_name_t ;
typedef TYPE_4__* mach_node_t ;
typedef void* mach_node_id_t ;
typedef int mach_msg_return_t ;
struct TYPE_31__ {int msgh_size; int msgh_id; void* msgh_voucher_port; void* msgh_local_port; TYPE_6__* msgh_remote_port; int msgh_bits; } ;
typedef TYPE_5__ mach_msg_header_t ;
typedef int kern_return_t ;
typedef TYPE_6__* ipc_port_t ;
typedef TYPE_7__* ipc_mqueue_t ;
typedef TYPE_8__* ipc_kmsg_t ;
typedef TYPE_9__* flipc_port_t ;
typedef TYPE_10__* flipc_ack_msg_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_27__ {int name; } ;
struct TYPE_35__ {TYPE_6__* lport; TYPE_1__ obj; } ;
struct TYPE_34__ {TYPE_5__* ikm_header; } ;
struct TYPE_33__ {TYPE_9__* imq_fport; } ;
struct TYPE_32__ {TYPE_7__ ip_messages; } ;
struct TYPE_28__ {void* node_id; } ;
struct TYPE_30__ {TYPE_6__* control_port; TYPE_2__ info; scalar_t__ active; } ;
struct TYPE_29__ {int size; scalar_t__ options; int object; void* node_id; scalar_t__ flags; scalar_t__ qos; int cmd; int sub; } ;
struct TYPE_26__ {int msg_count; TYPE_3__ mnl; void* resend_to; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_9__*) ;
 void* VAR_3 ;
 TYPE_6__* VAR_4 ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_6 ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 void* VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (TYPE_6__*) ;
 TYPE_8__* FUNC_12 (scalar_t__) ;
 int FUNC_13 (TYPE_8__*,int ,int ) ;
 int FUNC_14 (TYPE_7__*,TYPE_8__*,int ,int ) ;

void
FUNC_15(mach_node_t VAR_11,
              ipc_mqueue_t VAR_12,
              boolean_t VAR_13)
{
    flipc_port_t VAR_14 = VAR_12->imq_fport;

    FUNC_8(FUNC_0(VAR_14));
    FUNC_8(FUNC_6(VAR_11));

    mnl_name_t VAR_15 = VAR_10;
    mach_node_id_t VAR_16 = VAR_3;
    ipc_port_t VAR_17 = VAR_4;

    FUNC_10(VAR_14->lport);
    VAR_15 = VAR_14->obj.name;
    FUNC_11(VAR_14->lport);

    if (!FUNC_7(VAR_15))
        return;

    FUNC_4(VAR_11);
    if (VAR_11->active) {
        VAR_16 = VAR_11->info.node_id;
        VAR_17 = VAR_11->control_port;
    }
    FUNC_5(VAR_11);

    if ( !FUNC_1(VAR_17) || !FUNC_3(VAR_16) )
        return;


    ipc_kmsg_t VAR_18 = FUNC_12(sizeof(struct flipc_ack_msg) + VAR_9);
    FUNC_8((unsigned long long)VAR_18 >= 4ULL);
    mach_msg_header_t *VAR_19 = VAR_18->ikm_header;


    VAR_19->msgh_bits = FUNC_2(0, 0, 0, 0);
    VAR_19->msgh_size = sizeof(VAR_19);
    VAR_19->msgh_remote_port = VAR_17;
    VAR_19->msgh_local_port = VAR_7;
    VAR_19->msgh_voucher_port = VAR_7;
    VAR_19->msgh_id = VAR_1;


    flipc_ack_msg_t VAR_20 = (flipc_ack_msg_t)(&VAR_19[1]);
    VAR_20->resend_to = VAR_3;
    VAR_20->msg_count = 1;


    VAR_20->mnl.sub = VAR_6;
    VAR_20->mnl.cmd = VAR_13 ? VAR_0 : VAR_2;
    VAR_20->mnl.qos = 0;
    VAR_20->mnl.flags = 0;
    VAR_20->mnl.node_id = VAR_16;
    VAR_20->mnl.object = VAR_15;
    VAR_20->mnl.options = 0;
    VAR_20->mnl.size = sizeof(struct flipc_ack_msg) - sizeof(struct mnl_msg);
    kern_return_t VAR_21;
    VAR_21 = FUNC_13(VAR_18,
                       VAR_8,
                       VAR_5);

}
