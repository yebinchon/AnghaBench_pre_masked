
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int Token ;
struct TYPE_11__ {scalar_t__ kind; } ;
struct TYPE_10__ {TYPE_1__* ty; } ;
struct TYPE_9__ {scalar_t__ kind; TYPE_7__* ptr; } ;
typedef TYPE_2__ Node ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_0 (int ,TYPE_7__*,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 () ;

__attribute__((used)) static Node *FUNC_5(Token *VAR_3) {
    Node *VAR_4 = FUNC_1(FUNC_4());
    if (VAR_4->ty->kind != VAR_2)
        FUNC_2(VAR_3, "pointer type expected, but got %s", FUNC_3(VAR_4));
    if (VAR_4->ty->ptr->kind == VAR_1)
        return VAR_4;
    return FUNC_0(VAR_0, VAR_4->ty->ptr, VAR_4);
}
