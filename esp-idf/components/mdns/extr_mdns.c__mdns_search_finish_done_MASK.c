
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ max_results; scalar_t__ num_results; struct TYPE_4__* next; } ;
typedef TYPE_1__ mdns_search_once_t ;
struct TYPE_5__ {TYPE_1__* search_once; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_1(void)
{
    mdns_search_once_t * VAR_1 = VAR_0->search_once;
    mdns_search_once_t * VAR_2 = ((void*)0);
    while (VAR_1) {
        VAR_2 = VAR_1;
        VAR_1 = VAR_1->next;
        if (VAR_2->max_results && VAR_2->num_results >= VAR_2->max_results) {
            FUNC_0(VAR_2);
        }
    }
}
