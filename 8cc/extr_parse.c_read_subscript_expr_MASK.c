
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int Token ;
struct TYPE_11__ {TYPE_1__* ty; } ;
struct TYPE_10__ {int ptr; } ;
typedef TYPE_2__ Node ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int ,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (char,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (char) ;
 int * FUNC_5 () ;
 TYPE_2__* FUNC_6 () ;

__attribute__((used)) static Node *FUNC_7(Node *VAR_1) {
    Token *VAR_2 = FUNC_5();
    Node *VAR_3 = FUNC_6();
    if (!VAR_3)
        FUNC_3(VAR_2, "subscription expected");
    FUNC_4(']');
    Node *VAR_4 = FUNC_1('+', FUNC_2(VAR_1), FUNC_2(VAR_3));
    return FUNC_0(VAR_0, VAR_4->ty->ptr, VAR_4);
}
