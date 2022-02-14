
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SrcPos ;
typedef int Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int ,int *,int *,int *) ;
 int * FUNC_4 () ;
 int VAR_4 ;

Expr *FUNC_5(SrcPos VAR_5) {
    Expr *VAR_6 = ((void*)0);
    if (FUNC_2(VAR_1)) {
        VAR_6 = FUNC_4();
        FUNC_0(VAR_3);
    }
    Expr *VAR_7 = ((void*)0);
    if (FUNC_2(VAR_0)) {
        VAR_7 = FUNC_4();
        FUNC_0(VAR_2);
    }
    Expr *VAR_8 = ((void*)0);
    if (!FUNC_1(VAR_4)) {
        VAR_8 = FUNC_4();
    }
    return FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8);
}
