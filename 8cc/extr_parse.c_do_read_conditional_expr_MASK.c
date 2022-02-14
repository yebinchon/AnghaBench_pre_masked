
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int Type ;
struct TYPE_11__ {int * ty; } ;
typedef TYPE_1__ Node ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (char) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int * FUNC_6 (int *,int *) ;
 TYPE_1__* FUNC_7 (int *,TYPE_1__*) ;

__attribute__((used)) static Node *FUNC_8(Node *VAR_0) {
    Node *VAR_1 = FUNC_1(FUNC_4());
    FUNC_2(':');
    Node *VAR_2 = FUNC_1(FUNC_5());

    Type *VAR_3 = VAR_1 ? VAR_1->ty : VAR_0->ty;
    Type *VAR_4 = VAR_2->ty;


    if (FUNC_3(VAR_3) && FUNC_3(VAR_4)) {
        Type *VAR_5 = FUNC_6(VAR_3, VAR_4);
        return FUNC_0(VAR_5, VAR_0, (VAR_1 ? FUNC_7(VAR_5, VAR_1) : ((void*)0)), FUNC_7(VAR_5, VAR_2));
    }
    return FUNC_0(VAR_4, VAR_0, VAR_1, VAR_2);
}
