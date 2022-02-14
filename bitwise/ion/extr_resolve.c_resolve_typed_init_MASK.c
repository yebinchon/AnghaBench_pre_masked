
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ base; int incomplete_elems; int size; int num_elems; } ;
typedef TYPE_1__ Type ;
struct TYPE_18__ {TYPE_1__* type; } ;
typedef int SrcPos ;
typedef TYPE_2__ Operand ;
typedef int Expr ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 TYPE_2__ FUNC_4 (TYPE_2__) ;
 TYPE_2__ FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_7 (TYPE_1__*) ;

Type *FUNC_8(SrcPos VAR_0, Type *VAR_1, Expr *VAR_2) {
    Type *VAR_3 = FUNC_7(VAR_1);
    Operand VAR_4 = FUNC_5(VAR_2, VAR_3);
    if (FUNC_2(VAR_1)) {
        if (FUNC_1(VAR_4.type) && VAR_1->base == VAR_4.type->base) {

            VAR_1->num_elems = VAR_4.type->num_elems;
            VAR_1->size = VAR_4.type->size;
            VAR_1->incomplete_elems = 0;
            FUNC_6(VAR_2, VAR_1);
            return VAR_1;
        } else if (FUNC_3(VAR_4.type) && VAR_1->base == VAR_4.type->base) {
            FUNC_6(VAR_2, VAR_4.type);
            return VAR_4.type;
        }
    }
    if (VAR_1 && FUNC_3(VAR_1)) {
        VAR_4 = FUNC_4(VAR_4);
    }
    if (!FUNC_0(&VAR_4, VAR_3)) {
        return ((void*)0);
    }
    FUNC_6(VAR_2, VAR_4.type);
    return VAR_4.type;
}
