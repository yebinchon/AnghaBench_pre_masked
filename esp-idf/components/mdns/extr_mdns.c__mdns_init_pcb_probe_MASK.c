
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int mdns_srv_item_t ;
struct TYPE_6__ {int probe_services_len; int ** probe_services; int state; } ;
typedef TYPE_2__ mdns_pcb_t ;
typedef size_t mdns_ip_protocol_t ;
typedef size_t mdns_if_t ;
struct TYPE_7__ {int hostname; TYPE_1__* interfaces; } ;
struct TYPE_5__ {TYPE_2__* pcbs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (size_t,size_t) ;
 int FUNC_2 (size_t,size_t,int **,size_t,int) ;
 TYPE_3__* VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(mdns_if_t VAR_2, mdns_ip_protocol_t VAR_3, mdns_srv_item_t ** VAR_4, size_t VAR_5, bool VAR_6)
{
    mdns_pcb_t * VAR_7 = &VAR_1->interfaces[VAR_2].pcbs[VAR_3];

    FUNC_1(VAR_2, VAR_3);

    if (FUNC_3(VAR_1->hostname)) {
        VAR_7->state = VAR_0;
        return;
    }

    if (FUNC_0(VAR_7)) {

        mdns_srv_item_t * VAR_8[VAR_5];
        int VAR_9 = 0;
        bool VAR_10;
        for (int VAR_11=0; VAR_11 < VAR_5; ++VAR_11) {
            VAR_10 = 0;
            for (int VAR_12=0; VAR_12 < VAR_7->probe_services_len; ++VAR_12) {
                if (VAR_7->probe_services[VAR_12] == VAR_4[VAR_11]) {
                    VAR_10 = 1;
                    break;
                }
            }
            if (!VAR_10) {
                VAR_8[VAR_9++] = VAR_4[VAR_11];
            }
        }

        FUNC_2(VAR_2, VAR_3,
                                         VAR_9?VAR_8:((void*)0), VAR_9, VAR_6);
    } else {

        FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
    }
}
