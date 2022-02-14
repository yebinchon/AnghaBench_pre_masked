
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ mdns_search_once_t ;
struct TYPE_5__ {TYPE_1__* search_once; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_0(mdns_search_once_t * VAR_1)
{
    VAR_1->next = VAR_0->search_once;
    VAR_0->search_once = VAR_1;
}
