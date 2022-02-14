
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ kind; int ty; } ;
typedef TYPE_1__ Node ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 () ;

__attribute__((used)) static Node *FUNC_5() {
    Node *VAR_2 = FUNC_4();
    if (VAR_2->kind == VAR_1)
        return FUNC_1(VAR_2);
    FUNC_2(VAR_2);
    return FUNC_0(VAR_0, FUNC_3(VAR_2->ty), VAR_2);
}
