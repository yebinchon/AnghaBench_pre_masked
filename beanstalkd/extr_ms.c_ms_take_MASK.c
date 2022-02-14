
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; int last; void** items; } ;
typedef TYPE_1__ Ms ;


 int FUNC_0 (TYPE_1__*,size_t) ;

void *
FUNC_1(Ms *VAR_0)
{
    void *VAR_1;

    if (!VAR_0->len)
        return ((void*)0);




    VAR_0->last = VAR_0->last % VAR_0->len;
    VAR_1 = VAR_0->items[VAR_0->last];
    FUNC_0(VAR_0, VAR_0->last);
    ++VAR_0->last;
    return VAR_1;
}
