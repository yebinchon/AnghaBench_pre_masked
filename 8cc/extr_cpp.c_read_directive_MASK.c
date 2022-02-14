
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ kind; char* sval; int file; } ;
typedef TYPE_1__ Token ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_1__*,int ,int) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 () ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (char*,char*) ;
 int FUNC_18 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_19(Token *VAR_3) {
    Token *VAR_4 = FUNC_1();
    if (VAR_4->kind == VAR_1)
        return;
    if (VAR_4->kind == VAR_2) {
        FUNC_13(VAR_4);
        return;
    }
    if (VAR_4->kind != VAR_0)
        goto err;
    char *VAR_5 = VAR_4->sval;
    if (!FUNC_17(VAR_5, "define")) FUNC_2();
    else if (!FUNC_17(VAR_5, "elif")) FUNC_3(VAR_3);
    else if (!FUNC_17(VAR_5, "else")) FUNC_4(VAR_3);
    else if (!FUNC_17(VAR_5, "endif")) FUNC_5(VAR_3);
    else if (!FUNC_17(VAR_5, "error")) FUNC_6(VAR_3);
    else if (!FUNC_17(VAR_5, "if")) FUNC_7();
    else if (!FUNC_17(VAR_5, "ifdef")) FUNC_8();
    else if (!FUNC_17(VAR_5, "ifndef")) FUNC_9();
    else if (!FUNC_17(VAR_5, "import")) FUNC_10(VAR_3, VAR_4->file, 1);
    else if (!FUNC_17(VAR_5, "include")) FUNC_10(VAR_3, VAR_4->file, 0);
    else if (!FUNC_17(VAR_5, "include_next")) FUNC_11(VAR_3, VAR_4->file);
    else if (!FUNC_17(VAR_5, "line")) FUNC_12();
    else if (!FUNC_17(VAR_5, "pragma")) FUNC_14();
    else if (!FUNC_17(VAR_5, "undef")) FUNC_15();
    else if (!FUNC_17(VAR_5, "warning")) FUNC_16(VAR_3);
    else goto err;
    return;

  err:
    FUNC_0(VAR_3, "unsupported preprocessor directive: %s", FUNC_18(VAR_4));
}
