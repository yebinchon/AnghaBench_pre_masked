
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_11__ {TYPE_1__* ptr; int params; } ;
struct TYPE_10__ {scalar_t__ kind; TYPE_8__* ty; int fname; struct TYPE_10__* operand; } ;
struct TYPE_9__ {int params; } ;
typedef TYPE_2__ Node ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_8__*,int ,int *) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int *) ;
 int * FUNC_2 (int ) ;

__attribute__((used)) static Node *FUNC_3(Node *VAR_2) {
    if (VAR_2->kind == VAR_0 && VAR_2->operand->kind == VAR_1) {
        Node *VAR_3 = VAR_2->operand;
        Vector *VAR_4 = FUNC_2(VAR_3->ty->params);
        return FUNC_0(VAR_3->ty, VAR_3->fname, VAR_4);
    }
    Vector *VAR_5 = FUNC_2(VAR_2->ty->ptr->params);
    return FUNC_1(VAR_2, VAR_5);
}
