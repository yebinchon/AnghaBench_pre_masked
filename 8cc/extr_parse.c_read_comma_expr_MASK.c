
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ty; } ;
typedef TYPE_1__ Node ;


 TYPE_1__* FUNC_0 (int ,char,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (char) ;
 TYPE_1__* FUNC_2 () ;

__attribute__((used)) static Node *FUNC_3() {
    Node *VAR_0 = FUNC_2();
    while (FUNC_1(',')) {
        Node *VAR_1 = FUNC_2();
        VAR_0 = FUNC_0(VAR_1->ty, ',', VAR_0, VAR_1);
    }
    return VAR_0;
}
