
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Type ;
struct TYPE_3__ {int * type; int is_lvalue; } ;
typedef TYPE_1__ Operand ;
typedef int Expr ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;

void FUNC_2(Operand *VAR_0, Expr *VAR_1) {
    Type *VAR_2 = FUNC_1(VAR_0->type);
    if (!VAR_0->is_lvalue && VAR_2 != VAR_0->type) {
        FUNC_0(VAR_1, VAR_2);
        VAR_0->type = VAR_2;
    }
}
