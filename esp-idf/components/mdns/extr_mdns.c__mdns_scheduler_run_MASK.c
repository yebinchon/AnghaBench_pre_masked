
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int portTickType ;
struct TYPE_10__ {int queued; int send_at; struct TYPE_10__* next; } ;
typedef TYPE_3__ mdns_tx_packet_t ;
struct TYPE_8__ {TYPE_3__* packet; } ;
struct TYPE_9__ {TYPE_1__ tx_handle; } ;
struct TYPE_11__ {TYPE_2__ data; int type; } ;
typedef TYPE_4__ mdns_action_t ;
typedef scalar_t__ int32_t ;
struct TYPE_12__ {int action_queue; TYPE_3__* tx_queue_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_7__* VAR_2 ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ,TYPE_4__**,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(void)
{
    FUNC_0();
    mdns_tx_packet_t * VAR_5 = VAR_2->tx_queue_head;
    mdns_action_t * VAR_6 = ((void*)0);


    while (VAR_5 && VAR_5->queued) {
        VAR_5 = VAR_5->next;
    }
    if (!VAR_5) {
        FUNC_1();
        return;
    }
    if ((int32_t)(VAR_5->send_at - (FUNC_5() * VAR_4)) < 0) {
        VAR_6 = (mdns_action_t *)FUNC_3(sizeof(mdns_action_t));
        if (VAR_6) {
            VAR_6->type = VAR_0;
            VAR_6->data.tx_handle.packet = VAR_5;
            VAR_5->queued = 1;
            if (FUNC_4(VAR_2->action_queue, &VAR_6, (portTickType)0) != VAR_3) {
                FUNC_2(VAR_6);
                VAR_5->queued = 0;
            }
        } else {
            VAR_1;

        }
    }
    FUNC_1();
}
