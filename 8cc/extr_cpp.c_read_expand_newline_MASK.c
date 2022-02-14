
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_13__ {scalar_t__ kind; char* sval; int hideset; } ;
typedef TYPE_1__ Token ;
struct TYPE_14__ {int kind; int (* fn ) (TYPE_1__*) ;} ;
typedef int Set ;
typedef TYPE_2__ Macro ;





 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char) ;
 TYPE_1__* FUNC_2 () ;
 int VAR_1 ;
 TYPE_2__* FUNC_3 (int ,char*) ;
 int FUNC_4 (char) ;
 TYPE_1__* FUNC_5 () ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int * FUNC_7 (TYPE_1__*,TYPE_2__*) ;
 TYPE_1__* FUNC_8 () ;
 int * FUNC_9 (int ,char*) ;
 scalar_t__ FUNC_10 (int ,char*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (TYPE_1__*) ;
 int * FUNC_13 (TYPE_2__*,int *,int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static Token *FUNC_15() {
    Token *VAR_2 = FUNC_2();
    if (VAR_2->kind != VAR_0)
        return VAR_2;
    char *VAR_3 = VAR_2->sval;
    Macro *VAR_4 = FUNC_3(VAR_1, VAR_3);
    if (!VAR_4 || FUNC_10(VAR_2->hideset, VAR_3))
        return VAR_2;

    switch (VAR_4->kind) {
    case 129: {
        Set *VAR_5 = FUNC_9(VAR_2->hideset, VAR_3);
        Vector *VAR_6 = FUNC_13(VAR_4, ((void*)0), VAR_5);
        FUNC_6(VAR_6, VAR_2);
        FUNC_14(VAR_6);
        return FUNC_8();
    }
    case 130: {
        if (!FUNC_4('('))
            return VAR_2;
        Vector *VAR_7 = FUNC_7(VAR_2, VAR_4);
        Token *VAR_8 = FUNC_5();
        FUNC_1(')');
        Set *VAR_9 = FUNC_9(FUNC_11(VAR_2->hideset, VAR_8->hideset), VAR_3);
        Vector *VAR_10 = FUNC_13(VAR_4, VAR_7, VAR_9);
        FUNC_6(VAR_10, VAR_2);
        FUNC_14(VAR_10);
        return FUNC_8();
    }
    case 128:
        VAR_4->fn(VAR_2);
        return FUNC_8();
    default:
        FUNC_0("internal error");
    }
}
