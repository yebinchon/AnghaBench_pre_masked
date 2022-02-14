
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int mdns_tx_packet_t ;
typedef int mdns_srv_item_t ;
struct TYPE_6__ {size_t probe_services_len; int probe_ip; int probe_running; int failed_probes; int state; int ** probe_services; } ;
typedef TYPE_2__ mdns_pcb_t ;
typedef size_t mdns_ip_protocol_t ;
typedef size_t mdns_if_t ;
struct TYPE_7__ {TYPE_1__* interfaces; } ;
struct TYPE_5__ {TYPE_2__* pcbs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (size_t,size_t,int **,size_t,int,int) ;
 int FUNC_2 (int *,int) ;
 TYPE_3__* VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (int **) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(mdns_if_t VAR_3, mdns_ip_protocol_t VAR_4, mdns_srv_item_t ** VAR_5, size_t VAR_6, bool VAR_7)
{
    mdns_pcb_t * VAR_8 = &VAR_2->interfaces[VAR_3].pcbs[VAR_4];
    size_t VAR_9 = VAR_6;

    if (FUNC_0(VAR_8)) {
        VAR_9 += VAR_8->probe_services_len;
    }
    mdns_srv_item_t ** VAR_10 = ((void*)0);
    if (VAR_9) {
        VAR_10 = (mdns_srv_item_t **)FUNC_5(sizeof(mdns_srv_item_t *) * VAR_9);
        if (!VAR_10) {
            VAR_0;
            return;
        }

        size_t VAR_11;
        for (VAR_11=0; VAR_11<VAR_6; VAR_11++) {
            VAR_10[VAR_11] = VAR_5[VAR_11];
        }
        if (VAR_8->probe_services) {
            for (VAR_11=0; VAR_11<VAR_8->probe_services_len; VAR_11++) {
                VAR_10[VAR_6+VAR_11] = VAR_8->probe_services[VAR_11];
            }
            FUNC_4(VAR_8->probe_services);
        }
    }

    VAR_7 = VAR_8->probe_ip || VAR_7;

    VAR_8->probe_ip = 0;
    VAR_8->probe_services = ((void*)0);
    VAR_8->probe_services_len = 0;
    VAR_8->probe_running = 0;

    mdns_tx_packet_t * VAR_12 = FUNC_1(VAR_3, VAR_4, VAR_10, VAR_9, 1, VAR_7);
    if (!VAR_12) {
        FUNC_4(VAR_10);
        return;
    }

    VAR_8->probe_ip = VAR_7;
    VAR_8->probe_services = VAR_10;
    VAR_8->probe_services_len = VAR_9;
    VAR_8->probe_running = 1;
    FUNC_2(VAR_12, ((VAR_8->failed_probes > 5)?1000:120) + (FUNC_3() & 0x7F));
    VAR_8->state = VAR_1;
}
