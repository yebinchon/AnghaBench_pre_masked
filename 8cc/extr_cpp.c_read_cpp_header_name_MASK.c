
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_8__ {scalar_t__ kind; char* sval; } ;
typedef TYPE_1__ Token ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;
 scalar_t__ FUNC_1 (TYPE_1__*,char) ;
 char* FUNC_2 (int *) ;
 int * FUNC_3 () ;
 TYPE_1__* FUNC_4 () ;
 char* FUNC_5 (int*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,TYPE_1__*) ;

__attribute__((used)) static char *FUNC_8(Token *VAR_2, bool *VAR_3) {

    char *VAR_4 = FUNC_5(VAR_3);
    if (VAR_4)
        return VAR_4;




    Token *VAR_5 = FUNC_4();
    if (VAR_5->kind == VAR_0)
        FUNC_0(VAR_2, "expected filename, but got newline");
    if (VAR_5->kind == VAR_1) {
        *VAR_3 = 0;
        return VAR_5->sval;
    }
    if (!FUNC_1(VAR_5, '<'))
        FUNC_0(VAR_5, "< expected, but got %s", FUNC_6(VAR_5));
    Vector *VAR_6 = FUNC_3();
    for (;;) {
        Token *VAR_7 = FUNC_4();
        if (VAR_7->kind == VAR_0)
            FUNC_0(VAR_2, "premature end of header name");
        if (FUNC_1(VAR_7, '>'))
            break;
        FUNC_7(VAR_6, VAR_7);
    }
    *VAR_3 = 1;
    return FUNC_2(VAR_6);
}
