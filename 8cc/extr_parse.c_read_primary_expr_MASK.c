
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int kind; int slen; int sval; int enc; int c; } ;
typedef TYPE_1__ Token ;
typedef int Node ;


 char VAR_0 ;





 int * FUNC_0 (int ,int ) ;
 int * FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char) ;
 TYPE_1__* FUNC_5 () ;
 scalar_t__ FUNC_6 (TYPE_1__*,char) ;
 scalar_t__ FUNC_7 (char) ;
 int * FUNC_8 () ;
 int * FUNC_9 () ;
 int * FUNC_10 (TYPE_1__*) ;
 int * FUNC_11 () ;
 int * FUNC_12 (int ) ;
 int FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static Node *FUNC_14() {
    Token *VAR_1 = FUNC_5();
    if (!VAR_1) return ((void*)0);
    if (FUNC_6(VAR_1, '(')) {
        if (FUNC_7('{'))
            return FUNC_11();
        Node *VAR_2 = FUNC_8();
        FUNC_4(')');
        return VAR_2;
    }
    if (FUNC_6(VAR_1, VAR_0)) {
        return FUNC_9();
    }
    switch (VAR_1->kind) {
    case 131:
        return FUNC_12(VAR_1->sval);
    case 129:
        return FUNC_10(VAR_1);
    case 132:
        return FUNC_0(FUNC_2(VAR_1->enc), VAR_1->c);
    case 128:
        return FUNC_1(VAR_1->enc, VAR_1->sval, VAR_1->slen);
    case 130:
        FUNC_13(VAR_1);
        return ((void*)0);
    default:
        FUNC_3("internal error: unknown token kind: %d", VAR_1->kind);
    }
}
