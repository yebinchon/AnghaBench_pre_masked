
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_14__ ;


struct TYPE_24__ {long long u; } ;
struct TYPE_19__ {int index; int expr; } ;
struct TYPE_23__ {scalar_t__ kind; int pos; TYPE_1__ index; } ;
struct TYPE_22__ {TYPE_14__* type; TYPE_6__ val; int is_const; } ;
struct TYPE_21__ {TYPE_2__* fields; scalar_t__ num_fields; } ;
struct TYPE_20__ {TYPE_14__* type; } ;
struct TYPE_18__ {int base; TYPE_3__ aggregate; } ;
typedef TYPE_4__ Operand ;
typedef TYPE_5__ Expr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (TYPE_14__*) ;
 int FUNC_4 (TYPE_14__*) ;
 int FUNC_5 (TYPE_14__*) ;
 TYPE_4__ FUNC_6 (TYPE_4__) ;
 TYPE_4__ FUNC_7 (int ) ;
 TYPE_4__ FUNC_8 (int ) ;
 TYPE_4__ FUNC_9 (int ) ;
 int FUNC_10 (int ,TYPE_6__) ;
 int VAR_1 ;

Operand FUNC_11(Expr *VAR_2) {
    FUNC_0(VAR_2->kind == VAR_0);
    Operand VAR_3 = FUNC_9(VAR_2->index.index);
    if (!FUNC_4(VAR_3.type)) {
        FUNC_2(VAR_2->pos, "Index must have integer type");
    }
    Operand VAR_4 = FUNC_8(VAR_2->index.expr);
    if (FUNC_3(VAR_4.type)) {
        if (!VAR_3.is_const) {
            FUNC_2(VAR_2->pos, "Aggregate field index must be an integer constant");
        }
        FUNC_1(&VAR_3, VAR_1);
        FUNC_10(VAR_2->index.index, VAR_3.val);
        long long VAR_5 = VAR_3.val.u;
        if (!(0 <= VAR_5 && VAR_5 < (long long)VAR_4.type->aggregate.num_fields)) {
            FUNC_2(VAR_2->pos, "Aggregate field index out of range");
        }
        VAR_4.type = VAR_4.type->aggregate.fields[VAR_5].type;
        return VAR_4;
    }
    VAR_4 = FUNC_6(VAR_4);
    if (!FUNC_5(VAR_4.type)) {
        FUNC_2(VAR_2->pos, "Can only index aggregates, arrays and pointers");
    }
    return FUNC_7(VAR_4.type->base);
}
