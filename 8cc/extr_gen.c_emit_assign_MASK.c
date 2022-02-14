
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int ty; } ;
struct TYPE_10__ {TYPE_1__* ty; } ;
struct TYPE_9__ {TYPE_3__* left; TYPE_4__* right; int ty; } ;
struct TYPE_8__ {scalar_t__ kind; int size; } ;
typedef TYPE_2__ Node ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_4(Node *VAR_2) {
    VAR_1;
    if (VAR_2->left->ty->kind == VAR_0 &&
        VAR_2->left->ty->size > 8) {
        FUNC_0(VAR_2->left, VAR_2->right);
    } else {
        FUNC_1(VAR_2->right);
        FUNC_2(VAR_2->ty, VAR_2->right->ty);
        FUNC_3(VAR_2->left);
    }
}
