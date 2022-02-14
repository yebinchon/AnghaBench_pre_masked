
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_13__ {size_t tcpip_if; size_t ip_protocol; TYPE_4__* questions; } ;
typedef TYPE_2__ mdns_tx_packet_t ;
struct TYPE_14__ {int state; int probe_running; int probe_ip; int * probe_services; int failed_probes; int probe_services_len; } ;
typedef TYPE_3__ mdns_pcb_t ;
typedef void* mdns_pcb_state_t ;
struct TYPE_15__ {int unicast; struct TYPE_15__* next; } ;
typedef TYPE_4__ mdns_out_question_t ;
struct TYPE_16__ {TYPE_1__* interfaces; } ;
struct TYPE_12__ {TYPE_3__* pcbs; } ;





 int VAR_0 ;



 int VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 TYPE_6__* VAR_2 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(mdns_tx_packet_t * VAR_3)
{
    mdns_tx_packet_t * VAR_4 = ((void*)0);
    mdns_out_question_t * VAR_5 = ((void*)0);
    mdns_pcb_t * VAR_6 = &VAR_2->interfaces[VAR_3->tcpip_if].pcbs[VAR_3->ip_protocol];
    uint32_t VAR_7 = 1000;

    if (VAR_6->state == VAR_0) {
        FUNC_2(VAR_3);
        return;
    }
    FUNC_1(VAR_3);

    switch(VAR_6->state) {
    case 130:
        VAR_5 = VAR_3->questions;
        while (VAR_5) {
            VAR_5->unicast = 0;
            VAR_5 = VAR_5->next;
        }

    case 129:
        FUNC_3(VAR_3, 250);
        VAR_6->state = (mdns_pcb_state_t)((uint8_t)(VAR_6->state) + 1);
        break;
    case 128:
        VAR_4 = FUNC_0(VAR_3);
        if (!VAR_4) {
            FUNC_3(VAR_3, 250);
            break;
        }
        VAR_6->probe_running = 0;
        VAR_6->probe_ip = 0;
        VAR_6->probe_services_len = 0;
        VAR_6->failed_probes = 0;
        FUNC_4(VAR_6->probe_services);
        VAR_6->probe_services = ((void*)0);
        FUNC_2(VAR_3);
        VAR_3 = VAR_4;
        VAR_7 = 250;

    case 133:

    case 132:
        FUNC_3(VAR_3, VAR_7);
        VAR_6->state = (mdns_pcb_state_t)((uint8_t)(VAR_6->state) + 1);
        break;
    case 131:
        VAR_6->state = VAR_1;
        FUNC_2(VAR_3);
        break;
    default:
        FUNC_2(VAR_3);
        break;
    }
}
