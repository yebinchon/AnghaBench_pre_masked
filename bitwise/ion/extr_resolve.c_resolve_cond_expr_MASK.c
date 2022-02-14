
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pos; } ;
typedef int Operand ;
typedef TYPE_1__ Expr ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(Expr *VAR_0) {
    Operand VAR_1 = FUNC_2(VAR_0);
    if (!FUNC_1(VAR_1)) {
        FUNC_0(VAR_0->pos, "Conditional expression must have scalar type");
    }
}
