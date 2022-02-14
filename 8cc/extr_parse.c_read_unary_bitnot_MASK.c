
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int Token ;
struct TYPE_9__ {int ty; } ;
typedef TYPE_1__ Node ;


 TYPE_1__* FUNC_0 (char,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 () ;

__attribute__((used)) static Node *FUNC_6(Token *VAR_0) {
    Node *VAR_1 = FUNC_5();
    VAR_1 = FUNC_1(VAR_1);
    if (!FUNC_3(VAR_1->ty))
        FUNC_2(VAR_0, "invalid use of ~: %s", FUNC_4(VAR_1));
    return FUNC_0('~', VAR_1->ty, VAR_1);
}
