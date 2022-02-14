
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ kind; } ;
typedef TYPE_1__ Type ;
struct TYPE_14__ {scalar_t__ kind; char* sval; } ;
typedef TYPE_2__ Token ;
typedef int Node ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,char*,char*) ;
 TYPE_2__* FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_2__*,char) ;
 TYPE_1__* FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*,int *) ;
 scalar_t__ FUNC_7 (char) ;
 TYPE_2__* FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_2 ;
 char* FUNC_10 (TYPE_2__*) ;
 int * VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_11 (TYPE_2__*) ;

__attribute__((used)) static Type *FUNC_12() {
    char *VAR_5 = ((void*)0);
    Token *VAR_6 = FUNC_3();



    if (VAR_6->kind == VAR_1) {
        VAR_5 = VAR_6->sval;
        VAR_6 = FUNC_3();
    }
    if (VAR_5) {
        Type *VAR_7 = FUNC_5(VAR_2, VAR_5);
        if (VAR_7 && VAR_7->kind != VAR_0)
            FUNC_2(VAR_6, "declarations of %s does not match", VAR_5);
    }
    if (!FUNC_4(VAR_6, '{')) {
        if (!VAR_5 || !FUNC_5(VAR_2, VAR_5))
            FUNC_2(VAR_6, "enum tag %s is not defined", VAR_5);
        FUNC_11(VAR_6);
        return VAR_4;
    }
    if (VAR_5)
        FUNC_6(VAR_2, VAR_5, VAR_3);

    int VAR_8 = 0;
    for (;;) {
        VAR_6 = FUNC_3();
        if (FUNC_4(VAR_6, '}'))
            break;
        if (VAR_6->kind != VAR_1)
            FUNC_2(VAR_6, "identifier expected, but got %s", FUNC_10(VAR_6));
        char *VAR_9 = VAR_6->sval;

        if (FUNC_7('='))
            VAR_8 = FUNC_9();
        Node *VAR_10 = FUNC_0(VAR_4, VAR_8++);
        FUNC_6(FUNC_1(), VAR_9, VAR_10);
        if (FUNC_7(','))
            continue;
        if (FUNC_7('}'))
            break;
        FUNC_2(FUNC_8(), "',' or '}' expected, but got %s", FUNC_10(FUNC_8()));
    }
    return VAR_4;
}
