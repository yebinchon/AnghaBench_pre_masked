
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef TYPE_4__* ipc_port_t ;
typedef TYPE_5__* ipc_mqueue_t ;
typedef TYPE_6__* ipc_kmsg_t ;
typedef TYPE_7__* flipc_port_t ;
struct TYPE_19__ {int name; } ;
struct TYPE_25__ {scalar_t__ state; int lport; TYPE_1__ obj; } ;
struct TYPE_24__ {int ikm_node; } ;
struct TYPE_20__ {int msgcount; TYPE_7__* fport; } ;
struct TYPE_21__ {TYPE_2__ port; } ;
struct TYPE_23__ {TYPE_3__ data; int imq_seqno; int imq_messages; } ;
struct TYPE_22__ {TYPE_5__ ip_messages; } ;


 int VAR_0 ;
 TYPE_7__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_7__*) ;
 TYPE_6__* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,TYPE_5__*,int ) ;
 int VAR_5 ;
 TYPE_6__* FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_6__*) ;
 int FUNC_7 (TYPE_5__*,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,TYPE_4__*,int) ;
 int FUNC_10 (int ,TYPE_7__*) ;

__attribute__((used)) static void
FUNC_11(ipc_port_t VAR_6)
{

    FUNC_3(FUNC_1(VAR_6));
    ipc_mqueue_t VAR_7 = &VAR_6->ip_messages;
    flipc_port_t VAR_8 = VAR_7->data.port.fport;
    FUNC_3(FUNC_0(VAR_8));
    FUNC_3(FUNC_2(VAR_8->obj.name));


    int VAR_9 = VAR_7->data.port.msgcount;
    if (VAR_9 > 0) {
        ipc_kmsg_t VAR_10;





        while (VAR_9--) {
            VAR_10 = FUNC_5(&VAR_7->imq_messages);
            FUNC_3(VAR_10 != VAR_3);
            FUNC_6(&VAR_7->imq_messages, VAR_10);
            if (VAR_8->state == VAR_2)
                FUNC_4(VAR_10->ikm_node, VAR_7, VAR_0);
            FUNC_7(VAR_7, ((void*)0));
            VAR_7->imq_seqno++;
        }
    }


    FUNC_8(VAR_8->obj.name);
    VAR_6->ip_messages.data.port.fport = VAR_1;
    VAR_8->lport = VAR_4;
    FUNC_10(VAR_5, VAR_8);
}
