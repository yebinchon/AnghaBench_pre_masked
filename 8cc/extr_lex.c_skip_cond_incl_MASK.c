
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ kind; int bol; int column; } ;
typedef TYPE_1__ Token ;
struct TYPE_8__ {int column; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_6__* FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_1__*,char*) ;
 TYPE_1__* FUNC_2 () ;
 TYPE_1__* FUNC_3 (char) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_1__*) ;

void FUNC_10() {
    int VAR_2 = 0;
    for (;;) {
        bool VAR_3 = (FUNC_0()->column == 1);
        FUNC_7();
        int VAR_4 = FUNC_4();
        if (VAR_4 == VAR_0)
            return;
        if (VAR_4 == '\'') {
            FUNC_5();
            continue;
        }
        if (VAR_4 == '\"') {
            FUNC_8();
            continue;
        }
        if (VAR_4 != '#' || !VAR_3)
            continue;
        int VAR_5 = FUNC_0()->column - 1;
        Token *VAR_6 = FUNC_2();
        if (VAR_6->kind != VAR_1)
            continue;
        if (!VAR_2 && (FUNC_1(VAR_6, "else") || FUNC_1(VAR_6, "elif") || FUNC_1(VAR_6, "endif"))) {
            FUNC_9(VAR_6);
            Token *VAR_7 = FUNC_3('#');
            VAR_7->bol = 1;
            VAR_7->column = VAR_5;
            FUNC_9(VAR_7);
            return;
        }
        if (FUNC_1(VAR_6, "if") || FUNC_1(VAR_6, "ifdef") || FUNC_1(VAR_6, "ifndef"))
            VAR_2++;
        else if (VAR_2 && FUNC_1(VAR_6, "endif"))
            VAR_2--;
        FUNC_6();
    }
}
