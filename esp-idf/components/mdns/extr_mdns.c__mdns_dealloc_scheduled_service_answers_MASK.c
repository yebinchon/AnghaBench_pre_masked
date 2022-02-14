
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mdns_service_t ;
struct TYPE_4__ {struct TYPE_4__* next; int * service; } ;
typedef TYPE_1__ mdns_out_answer_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(mdns_out_answer_t ** VAR_0, mdns_service_t * VAR_1)
{
    mdns_out_answer_t * VAR_2 = *VAR_0;
    if (!VAR_2) {
        return;
    }
    while (VAR_2 && VAR_2->service == VAR_1) {
        *VAR_0 = VAR_2->next;
        FUNC_0(VAR_2);
        VAR_2 = *VAR_0;
    }
    while (VAR_2 && VAR_2->next) {
        mdns_out_answer_t * VAR_3 = VAR_2->next;
        if (VAR_3->service == VAR_1) {
            VAR_2->next = VAR_3->next;
            FUNC_0(VAR_3);
        } else {
            VAR_2 = VAR_2->next;
        }
    }
}
