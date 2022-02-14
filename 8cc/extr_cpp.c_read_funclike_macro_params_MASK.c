
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ kind; char* sval; } ;
typedef TYPE_1__ Token ;
typedef int Map ;


 char VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;
 int FUNC_1 (char) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *,char*,int ) ;
 scalar_t__ FUNC_6 (char) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_8(Token *VAR_3, Map *VAR_4) {
    int VAR_5 = 0;
    for (;;) {
        Token *VAR_6 = FUNC_3();
        if (FUNC_2(VAR_6, ')'))
            return 0;
        if (VAR_5) {
            if (!FUNC_2(VAR_6, ','))
                FUNC_0(VAR_6, ", expected, but got %s", FUNC_7(VAR_6));
            VAR_6 = FUNC_3();
        }
        if (VAR_6->kind == VAR_2)
            FUNC_0(VAR_3, "missing ')' in macro parameter list");
        if (FUNC_2(VAR_6, VAR_0)) {
            FUNC_5(VAR_4, "__VA_ARGS__", FUNC_4(VAR_5++, 1));
            FUNC_1(')');
            return 1;
        }
        if (VAR_6->kind != VAR_1)
            FUNC_0(VAR_6, "identifier expected, but got %s", FUNC_7(VAR_6));
        char *VAR_7 = VAR_6->sval;
        if (FUNC_6(VAR_0)) {
            FUNC_1(')');
            FUNC_5(VAR_4, VAR_7, FUNC_4(VAR_5++, 1));
            return 1;
        }
        FUNC_5(VAR_4, VAR_7, FUNC_4(VAR_5++, 0));
    }
}
