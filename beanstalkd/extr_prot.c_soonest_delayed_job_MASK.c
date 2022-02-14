
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ len; TYPE_4__** data; } ;
struct TYPE_9__ {TYPE_2__ delay; } ;
typedef TYPE_3__ Tube ;
struct TYPE_11__ {size_t len; TYPE_3__** items; } ;
struct TYPE_7__ {scalar_t__ deadline_at; } ;
struct TYPE_10__ {TYPE_1__ r; } ;
typedef TYPE_4__ Job ;


 TYPE_5__ VAR_0 ;

__attribute__((used)) static Job *
FUNC_0()
{
    Job *VAR_1 = ((void*)0);
    size_t VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0.len; VAR_2++) {
        Tube *VAR_3 = VAR_0.items[VAR_2];
        if (VAR_3->delay.len == 0) {
            continue;
        }
        Job *VAR_4 = VAR_3->delay.data[0];
        if (!VAR_1 || VAR_4->r.deadline_at < VAR_1->r.deadline_at)
            VAR_1 = VAR_4;
    }
    return VAR_1;
}
