
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int Type ;
struct TYPE_8__ {int expr; int type; } ;
struct TYPE_10__ {scalar_t__ kind; int pos; TYPE_1__ cast; } ;
struct TYPE_9__ {int * type; } ;
typedef TYPE_2__ Operand ;
typedef TYPE_3__ Expr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (int *) ;
 TYPE_2__ FUNC_4 (int ,int *) ;
 int * FUNC_5 (int ) ;

Operand FUNC_6(Expr *VAR_1) {
    FUNC_0(VAR_1->kind == VAR_0);
    Type *VAR_2 = FUNC_5(VAR_1->cast.type);
    Operand VAR_3 = FUNC_4(VAR_1->cast.expr, VAR_2);
    if (!FUNC_1(&VAR_3, VAR_2)) {
        FUNC_2(VAR_1->pos, "Invalid type cast from %s to %s", FUNC_3(VAR_3.type), FUNC_3(VAR_2));
    }
    return VAR_3;
}
