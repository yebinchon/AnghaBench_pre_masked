
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int Type ;
struct TYPE_4__ {int * type; } ;
typedef TYPE_1__ Operand ;


 scalar_t__ FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool FUNC_3(Operand *VAR_0, Type *VAR_1) {
    Type *VAR_2 = VAR_0->type;
    if (FUNC_0(VAR_0, VAR_1)) {
        return 1;
    } else if (FUNC_1(VAR_1)) {
        return FUNC_2(VAR_2);
    } else if (FUNC_1(VAR_2)) {
        return FUNC_2(VAR_1);
    } else if (FUNC_2(VAR_1) && FUNC_2(VAR_2)) {
        return 1;
    } else {
        return 0;
    }
}
