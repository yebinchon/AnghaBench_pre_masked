
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int mdns_srv_item_t ;
struct TYPE_5__ {int probe_running; scalar_t__ probe_services_len; int * probe_services; scalar_t__ pcb; } ;
typedef TYPE_2__ mdns_pcb_t ;
typedef int mdns_ip_protocol_t ;
typedef int mdns_if_t ;
struct TYPE_6__ {TYPE_1__* interfaces; } ;
struct TYPE_4__ {TYPE_2__* pcbs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int ,int **,size_t,int) ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(mdns_srv_item_t ** VAR_3, size_t VAR_4, bool VAR_5, bool VAR_6)
{
    uint8_t VAR_7, VAR_8;
    for (VAR_7=0; VAR_7<VAR_0; VAR_7++) {
        for (VAR_8=0; VAR_8<VAR_1; VAR_8++) {
            if (VAR_2->interfaces[VAR_7].pcbs[VAR_8].pcb) {
                mdns_pcb_t * VAR_9 = &VAR_2->interfaces[VAR_7].pcbs[VAR_8];
                if (VAR_6) {
                    FUNC_1(VAR_9->probe_services);
                    VAR_9->probe_services = ((void*)0);
                    VAR_9->probe_services_len = 0;
                    VAR_9->probe_running = 0;
                }
                FUNC_0((mdns_if_t)VAR_7, (mdns_ip_protocol_t)VAR_8, VAR_3, VAR_4, VAR_5);
            }
        }
    }
}
