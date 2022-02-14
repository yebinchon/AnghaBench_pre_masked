
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_19__ ;


typedef int Type ;
struct TYPE_28__ {scalar_t__ kind; int name; } ;
struct TYPE_23__ {int num_args; TYPE_6__* expr; TYPE_6__** args; } ;
struct TYPE_27__ {scalar_t__ kind; int pos; TYPE_1__ call; } ;
struct TYPE_26__ {TYPE_19__* type; } ;
struct TYPE_25__ {scalar_t__ kind; TYPE_19__* type; } ;
struct TYPE_24__ {size_t num_params; scalar_t__ intrinsic; int has_varargs; } ;
struct TYPE_22__ {scalar_t__ kind; TYPE_2__ func; } ;
typedef TYPE_3__ Sym ;
typedef TYPE_4__ Operand ;
typedef TYPE_5__ Expr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,TYPE_19__*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (TYPE_19__*) ;
 TYPE_4__ FUNC_4 (TYPE_4__,TYPE_5__*) ;
 TYPE_4__ FUNC_5 (TYPE_4__,TYPE_5__*,int *) ;
 TYPE_4__ FUNC_6 (TYPE_6__*) ;
 TYPE_3__* FUNC_7 (int ) ;
 int FUNC_8 (TYPE_6__*,TYPE_3__*) ;

Operand FUNC_9(Expr *VAR_4, Type *VAR_5) {
    FUNC_0(VAR_4->kind == VAR_0);
    if (VAR_4->call.expr->kind == VAR_1) {
        Sym *VAR_6 = FUNC_7(VAR_4->call.expr->name);
        if (VAR_6 && VAR_6->kind == VAR_2) {
            if (VAR_4->call.num_args != 1) {
                FUNC_2(VAR_4->pos, "Type conversion operator takes 1 argument");
            }
            Operand VAR_7 = FUNC_6(VAR_4->call.args[0]);
            if (!FUNC_1(&VAR_7, VAR_6->type)) {
                FUNC_2(VAR_4->pos, "Invalid type cast from %s to %s", FUNC_3(VAR_7.type), FUNC_3(VAR_6->type));
            }
            FUNC_8(VAR_4->call.expr, VAR_6);
            return VAR_7;
        }
    }
    Operand VAR_8 = FUNC_6(VAR_4->call.expr);
    if (VAR_8.type->kind != VAR_3) {
        FUNC_2(VAR_4->pos, "Cannot call non-function value");
    }
    size_t VAR_9 = VAR_8.type->func.num_params;
    if (VAR_4->call.num_args < VAR_9) {
        FUNC_2(VAR_4->pos, "Function call with too few arguments");
    }
    if (VAR_4->call.num_args > VAR_9 && !VAR_8.type->func.has_varargs) {
        FUNC_2(VAR_4->pos, "Function call with too many arguments");
    }
    if (VAR_8.type->func.intrinsic) {
        return FUNC_5(VAR_8, VAR_4, VAR_5);
    } else {
        return FUNC_4(VAR_8, VAR_4);
    }
}
