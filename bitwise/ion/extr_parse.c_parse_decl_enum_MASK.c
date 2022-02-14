
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Typespec ;
typedef int SrcPos ;
typedef int EnumItem ;
typedef int Decl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int ,char const*,int *,int *,int ) ;
 int FUNC_6 () ;
 char* FUNC_7 () ;
 int * FUNC_8 () ;

Decl *FUNC_9(SrcPos VAR_5) {
    const char *VAR_6 = ((void*)0);
    if (FUNC_3(VAR_3)) {
        VAR_6 = FUNC_7();
    }
    Typespec *VAR_7 = ((void*)0);
    if (FUNC_4(VAR_0)) {
        VAR_7 = FUNC_8();
    }
    FUNC_2(VAR_2);
    EnumItem *VAR_8 = ((void*)0);
    while (!FUNC_3(VAR_4)) {
        FUNC_1(VAR_8, FUNC_6());
        if (!FUNC_4(VAR_1)) {
            break;
        }
    }
    FUNC_2(VAR_4);
    return FUNC_5(VAR_5, VAR_6, VAR_7, VAR_8, FUNC_0(VAR_8));
}
