
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ kind; } ;
typedef TYPE_1__ Type ;
typedef int Token ;
struct TYPE_9__ {TYPE_1__* ty; } ;
typedef TYPE_2__ Node ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (int *,char) ;
 TYPE_1__* FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 () ;
 TYPE_2__* FUNC_6 (int ,char*) ;
 int * FUNC_7 () ;
 int VAR_1 ;
 int FUNC_8 (int *,char*,char*) ;

__attribute__((used)) static Node *FUNC_9(char *VAR_2) {
    Node *VAR_3 = FUNC_6(FUNC_1(), VAR_2);
    if (!VAR_3) {
        Token *VAR_4 = FUNC_7();
        if (!FUNC_3(VAR_4, '('))
            FUNC_2(VAR_4, "undefined variable: %s", VAR_2);
        Type *VAR_5 = FUNC_4(VAR_1, FUNC_5(), 1, 0);
        FUNC_8(VAR_4, "assume returning int: %s()", VAR_2);
        return FUNC_0(VAR_5, VAR_2);
    }
    if (VAR_3->ty->kind == VAR_0)
        return FUNC_0(VAR_3->ty, VAR_2);
    return VAR_3;
}
