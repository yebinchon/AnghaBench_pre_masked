
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* fields; scalar_t__ num_fields; } ;
struct TYPE_9__ {TYPE_2__ aggregate; } ;
typedef TYPE_3__ Type ;
struct TYPE_7__ {TYPE_3__* type; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;

Type *FUNC_2(Type *VAR_0, int VAR_1) {
    FUNC_0(FUNC_1(VAR_0));
    FUNC_0(0 <= VAR_1 && VAR_1 < (int)VAR_0->aggregate.num_fields);
    return VAR_0->aggregate.fields[VAR_1].type;
}
