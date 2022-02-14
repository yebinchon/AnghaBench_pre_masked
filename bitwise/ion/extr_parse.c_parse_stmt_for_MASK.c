
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ kind; } ;
typedef TYPE_1__ Stmt ;
typedef int SrcPos ;
typedef int Expr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ,TYPE_1__*,int *,TYPE_1__*,int ) ;
 int * FUNC_5 () ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 () ;

Stmt *FUNC_8(SrcPos VAR_5) {
    Stmt *VAR_6 = ((void*)0);
    Expr *VAR_7 = ((void*)0);
    Stmt *VAR_8 = ((void*)0);
    if (!FUNC_2(VAR_1)) {
        FUNC_1(VAR_2);
        if (!FUNC_2(VAR_4)) {
            VAR_6 = FUNC_6();
        }
        if (FUNC_3(VAR_4)) {
            if (!FUNC_2(VAR_4)) {
                VAR_7 = FUNC_5();
            }
            if (FUNC_3(VAR_4)) {
                if (!FUNC_2(VAR_3)) {
                    VAR_8 = FUNC_6();
                    if (VAR_8->kind == VAR_0) {
                        FUNC_0("Init statements not allowed in for-statement's next clause");
                    }
                }
            }
        }
        FUNC_1(VAR_3);
    }
    return FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8, FUNC_7());
}
