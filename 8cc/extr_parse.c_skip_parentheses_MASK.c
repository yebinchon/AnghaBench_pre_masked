
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_5__ {scalar_t__ kind; } ;
typedef TYPE_1__ Token ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_1__*,char) ;
 int FUNC_3 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(Vector *VAR_1) {
    for (;;) {
        Token *VAR_2 = FUNC_1();
        if (VAR_2->kind == VAR_0)
            FUNC_0("premature end of input");
        FUNC_3(VAR_1, VAR_2);
        if (FUNC_2(VAR_2, ')'))
            return;
        if (FUNC_2(VAR_2, '('))
            FUNC_4(VAR_1);
    }
}
