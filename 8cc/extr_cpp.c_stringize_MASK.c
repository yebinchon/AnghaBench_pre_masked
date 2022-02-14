
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_8__ {int enc; scalar_t__ slen; int sval; int kind; scalar_t__ space; } ;
typedef TYPE_1__ Token ;
typedef int Buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;
 int * FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static Token *FUNC_9(Token *VAR_2, Vector *VAR_3) {
    Buffer *VAR_4 = FUNC_5();
    for (int VAR_5 = 0; VAR_5 < FUNC_8(VAR_3); VAR_5++) {
        Token *VAR_6 = FUNC_7(VAR_3, VAR_5);
        if (FUNC_1(VAR_4) && VAR_6->space)
            FUNC_2(VAR_4, " ");
        FUNC_2(VAR_4, "%s", FUNC_6(VAR_6));
    }
    FUNC_3(VAR_4, '\0');
    Token *VAR_7 = FUNC_4(VAR_2);
    VAR_7->kind = VAR_1;
    VAR_7->sval = FUNC_0(VAR_4);
    VAR_7->slen = FUNC_1(VAR_4);
    VAR_7->enc = VAR_0;
    return VAR_7;
}
