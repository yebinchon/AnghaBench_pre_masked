
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* time_prev; TYPE_2__* time_next; } ;
typedef TYPE_3__ aas_routingcache_t ;
struct TYPE_9__ {TYPE_2__* oldestcache; TYPE_1__* newestcache; } ;
struct TYPE_7__ {TYPE_1__* time_prev; } ;
struct TYPE_6__ {TYPE_2__* time_next; } ;


 TYPE_4__ VAR_0 ;

void FUNC_0(aas_routingcache_t *VAR_1)
{
 if (VAR_1->time_next) VAR_1->time_next->time_prev = VAR_1->time_prev;
 else VAR_0.newestcache = VAR_1->time_prev;
 if (VAR_1->time_prev) VAR_1->time_prev->time_next = VAR_1->time_next;
 else VAR_0.oldestcache = VAR_1->time_next;
 VAR_1->time_next = ((void*)0);
 VAR_1->time_prev = ((void*)0);
}
