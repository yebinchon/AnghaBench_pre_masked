
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* ms_event_fn ;
struct TYPE_3__ {void* onremove; void* oninsert; int * items; scalar_t__ last; scalar_t__ cap; scalar_t__ len; } ;
typedef TYPE_1__ Ms ;



void
FUNC_0(Ms *VAR_0, ms_event_fn VAR_1, ms_event_fn VAR_2)
{
    VAR_0->len = VAR_0->cap = VAR_0->last = 0;
    VAR_0->items = ((void*)0);
    VAR_0->oninsert = VAR_1;
    VAR_0->onremove = VAR_2;
}
