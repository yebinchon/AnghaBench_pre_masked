
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_11__ {scalar_t__ kind; int bol; int space; } ;
typedef TYPE_1__ Token ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char) ;
 TYPE_1__* FUNC_3 () ;
 int * FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,TYPE_1__*) ;

__attribute__((used)) static Vector *FUNC_8(Token *VAR_2, bool *VAR_3, bool VAR_4) {
    Vector *VAR_5 = FUNC_4();
    int VAR_6 = 0;
    for (;;) {
        Token *VAR_7 = FUNC_3();
        if (VAR_7->kind == VAR_0)
            FUNC_1(VAR_2, "unterminated macro argument list");
        if (VAR_7->kind == VAR_1)
            continue;
        if (VAR_7->bol && FUNC_2(VAR_7, '#')) {
            FUNC_5(VAR_7);
            continue;
        }
        if (VAR_6 == 0 && FUNC_2(VAR_7, ')')) {
            FUNC_6(VAR_7);
            *VAR_3 = 1;
            return VAR_5;
        }
        if (VAR_6 == 0 && FUNC_2(VAR_7, ',') && !VAR_4)
            return VAR_5;
        if (FUNC_2(VAR_7, '('))
            VAR_6++;
        if (FUNC_2(VAR_7, ')'))
            VAR_6--;





        if (VAR_7->bol) {
            VAR_7 = FUNC_0(VAR_7);
            VAR_7->bol = 0;
            VAR_7->space = 1;
        }
        FUNC_7(VAR_5, VAR_7);
    }
}
