
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; scalar_t__ host; scalar_t__ service; scalar_t__ proto; struct TYPE_4__* next; } ;
typedef TYPE_1__ mdns_out_question_t ;



__attribute__((used)) static bool FUNC_0(mdns_out_question_t * VAR_0, mdns_out_question_t * VAR_1)
{
    while (VAR_1) {
        if (VAR_1->type == VAR_0->type
            && VAR_1->host == VAR_0->host
            && VAR_1->service == VAR_0->service
            && VAR_1->proto == VAR_0->proto) {
            return 1;
        }
        VAR_1 = VAR_1->next;
    }
    return 0;
}
