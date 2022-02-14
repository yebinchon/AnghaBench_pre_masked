
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tcpip_if; scalar_t__ ip_protocol; struct TYPE_4__* next; } ;
typedef TYPE_1__ mdns_tx_packet_t ;
typedef scalar_t__ mdns_ip_protocol_t ;
typedef scalar_t__ mdns_if_t ;
struct TYPE_5__ {TYPE_1__* tx_queue_head; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static mdns_tx_packet_t * FUNC_0(mdns_if_t VAR_1, mdns_ip_protocol_t VAR_2)
{
    mdns_tx_packet_t * VAR_3 = VAR_0->tx_queue_head;
    while (VAR_3) {
        if (VAR_3->tcpip_if == VAR_1 && VAR_3->ip_protocol == VAR_2) {
            return VAR_3;
        }
        VAR_3 = VAR_3->next;
    }
    return ((void*)0);
}
