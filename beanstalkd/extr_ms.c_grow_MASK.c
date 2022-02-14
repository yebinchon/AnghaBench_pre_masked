
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cap; void** items; int len; } ;
typedef TYPE_1__ Ms ;


 int FUNC_0 (void**) ;
 void** FUNC_1 (size_t) ;
 int FUNC_2 (void**,void**,int) ;

__attribute__((used)) static int
FUNC_3(Ms *VAR_0)
{
    void **VAR_1;
    size_t VAR_2 = VAR_0->cap << 1;
    if (!VAR_2)
        VAR_2 = 1;

    VAR_1 = FUNC_1(VAR_2 * sizeof(void *));
    if (!VAR_1)
        return 0;

    FUNC_2(VAR_1, VAR_0->items, VAR_0->len * sizeof(void *));
    FUNC_0(VAR_0->items);
    VAR_0->items = VAR_1;
    VAR_0->cap = VAR_2;
    return 1;
}
