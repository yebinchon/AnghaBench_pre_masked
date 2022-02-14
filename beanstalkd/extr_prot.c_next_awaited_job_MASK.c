
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_6__ {int ** data; scalar_t__ len; } ;
struct TYPE_5__ {scalar_t__ len; } ;
struct TYPE_7__ {scalar_t__ unpause_at; TYPE_2__ ready; TYPE_1__ waiting_conns; scalar_t__ pause; } ;
typedef TYPE_3__ Tube ;
struct TYPE_8__ {size_t len; TYPE_3__** items; } ;
typedef int Job ;


 scalar_t__ FUNC_0 (int *,int *) ;
 TYPE_4__ VAR_0 ;

__attribute__((used)) static Job *
FUNC_1(int64 VAR_1)
{
    size_t VAR_2;
    Job *VAR_3 = ((void*)0);

    for (VAR_2 = 0; VAR_2 < VAR_0.len; VAR_2++) {
        Tube *VAR_4 = VAR_0.items[VAR_2];
        if (VAR_4->pause) {
            if (VAR_4->unpause_at > VAR_1)
                continue;
            VAR_4->pause = 0;
        }
        if (VAR_4->waiting_conns.len && VAR_4->ready.len) {
            Job *VAR_5 = VAR_4->ready.data[0];
            if (!VAR_3 || FUNC_0(VAR_5, VAR_3)) {
                VAR_3 = VAR_5;
            }
        }
    }
    return VAR_3;
}
