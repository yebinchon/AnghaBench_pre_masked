
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_7__ {scalar_t__ tcpip_if; scalar_t__ ip_protocol; struct TYPE_7__* next; TYPE_3__* answers; scalar_t__ distributed; } ;
typedef TYPE_1__ mdns_tx_packet_t ;
struct TYPE_8__ {scalar_t__ service; int * member_1; int * member_0; } ;
typedef TYPE_2__ mdns_srv_item_t ;
struct TYPE_9__ {scalar_t__ type; scalar_t__ service; struct TYPE_9__* next; } ;
typedef TYPE_3__ mdns_out_answer_t ;
typedef scalar_t__ mdns_ip_protocol_t ;
typedef scalar_t__ mdns_if_t ;
struct TYPE_10__ {TYPE_1__* tx_queue_head; } ;


 TYPE_5__* VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(mdns_if_t VAR_1, mdns_ip_protocol_t VAR_2, uint16_t VAR_3, mdns_srv_item_t * VAR_4)
{
    mdns_srv_item_t VAR_5 = {((void*)0), ((void*)0)};
    if (!VAR_4) {
        VAR_4 = &VAR_5;
    }
    mdns_tx_packet_t * VAR_6 = VAR_0->tx_queue_head;
    while (VAR_6) {
        if (VAR_6->tcpip_if == VAR_1 && VAR_6->ip_protocol == VAR_2 && VAR_6->distributed) {
            mdns_out_answer_t * VAR_7 = VAR_6->answers;
            if (VAR_7->type == VAR_3 && VAR_7->service == VAR_4->service) {
                VAR_6->answers = VAR_6->answers->next;
                FUNC_0(VAR_7);
            } else {
                while (VAR_7->next) {
                    if (VAR_7->next->type == VAR_3 && VAR_7->next->service == VAR_4->service) {
                        mdns_out_answer_t * VAR_8 = VAR_7->next;
                        VAR_7->next = VAR_8->next;
                        FUNC_0(VAR_8);
                        break;
                    }
                    VAR_7 = VAR_7->next;
                }
            }
        }
        VAR_6 = VAR_6->next;
    }
}
