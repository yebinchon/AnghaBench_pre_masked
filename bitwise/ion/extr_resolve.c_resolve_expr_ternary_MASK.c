
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_11__ ;


typedef int Type ;
struct TYPE_21__ {int else_expr; int then_expr; int cond; } ;
struct TYPE_23__ {scalar_t__ kind; int pos; TYPE_1__ ternary; } ;
struct TYPE_20__ {scalar_t__ i; } ;
struct TYPE_22__ {TYPE_11__* type; TYPE_14__ val; scalar_t__ is_const; } ;
struct TYPE_19__ {scalar_t__ base; } ;
typedef TYPE_2__ Operand ;
typedef TYPE_3__ Expr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (TYPE_11__*) ;
 scalar_t__ FUNC_3 (TYPE_2__) ;
 scalar_t__ FUNC_4 (TYPE_11__*) ;
 int FUNC_5 (TYPE_11__*) ;
 TYPE_2__ FUNC_6 (TYPE_11__*,TYPE_14__) ;
 TYPE_2__ FUNC_7 (TYPE_11__*) ;
 TYPE_2__ FUNC_8 (int ,int *) ;
 TYPE_2__ FUNC_9 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_10 (TYPE_2__*,TYPE_2__*) ;

Operand FUNC_11(Expr *VAR_3, Type *VAR_4) {
    FUNC_0(VAR_3->kind == VAR_0);
    Operand VAR_5 = FUNC_9(VAR_3->ternary.cond);
    if (!FUNC_5(VAR_5.type)) {
        FUNC_1(VAR_3->pos, "Ternary conditional must have scalar type");
    }
    Operand VAR_6 = FUNC_8(VAR_3->ternary.then_expr, VAR_4);
    Operand VAR_7 = FUNC_8(VAR_3->ternary.else_expr, VAR_4);
    if (VAR_6.type == VAR_7.type) {
        return FUNC_7(VAR_6.type);
    } else if (FUNC_2(VAR_6.type) && FUNC_2(VAR_7.type)) {
        FUNC_10(&VAR_6, &VAR_7);
        if (VAR_5.is_const && VAR_6.is_const && VAR_7.is_const) {
            return FUNC_6(VAR_6.type, VAR_5.val.i ? VAR_6.val : VAR_7.val);
        } else {
            return FUNC_7(VAR_6.type);
        }
    } else if (FUNC_4(VAR_6.type) && FUNC_3(VAR_7)) {
        return FUNC_7(VAR_6.type);
    } else if (FUNC_4(VAR_7.type) && FUNC_3(VAR_6)) {
        return FUNC_7(VAR_7.type);
    } else {
        if (FUNC_4(VAR_6.type) && FUNC_4(VAR_7.type)) {
            if (VAR_6.type->base == VAR_2 && VAR_7.type->base == VAR_1) {
                return FUNC_7(VAR_7.type);
            } else if (VAR_6.type->base == VAR_1 && VAR_7.type->base == VAR_2) {
                return FUNC_7(VAR_6.type);
            }
        }
        FUNC_1(VAR_3->pos, "Left and right operands of ternary expression must have arithmetic types or identical types");
    }
}
