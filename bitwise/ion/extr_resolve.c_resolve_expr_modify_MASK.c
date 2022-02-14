
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ kind; scalar_t__ nonmodifiable; } ;
typedef TYPE_2__ Type ;
struct TYPE_12__ {int op; int expr; } ;
struct TYPE_15__ {TYPE_1__ modify; int pos; } ;
struct TYPE_14__ {int is_lvalue; TYPE_2__* type; } ;
typedef TYPE_3__ Operand ;
typedef TYPE_4__ Expr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 TYPE_3__ FUNC_3 (TYPE_2__*) ;
 TYPE_3__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

Operand FUNC_6(Expr *VAR_1) {
    Operand VAR_2 = FUNC_4(VAR_1->modify.expr);
    Type *VAR_3 = VAR_2.type;
    FUNC_0(VAR_3);
    if (!VAR_2.is_lvalue) {
        FUNC_1(VAR_1->pos, "Cannot modify non-lvalue");
    }
    if (VAR_3->nonmodifiable) {
        FUNC_1(VAR_1->pos, "Cannot modify non-modifiable type");
    }
    if (!(FUNC_2(VAR_3) || VAR_3->kind == VAR_0)) {
        FUNC_1(VAR_1->pos, "%s only valid for integer and pointer types", FUNC_5(VAR_1->modify.op));
    }
    return FUNC_3(VAR_3);
}
