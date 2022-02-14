
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Vector ;
typedef int Type ;
typedef int Token ;


 int VAR_0 ;
 int * FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (char) ;
 int * FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,char) ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 () ;
 int * FUNC_8 (char**,int) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;

__attribute__((used)) static void FUNC_12(Vector *VAR_1, Vector *VAR_2, bool *VAR_3) {
    bool VAR_4 = !VAR_2;
    *VAR_3 = 0;
    for (;;) {
        Token *VAR_5 = FUNC_7();
        if (FUNC_6(VAR_0)) {
            if (FUNC_10(VAR_1) == 0)
                FUNC_2(VAR_5, "at least one parameter is required before \"...\"");
            FUNC_3(')');
            *VAR_3 = 1;
            return;
        }
        char *VAR_6;
        Type *VAR_7 = FUNC_8(&VAR_6, VAR_4);
        FUNC_1(VAR_7);
        FUNC_11(VAR_1, VAR_7);
        if (!VAR_4)
            FUNC_11(VAR_2, FUNC_0(VAR_7, VAR_6));
        VAR_5 = FUNC_4();
        if (FUNC_5(VAR_5, ')'))
            return;
        if (!FUNC_5(VAR_5, ','))
            FUNC_2(VAR_5, "comma expected, but got %s", FUNC_9(VAR_5));
    }
}
