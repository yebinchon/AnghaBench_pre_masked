
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


struct TYPE_21__ {scalar_t__ name; int type; } ;
typedef TYPE_3__ TypeField ;
struct TYPE_19__ {size_t num_fields; TYPE_3__* fields; } ;
struct TYPE_22__ {TYPE_1__ aggregate; int base; } ;
typedef TYPE_4__ Type ;
struct TYPE_20__ {scalar_t__ name; int expr; } ;
struct TYPE_24__ {scalar_t__ kind; TYPE_2__ field; int pos; } ;
struct TYPE_23__ {int type; scalar_t__ is_lvalue; } ;
typedef int Sym ;
typedef int Package ;
typedef TYPE_5__ Operand ;
typedef TYPE_6__ Expr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int *) ;
 TYPE_5__ FUNC_8 (int ) ;
 TYPE_5__ VAR_1 ;
 TYPE_5__ FUNC_9 (int ) ;
 TYPE_5__ FUNC_10 (int ) ;
 int * FUNC_11 (scalar_t__) ;
 TYPE_5__ FUNC_12 (int ,scalar_t__) ;
 int FUNC_13 (TYPE_6__*,int *) ;
 int * FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 TYPE_4__* FUNC_16 (int ) ;

Operand FUNC_17(Expr *VAR_2) {
    FUNC_0(VAR_2->kind == VAR_0);
    Package *VAR_3 = FUNC_14(VAR_2->field.expr);
    if (VAR_3) {
        Package *VAR_4 = FUNC_2(VAR_3);
        Sym *VAR_5 = FUNC_11(VAR_2->field.name);
        Operand VAR_6 = FUNC_12(VAR_2->pos, VAR_2->field.name);
        FUNC_7(VAR_4);
        FUNC_13(VAR_2, VAR_5);
        return VAR_6;
    }
    Operand VAR_7 = FUNC_10(VAR_2->field.expr);
    bool VAR_8 = FUNC_5(VAR_7.type);
    Type *VAR_9 = FUNC_16(VAR_7.type);
    FUNC_1(VAR_9);
    if (FUNC_6(VAR_9)) {
        VAR_7 = FUNC_8(VAR_9->base);
        VAR_8 = FUNC_5(VAR_7.type);
        VAR_9 = FUNC_16(VAR_7.type);
        FUNC_1(VAR_9);
    }
    if (!FUNC_4(VAR_9)) {
        FUNC_3(VAR_2->pos, "Can only access fields on aggregates or pointers to aggregates");
        return VAR_1;
    }
    for (size_t VAR_10 = 0; VAR_10 < VAR_9->aggregate.num_fields; VAR_10++) {
        TypeField VAR_11 = VAR_9->aggregate.fields[VAR_10];
        if (VAR_11.name == VAR_2->field.name) {
            Operand VAR_12 = VAR_7.is_lvalue ? FUNC_8(VAR_11.type) : FUNC_9(VAR_11.type);
            if (VAR_8) {
                VAR_12.type = FUNC_15(VAR_12.type);
            }
            return VAR_12;
        }
    }
    FUNC_3(VAR_2->pos, "No field named '%s'", VAR_2->field.name);
    return VAR_1;
}
