
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
typedef int mdns_srv_item_t ;
struct TYPE_6__ {struct TYPE_6__* next; struct TYPE_6__* domain; struct TYPE_6__* proto; struct TYPE_6__* service; struct TYPE_6__* host; } ;
typedef TYPE_1__ mdns_parsed_question_t ;
struct TYPE_7__ {TYPE_1__* questions; } ;
typedef TYPE_2__ mdns_parsed_packet_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(mdns_parsed_packet_t * VAR_0, uint16_t VAR_1, mdns_srv_item_t * VAR_2)
{
    mdns_parsed_question_t * VAR_3 = VAR_0->questions;

    if (FUNC_0(VAR_3, VAR_1, VAR_2)) {
        VAR_0->questions = VAR_3->next;
        FUNC_1(VAR_3->host);
        FUNC_1(VAR_3->service);
        FUNC_1(VAR_3->proto);
        FUNC_1(VAR_3->domain);
        FUNC_1(VAR_3);
        return;
    }

    while (VAR_3->next) {
        mdns_parsed_question_t * VAR_4 = VAR_3->next;
        if (FUNC_0(VAR_4, VAR_1, VAR_2)) {
            VAR_3->next = VAR_4->next;
            FUNC_1(VAR_4->host);
            FUNC_1(VAR_4->service);
            FUNC_1(VAR_4->proto);
            FUNC_1(VAR_4->domain);
            FUNC_1(VAR_4);
            return;
        }
        VAR_3 = VAR_3->next;
    }
}
