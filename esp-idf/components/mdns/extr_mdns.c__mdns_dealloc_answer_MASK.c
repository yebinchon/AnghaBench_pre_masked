
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_6__ {scalar_t__ service; int * member_1; int * member_0; } ;
typedef TYPE_1__ mdns_srv_item_t ;
struct TYPE_7__ {scalar_t__ type; scalar_t__ service; struct TYPE_7__* next; } ;
typedef TYPE_2__ mdns_out_answer_t ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(mdns_out_answer_t ** VAR_0, uint16_t VAR_1, mdns_srv_item_t * VAR_2)
{
    mdns_out_answer_t * VAR_3 = *VAR_0;
    if (!VAR_3) {
        return;
    }
    mdns_srv_item_t VAR_4 = {((void*)0), ((void*)0)};
    if (!VAR_2) {
        VAR_2 = &VAR_4;
    }
    if (VAR_3->type == VAR_1 && VAR_3->service == VAR_2->service) {
        *VAR_0 = VAR_3->next;
        FUNC_0(VAR_3);
        return;
    }
    while (VAR_3->next) {
        mdns_out_answer_t * VAR_5 = VAR_3->next;
        if (VAR_5->type == VAR_1 && VAR_5->service == VAR_2->service) {
            VAR_3->next = VAR_5->next;
            FUNC_0(VAR_5);
            return;
        }
        VAR_3 = VAR_3->next;
    }
}
