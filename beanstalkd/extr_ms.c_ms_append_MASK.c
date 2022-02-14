
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ len; scalar_t__ cap; int (* oninsert ) (TYPE_1__*,void*,scalar_t__) ;void** items; } ;
typedef TYPE_1__ Ms ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,void*,scalar_t__) ;

int
FUNC_2(Ms *VAR_0, void *VAR_1)
{
    if (VAR_0->len >= VAR_0->cap && !FUNC_0(VAR_0))
        return 0;

    VAR_0->items[VAR_0->len++] = VAR_1;
    if (VAR_0->oninsert)
        VAR_0->oninsert(VAR_0, VAR_1, VAR_0->len - 1);
    return 1;
}
