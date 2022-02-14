
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ mdns_tx_packet_t ;
struct TYPE_5__ {TYPE_1__* tx_queue_head; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_1(void)
{
    mdns_tx_packet_t * VAR_1;
    while (VAR_0->tx_queue_head) {
        VAR_1 = VAR_0->tx_queue_head;
        VAR_0->tx_queue_head = VAR_0->tx_queue_head->next;
        FUNC_0(VAR_1);
    }
}
