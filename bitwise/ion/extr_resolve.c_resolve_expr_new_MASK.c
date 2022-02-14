
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_18__ ;
typedef struct TYPE_27__ TYPE_16__ ;
typedef struct TYPE_26__ TYPE_11__ ;


struct TYPE_30__ {struct TYPE_30__* base; } ;
typedef TYPE_2__ Type ;
struct TYPE_29__ {TYPE_11__* len; TYPE_18__* arg; TYPE_16__* alloc; } ;
struct TYPE_32__ {TYPE_1__ new_expr; int pos; } ;
struct TYPE_31__ {TYPE_2__* type; int is_lvalue; } ;
struct TYPE_28__ {int pos; } ;
struct TYPE_27__ {int pos; } ;
struct TYPE_26__ {int pos; } ;
typedef TYPE_3__ Operand ;
typedef TYPE_4__ Expr ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 TYPE_3__ FUNC_5 (TYPE_2__*) ;
 TYPE_3__ FUNC_6 (TYPE_18__*,TYPE_2__*) ;
 TYPE_3__ FUNC_7 (TYPE_16__*) ;
 TYPE_3__ FUNC_8 (TYPE_11__*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_9 (TYPE_2__*) ;
 TYPE_2__* FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;

Operand FUNC_12(Expr *VAR_1, Type *VAR_2) {
    if (VAR_1->new_expr.alloc) {
        Operand VAR_3 = FUNC_7(VAR_1->new_expr.alloc);
        if (!FUNC_1(&VAR_3, VAR_0)) {
            FUNC_2(VAR_1->new_expr.alloc->pos, "Allocator of new must have type Allocator* or be pointer to struct with leading field of type Allocator");
        }
    }
    if (VAR_1->new_expr.len) {
        Operand VAR_4 = FUNC_8(VAR_1->new_expr.len);
        if (!FUNC_3(VAR_4.type)) {
            FUNC_2(VAR_1->new_expr.len->pos, "Length argument of new must have integer type");
        }
    }
    Type *VAR_5 = ((void*)0);
    if (FUNC_4(VAR_2)) {
        VAR_5 = VAR_2->base;
    }
    if (!VAR_1->new_expr.arg) {
        VAR_2 = FUNC_9(VAR_2);
        if (!FUNC_4(VAR_2)) {
            FUNC_2(VAR_1->pos, "New with void argument must have expected pointer type");
        }
        return FUNC_5(VAR_2);
    } else {
        Operand VAR_6 = FUNC_6(VAR_1->new_expr.arg, VAR_1->new_expr.len ? VAR_2 : VAR_5);
        if (VAR_1->new_expr.len) {
            if (!FUNC_4(VAR_6.type)) {
                FUNC_2(VAR_1->new_expr.arg->pos, "Argument to new[] must have pointer type");
            }
        } else {
            if (!VAR_6.is_lvalue) {
                FUNC_2(VAR_1->new_expr.arg->pos, "Argument to new must be lvalue");
            }
        }
        FUNC_0(VAR_6.type);
        if (FUNC_11(VAR_6.type) == 0) {
            FUNC_2(VAR_1->new_expr.arg->pos, "Type of argument to new has zero size");
        }
        return FUNC_5(VAR_1->new_expr.len ? VAR_6.type : FUNC_10(VAR_6.type));
    }
}
