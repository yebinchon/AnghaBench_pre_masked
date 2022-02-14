
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int pos; } ;
struct TYPE_7__ {int is_const; } ;
typedef TYPE_1__ Operand ;
typedef TYPE_2__ Expr ;


 int FUNC_0 (int ,char*) ;
 TYPE_1__ FUNC_1 (TYPE_2__*) ;

Operand FUNC_2(Expr *VAR_0) {
    Operand VAR_1 = FUNC_1(VAR_0);
    if (!VAR_1.is_const) {
        FUNC_0(VAR_0->pos, "Expected constant expression");
    }
    return VAR_1;
}
