
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int ty; } ;
typedef TYPE_1__ Node ;


 TYPE_1__* FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 TYPE_1__* FUNC_2 (char,TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 () ;

__attribute__((used)) static Node *FUNC_7() {
    Node *VAR_0 = FUNC_6();
    FUNC_4(VAR_0);
    if (FUNC_5(VAR_0->ty))
        return FUNC_2('-', FUNC_3(FUNC_1(VAR_0->ty, 0)), FUNC_3(VAR_0));
    return FUNC_2('-', FUNC_0(VAR_0->ty, 0), VAR_0);
}
