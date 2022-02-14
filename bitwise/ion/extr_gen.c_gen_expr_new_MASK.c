
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* base; } ;
typedef TYPE_2__ Type ;
struct TYPE_9__ {scalar_t__ arg; scalar_t__ len; scalar_t__ alloc; } ;
struct TYPE_11__ {scalar_t__ kind; TYPE_1__ new_expr; } ;
typedef TYPE_3__ Expr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,...) ;
 TYPE_2__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*) ;
 char* FUNC_5 (TYPE_2__*,char*) ;

void FUNC_6(Expr *VAR_1) {
    FUNC_0(VAR_1->kind == VAR_0);
    Type *VAR_2 = FUNC_3(VAR_1);
    FUNC_0(FUNC_4(VAR_2));
    const char *VAR_3 = FUNC_5(VAR_2, "");
    const char *VAR_4 = FUNC_5(VAR_2->base, "");
    if (VAR_1->new_expr.alloc) {
        if (VAR_1->new_expr.len) {
            if (!VAR_1->new_expr.arg) {
                FUNC_2("((%s)generic_alloc((Allocator *)(", VAR_3);
                FUNC_1(VAR_1->new_expr.alloc);
                FUNC_2("), ");
                FUNC_1(VAR_1->new_expr.len);
                FUNC_2("* sizeof(%s), alignof(%s)))", VAR_4, VAR_4);
            } else {
                FUNC_2("((%s)generic_alloc_copy((Allocator *)(", VAR_3);
                FUNC_1(VAR_1->new_expr.alloc);
                FUNC_2("), ");
                FUNC_1(VAR_1->new_expr.len);
                FUNC_2(" * sizeof(%s), alignof(%s), &(", VAR_4, VAR_4);
                FUNC_1(VAR_1->new_expr.arg);
                FUNC_2(")))");
            }
        } else {
            if (!VAR_1->new_expr.arg) {
                FUNC_2("((%s)generic_alloc((Allocator *)(", VAR_3);
                FUNC_1(VAR_1->new_expr.alloc);
                FUNC_2("), ");
                FUNC_2("sizeof(%s), alignof(%s)))", VAR_4, VAR_4);
            } else {
                FUNC_2("((%s)generic_alloc_copy((Allocator *)(", VAR_3);
                FUNC_1(VAR_1->new_expr.alloc);
                FUNC_2("), ");
                FUNC_2("sizeof(%s), alignof(%s), &(", VAR_4, VAR_4, VAR_4);
                FUNC_1(VAR_1->new_expr.arg);
                FUNC_2(")))");
            }
        }
    } else {
        if (VAR_1->new_expr.len) {
            if (!VAR_1->new_expr.arg) {
                FUNC_2("((%s)tls_alloc(", VAR_3);
                FUNC_1(VAR_1->new_expr.len);
                FUNC_2(" * sizeof(%s), alignof(%s)))", VAR_4, VAR_4);
            } else {
                FUNC_2("((%s)alloc_copy(", VAR_3);
                FUNC_1(VAR_1->new_expr.len);
                FUNC_2(" * sizeof(%s), alignof(%s), &(", VAR_4, VAR_4);
                FUNC_1(VAR_1->new_expr.arg);
                FUNC_2(")))");
            }
        } else {
            if (!VAR_1->new_expr.arg) {
                FUNC_2("((%s)tls_alloc(sizeof(%s), alignof(%s)))", VAR_3, VAR_4, VAR_4);
            } else {
                FUNC_2("((%s)alloc_copy(sizeof(%s), alignof(%s), &(", VAR_3, VAR_4, VAR_4);
                FUNC_1(VAR_1->new_expr.arg);
                FUNC_2(")))");
            }
        }
    }
}
