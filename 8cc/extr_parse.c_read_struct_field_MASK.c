
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int Type ;
struct TYPE_12__ {scalar_t__ kind; int sval; } ;
typedef TYPE_2__ Token ;
struct TYPE_13__ {TYPE_1__* ty; } ;
struct TYPE_11__ {scalar_t__ kind; int fields; } ;
typedef TYPE_3__ Node ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_0 (int *,TYPE_3__*,int ) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ) ;
 TYPE_2__* FUNC_3 () ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static Node *FUNC_6(Node *VAR_2) {
    if (VAR_2->ty->kind != VAR_0)
        FUNC_2("struct expected, but got %s", FUNC_4(VAR_2));
    Token *VAR_3 = FUNC_3();
    if (VAR_3->kind != VAR_1)
        FUNC_2("field name expected, but got %s", FUNC_5(VAR_3));
    Type *VAR_4 = FUNC_1(VAR_2->ty->fields, VAR_3->sval);
    if (!VAR_4)
        FUNC_2("struct has no such field: %s", FUNC_5(VAR_3));
    return FUNC_0(VAR_4, VAR_2, VAR_3->sval);
}
