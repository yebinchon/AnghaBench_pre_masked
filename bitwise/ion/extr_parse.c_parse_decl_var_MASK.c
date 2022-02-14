
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Typespec ;
typedef int SrcPos ;
typedef int Expr ;
typedef int Decl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int ,char const*,int *,int *) ;
 int * FUNC_4 () ;
 char* FUNC_5 () ;
 int * FUNC_6 () ;
 int FUNC_7 () ;

Decl *FUNC_8(SrcPos VAR_3) {
    const char *VAR_4 = FUNC_5();
    if (FUNC_2(VAR_0)) {
        Expr *VAR_5 = FUNC_4();
        FUNC_0(VAR_2);
        return FUNC_3(VAR_3, VAR_4, ((void*)0), VAR_5);
    } else if (FUNC_2(VAR_1)) {
        Typespec *VAR_6 = FUNC_6();
        Expr *VAR_7 = ((void*)0);
        if (FUNC_2(VAR_0)) {
            VAR_7 = FUNC_4();
        }
        FUNC_0(VAR_2);
        return FUNC_3(VAR_3, VAR_4, VAR_6, VAR_7);
    } else {
        FUNC_1("Expected : or = after var, got %s", FUNC_7());
        return ((void*)0);
    }
}
