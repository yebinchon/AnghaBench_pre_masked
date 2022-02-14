
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int probe_ip; int probe_running; scalar_t__ failed_probes; scalar_t__ probe_services_len; int * probe_services; int * pcb; int state; } ;
typedef TYPE_2__ mdns_pcb_t ;
typedef size_t mdns_ip_protocol_t ;
typedef size_t mdns_if_t ;
struct TYPE_6__ {TYPE_1__* interfaces; } ;
struct TYPE_4__ {TYPE_2__* pcbs; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (size_t,size_t,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(mdns_if_t VAR_2, mdns_ip_protocol_t VAR_3)
{
    if (!VAR_1) {
        return;
    }
    mdns_pcb_t * VAR_4 = &VAR_1->interfaces[VAR_2].pcbs[VAR_3];
    if (VAR_4->pcb) {
        FUNC_3(VAR_4->probe_services);
        VAR_4->state = VAR_0;
        VAR_4->pcb = ((void*)0);
        VAR_4->probe_ip = 0;
        VAR_4->probe_services = ((void*)0);
        VAR_4->probe_services_len = 0;
        VAR_4->probe_running = 0;
        VAR_4->failed_probes = 0;
        FUNC_0(VAR_2, VAR_3, 0);
        if(!FUNC_1()) {
            FUNC_2();
        }
    }
}
