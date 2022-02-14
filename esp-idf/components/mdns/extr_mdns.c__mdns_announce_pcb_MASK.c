
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int answers; int additional; } ;
typedef TYPE_2__ mdns_tx_packet_t ;
struct TYPE_16__ {int * service; } ;
typedef TYPE_3__ mdns_srv_item_t ;
struct TYPE_17__ {scalar_t__ state; scalar_t__ pcb; } ;
typedef TYPE_4__ mdns_pcb_t ;
typedef size_t mdns_ip_protocol_t ;
typedef size_t mdns_if_t ;
struct TYPE_18__ {int hostname; TYPE_1__* interfaces; } ;
struct TYPE_14__ {TYPE_4__* pcbs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *,int ,int *,int,int) ;
 TYPE_2__* FUNC_3 (size_t,size_t,TYPE_3__**,size_t,int) ;
 int FUNC_4 (int *,int ,int *) ;
 TYPE_2__* FUNC_5 (size_t,size_t) ;
 int FUNC_6 (size_t,size_t,TYPE_3__**,size_t,int) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 TYPE_5__* VAR_8 ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(mdns_if_t VAR_9, mdns_ip_protocol_t VAR_10, mdns_srv_item_t ** VAR_11, size_t VAR_12, bool VAR_13)
{
    mdns_pcb_t * VAR_14 = &VAR_8->interfaces[VAR_9].pcbs[VAR_10];
    size_t VAR_15;
    if (VAR_14->pcb) {
        if (FUNC_1(VAR_14)) {
            FUNC_6(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
        } else if (FUNC_0(VAR_14)) {
            mdns_tx_packet_t * VAR_16 = FUNC_5(VAR_9, VAR_10);
            if (VAR_16) {
                for (VAR_15=0; VAR_15<VAR_12; VAR_15++) {
                    if (!FUNC_2(&VAR_16->answers, VAR_3, VAR_11[VAR_15]->service, 0, 0)
                            || !FUNC_2(&VAR_16->answers, VAR_2, VAR_11[VAR_15]->service, 0, 0)
                            || !FUNC_2(&VAR_16->answers, VAR_4, VAR_11[VAR_15]->service, 1, 0)
                            || !FUNC_2(&VAR_16->answers, VAR_5, VAR_11[VAR_15]->service, 1, 0)) {
                        break;
                    }
                }
                if (VAR_13) {
                    FUNC_4(&VAR_16->additional, VAR_0, ((void*)0));
                    FUNC_4(&VAR_16->additional, VAR_1, ((void*)0));
                    FUNC_2(&VAR_16->answers, VAR_0, ((void*)0), 1, 0);
                    FUNC_2(&VAR_16->answers, VAR_1, ((void*)0), 1, 0);
                }
                VAR_14->state = VAR_6;
            }
        } else if (VAR_14->state == VAR_7) {

            if (FUNC_8(VAR_8->hostname)) {
                return;
            }

            VAR_14->state = VAR_6;
            mdns_tx_packet_t * VAR_17 = FUNC_3(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
            if (VAR_17) {
                FUNC_7(VAR_17, 0);
            }
        }
    }
}
