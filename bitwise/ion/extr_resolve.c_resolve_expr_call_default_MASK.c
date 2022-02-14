
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;


struct TYPE_20__ {size_t num_params; int ret; TYPE_3__* varargs_type; TYPE_3__** params; } ;
struct TYPE_21__ {TYPE_2__ func; int base; } ;
typedef TYPE_3__ Type ;
struct TYPE_19__ {size_t num_args; TYPE_11__** args; } ;
struct TYPE_23__ {TYPE_1__ call; } ;
struct TYPE_22__ {TYPE_3__* type; } ;
struct TYPE_18__ {int pos; } ;
typedef TYPE_4__ Operand ;
typedef TYPE_5__ Expr ;


 int FUNC_0 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 TYPE_4__ FUNC_4 (int ) ;
 TYPE_4__ FUNC_5 (TYPE_11__*,TYPE_3__*) ;
 TYPE_3__* FUNC_6 (int ) ;

Operand FUNC_7(Operand VAR_0, Expr *VAR_1) {
    size_t VAR_2 = VAR_0.type->func.num_params;
    for (size_t VAR_3 = 0; VAR_3 < VAR_1->call.num_args; VAR_3++) {
        Type *VAR_4 = VAR_3 < VAR_2 ? VAR_0.type->func.params[VAR_3] : VAR_0.type->func.varargs_type;
        Operand VAR_5 = FUNC_5(VAR_1->call.args[VAR_3], VAR_4);
        if (FUNC_3(VAR_4)) {
            VAR_4 = FUNC_6(VAR_4->base);
        }
        if (!FUNC_0(&VAR_5, VAR_4)) {
            FUNC_1(VAR_1->call.args[VAR_3]->pos, "Invalid type in function call argument. Expected %s, got %s", FUNC_2(VAR_4), FUNC_2(VAR_5.type));
        }
    }
    return FUNC_4(VAR_0.type->func.ret);
}
