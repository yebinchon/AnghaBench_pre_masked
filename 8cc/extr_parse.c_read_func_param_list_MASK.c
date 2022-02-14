
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Vector ;
typedef int Type ;
typedef int Token ;


 char VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,char) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *,int,int) ;
 int * FUNC_5 () ;
 scalar_t__ FUNC_6 (char) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *,int *,int*) ;
 int FUNC_9 (int *) ;
 int VAR_2 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static Type *FUNC_13(Vector *VAR_3, Type *VAR_4) {


    Token *VAR_5 = FUNC_1();
    if (FUNC_2(VAR_5, VAR_1) && FUNC_6(')'))
        return FUNC_4(VAR_4, FUNC_5(), 0, 0);





    if (FUNC_2(VAR_5, ')'))
        return FUNC_4(VAR_4, FUNC_5(), 1, 1);
    FUNC_10(VAR_5);

    Token *VAR_6 = FUNC_7();
    if (FUNC_6(VAR_0))
        FUNC_0(VAR_6, "at least one parameter is required before \"...\"");
    if (FUNC_3(FUNC_7())) {
        bool VAR_7;
        Vector *VAR_8 = FUNC_5();
        FUNC_8(VAR_8, VAR_3, &VAR_7);
        return FUNC_4(VAR_4, VAR_8, VAR_7, 0);
    }
    if (!VAR_3)
        FUNC_0(VAR_5, "invalid function definition");
    FUNC_9(VAR_3);
    Vector *VAR_9 = FUNC_5();
    for (int VAR_10 = 0; VAR_10 < FUNC_11(VAR_3); VAR_10++)
        FUNC_12(VAR_9, VAR_2);
    return FUNC_4(VAR_4, VAR_9, 0, 1);
}
