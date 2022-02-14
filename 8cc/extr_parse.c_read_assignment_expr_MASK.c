
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int Token ;
struct TYPE_21__ {scalar_t__ kind; } ;
struct TYPE_20__ {TYPE_4__* ty; } ;
typedef TYPE_1__ Node ;


 TYPE_1__* FUNC_0 (TYPE_4__*,char,TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_4__*,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int,TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 scalar_t__ FUNC_9 (int *,char) ;
 TYPE_1__* FUNC_10 () ;
 int FUNC_11 (int *) ;

__attribute__((used)) static Node *FUNC_12() {
    Node *VAR_0 = FUNC_10();
    Token *VAR_1 = FUNC_6();
    if (!VAR_1)
        return VAR_0;
    if (FUNC_9(VAR_1, '?'))
        return FUNC_4(VAR_0);
    int VAR_2 = FUNC_7(VAR_1);
    if (FUNC_9(VAR_1, '=') || VAR_2) {
        Node *VAR_3 = FUNC_3(FUNC_12());
        if (FUNC_9(VAR_1, '=') || VAR_2)
            FUNC_5(VAR_0);
        Node *VAR_4 = VAR_2 ? FUNC_2(VAR_2, FUNC_3(VAR_0), VAR_3) : VAR_3;
        if (FUNC_8(VAR_0->ty) && VAR_0->ty->kind != VAR_4->ty->kind)
            VAR_4 = FUNC_1(VAR_0->ty, VAR_4);
        return FUNC_0(VAR_0->ty, '=', VAR_0, VAR_4);
    }
    FUNC_11(VAR_1);
    return VAR_0;
}
