
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ len; } ;
struct TYPE_8__ {TYPE_1__ ready; } ;
typedef TYPE_3__ Tube ;
struct TYPE_7__ {size_t len; scalar_t__* items; } ;
struct TYPE_9__ {TYPE_2__ watch; } ;
typedef TYPE_4__ Conn ;



int
FUNC_0(Conn *VAR_0)
{
    size_t VAR_1;

    for (VAR_1 = 0; VAR_1 < VAR_0->watch.len; VAR_1++) {
        if (((Tube *) VAR_0->watch.items[VAR_1])->ready.len)
            return 1;
    }
    return 0;
}
