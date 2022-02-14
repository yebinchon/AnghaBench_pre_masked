
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int base; } ;
typedef TYPE_1__ Type ;
typedef int Expr ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *,int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (int ) ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* FUNC_4 (int ) ;

bool FUNC_5(Type *VAR_2, Type *VAR_3, Expr *VAR_4, Expr *VAR_5) {
    if (FUNC_0(VAR_2) && FUNC_0(VAR_3)) {
        Type *VAR_6 = FUNC_4(VAR_2->base);
        Type *VAR_7 = FUNC_4(VAR_3->base);
        if (VAR_6 == VAR_7) {
            return 1;
        }
        if (VAR_6 == VAR_1 && VAR_7 == VAR_0) {
            FUNC_2(VAR_4, FUNC_3(FUNC_1(VAR_0, VAR_2->base)));
            return 1;
        }
        if (VAR_6 == VAR_0 && VAR_7 == VAR_1) {
            FUNC_2(VAR_5, FUNC_3(FUNC_1(VAR_0, VAR_3->base)));
            return 1;
        }
    }
    return 0;
}
