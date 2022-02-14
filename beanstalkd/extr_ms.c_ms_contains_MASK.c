
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; void** items; } ;
typedef TYPE_1__ Ms ;



int
FUNC_0(Ms *VAR_0, void *VAR_1)
{
    size_t VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0->len; VAR_2++) {
        if (VAR_0->items[VAR_2] == VAR_1)
            return 1;
    }
    return 0;
}
