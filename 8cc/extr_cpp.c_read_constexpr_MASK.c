
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ kind; } ;
typedef TYPE_1__ Token ;
typedef int Node ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (int *,int *) ;
 TYPE_1__* FUNC_2 () ;
 int * FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;

__attribute__((used)) static bool FUNC_9() {
    FUNC_6(FUNC_8(FUNC_4()));
    Node *VAR_1 = FUNC_3();
    Token *VAR_2 = FUNC_2();
    if (VAR_2->kind != VAR_0)
        FUNC_0(VAR_2, "stray token: %s", FUNC_5(VAR_2));
    FUNC_7();
    return FUNC_1(VAR_1, ((void*)0));
}
