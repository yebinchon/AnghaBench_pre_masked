
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mdns_tx_packet_t ;
typedef int mdns_search_once_t ;
typedef size_t mdns_ip_protocol_t ;
typedef size_t mdns_if_t ;
struct TYPE_6__ {TYPE_2__* interfaces; } ;
struct TYPE_5__ {TYPE_1__* pcbs; } ;
struct TYPE_4__ {scalar_t__ state; scalar_t__ pcb; } ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,size_t,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static void FUNC_3(mdns_search_once_t * VAR_2, mdns_if_t VAR_3, mdns_ip_protocol_t VAR_4)
{
    mdns_tx_packet_t * VAR_5 = ((void*)0);
    if (VAR_1->interfaces[VAR_3].pcbs[VAR_4].pcb && VAR_1->interfaces[VAR_3].pcbs[VAR_4].state > VAR_0) {
        VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
        if (!VAR_5) {
            return;
        }
        FUNC_1(VAR_5);
        FUNC_2(VAR_5);
    }
}
