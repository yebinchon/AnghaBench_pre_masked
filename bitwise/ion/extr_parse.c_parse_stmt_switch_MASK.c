
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SwitchCase ;
typedef int Stmt ;
typedef int SrcPos ;
typedef int Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int * FUNC_5 (int ,int *,int *,int ) ;
 int * FUNC_6 () ;
 int FUNC_7 () ;

Stmt *FUNC_8(SrcPos VAR_2) {
    Expr *VAR_3 = FUNC_6();
    SwitchCase *VAR_4 = ((void*)0);
    FUNC_2(VAR_0);
    while (!FUNC_4() && !FUNC_3(VAR_1)) {
        FUNC_1(VAR_4, FUNC_7());
    }
    FUNC_2(VAR_1);
    return FUNC_5(VAR_2, VAR_3, VAR_4, FUNC_0(VAR_4));
}
