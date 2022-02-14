
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Vector ;
typedef int Token ;
typedef int Node ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,char*) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (char*) ;
 int * FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (char) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *,int ) ;
 char* FUNC_10 () ;
 int * FUNC_11 () ;
 int * FUNC_12 () ;
 int * FUNC_13 () ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int *) ;

__attribute__((used)) static Node *FUNC_16() {
    char *VAR_1 = FUNC_10();
    char *VAR_2 = FUNC_10();
    FUNC_1(VAR_1, VAR_2);
    Node *VAR_3 = FUNC_13();
    FUNC_0();
    Token *VAR_4 = FUNC_8();
    if (!FUNC_9(VAR_4, VAR_0))
        FUNC_6(VAR_4, "'while' is expected, but got %s", FUNC_14(VAR_4));
    FUNC_7('(');
    Node *VAR_5 = FUNC_12();
    FUNC_7(')');
    FUNC_7(';');

    Vector *VAR_6 = FUNC_11();
    FUNC_15(VAR_6, FUNC_3(VAR_1));
    if (VAR_3)
        FUNC_15(VAR_6, VAR_3);
    FUNC_15(VAR_6, FUNC_4(VAR_5, FUNC_5(VAR_1), ((void*)0)));
    FUNC_15(VAR_6, FUNC_3(VAR_2));
    return FUNC_2(VAR_6);
}
