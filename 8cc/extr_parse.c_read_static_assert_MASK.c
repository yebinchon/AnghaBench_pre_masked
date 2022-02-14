
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ kind; int sval; } ;
typedef TYPE_1__ Token ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (char) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5() {
    FUNC_1('(');
    int VAR_1 = FUNC_3();
    FUNC_1(',');
    Token *VAR_2 = FUNC_2();
    if (VAR_2->kind != VAR_0)
        FUNC_0(VAR_2, "string expected as the second argument for _Static_assert, but got %s", FUNC_4(VAR_2));
    FUNC_1(')');
    FUNC_1(';');
    if (!VAR_1)
        FUNC_0(VAR_2, "_Static_assert failure: %s", VAR_2->sval);
}
