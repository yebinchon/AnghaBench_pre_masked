
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int Type ;
struct TYPE_5__ {int is_lvalue; int type; } ;
typedef TYPE_1__ Operand ;


 int FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int ) ;

bool FUNC_3(Operand *VAR_0, Type *VAR_1) {
    if (FUNC_1(VAR_0, VAR_1)) {
        FUNC_0(VAR_0, VAR_1);
        VAR_0->type = FUNC_2(VAR_0->type);
        VAR_0->is_lvalue = 0;
        return 1;
    }
    return 0;
}
