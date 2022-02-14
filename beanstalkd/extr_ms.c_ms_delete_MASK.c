
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t len; int (* onremove ) (TYPE_1__*,void*,size_t) ;void** items; } ;
typedef TYPE_1__ Ms ;


 int FUNC_0 (TYPE_1__*,void*,size_t) ;

__attribute__((used)) static int
FUNC_1(Ms *VAR_0, size_t VAR_1)
{
    void *VAR_2;

    if (VAR_1 >= VAR_0->len)
        return 0;
    VAR_2 = VAR_0->items[VAR_1];
    VAR_0->items[VAR_1] = VAR_0->items[--VAR_0->len];


    if (VAR_0->onremove)
        VAR_0->onremove(VAR_0, VAR_2, VAR_1);
    return 1;
}
