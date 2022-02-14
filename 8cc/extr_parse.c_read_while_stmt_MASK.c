
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Vector ;
typedef int Node ;


 int FUNC_0 () ;
 int FUNC_1 (char*,char*) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char) ;
 char* FUNC_7 () ;
 int * FUNC_8 () ;
 int * FUNC_9 () ;
 int * FUNC_10 () ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static Node *FUNC_12() {
    FUNC_6('(');
    Node *VAR_0 = FUNC_9();
    FUNC_6(')');

    char *VAR_1 = FUNC_7();
    char *VAR_2 = FUNC_7();
    FUNC_1(VAR_1, VAR_2);
    Node *VAR_3 = FUNC_10();
    FUNC_0();

    Vector *VAR_4 = FUNC_8();
    FUNC_11(VAR_4, FUNC_3(VAR_1));
    FUNC_11(VAR_4, FUNC_4(VAR_0, VAR_3, FUNC_5(VAR_2)));
    FUNC_11(VAR_4, FUNC_5(VAR_1));
    FUNC_11(VAR_4, FUNC_3(VAR_2));
    return FUNC_2(VAR_4);
}
