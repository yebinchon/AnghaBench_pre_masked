
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ send_at; struct TYPE_4__* next; } ;
typedef TYPE_1__ mdns_tx_packet_t ;
struct TYPE_5__ {TYPE_1__* tx_queue_head; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(mdns_tx_packet_t * VAR_2, uint32_t VAR_3)
{
    if (!VAR_2) {
        return;
    }
    VAR_2->send_at = (FUNC_0() * VAR_1) + VAR_3;
    VAR_2->next = ((void*)0);
    if (!VAR_0->tx_queue_head || VAR_0->tx_queue_head->send_at > VAR_2->send_at) {
        VAR_2->next = VAR_0->tx_queue_head;
        VAR_0->tx_queue_head = VAR_2;
        return;
    }
    mdns_tx_packet_t * VAR_4 = VAR_0->tx_queue_head;
    while (VAR_4->next && VAR_4->next->send_at <= VAR_2->send_at) {
        VAR_4 = VAR_4->next;
    }
    VAR_2->next = VAR_4->next;
    VAR_4->next = VAR_2;
}
