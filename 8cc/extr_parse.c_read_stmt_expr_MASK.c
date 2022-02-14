
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int Type ;
struct TYPE_5__ {int * ty; int stmts; } ;
typedef TYPE_1__ Node ;


 int FUNC_0 (char) ;
 TYPE_1__* FUNC_1 () ;
 int * VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ) ;

__attribute__((used)) static Node *FUNC_4() {
    Node *VAR_1 = FUNC_1();
    FUNC_0(')');
    Type *VAR_2 = VAR_0;
    if (FUNC_2(VAR_1->stmts) > 0) {
        Node *VAR_3 = FUNC_3(VAR_1->stmts);
        if (VAR_3->ty)
            VAR_2 = VAR_3->ty;
    }
    VAR_1->ty = VAR_2;
    return VAR_1;
}
