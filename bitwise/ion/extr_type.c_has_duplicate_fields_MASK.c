
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t num_fields; TYPE_1__* fields; } ;
struct TYPE_7__ {TYPE_2__ aggregate; } ;
typedef TYPE_3__ Type ;
struct TYPE_5__ {scalar_t__ name; } ;



bool FUNC_0(Type *VAR_0) {
    for (size_t VAR_1 = 0; VAR_1 < VAR_0->aggregate.num_fields; VAR_1++) {
        for (size_t VAR_2 = VAR_1+1; VAR_2 < VAR_0->aggregate.num_fields; VAR_2++) {
            if (VAR_0->aggregate.fields[VAR_1].name == VAR_0->aggregate.fields[VAR_2].name) {
                return 1;
            }
        }
    }
    return 0;
}
