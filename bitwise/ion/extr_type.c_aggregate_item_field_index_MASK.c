
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t num_fields; TYPE_1__* fields; } ;
struct TYPE_8__ {TYPE_2__ aggregate; } ;
typedef TYPE_3__ Type ;
struct TYPE_6__ {char const* name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;

int FUNC_2(Type *VAR_0, const char *VAR_1) {
    FUNC_0(FUNC_1(VAR_0));
    for (size_t VAR_2 = 0; VAR_2 < VAR_0->aggregate.num_fields; VAR_2++) {
        if (VAR_0->aggregate.fields[VAR_2].name == VAR_1) {
            return (int)VAR_2;
        }
    }
    return -1;
}
