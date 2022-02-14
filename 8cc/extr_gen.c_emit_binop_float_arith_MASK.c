
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int kind; int right; int left; TYPE_1__* ty; } ;
struct TYPE_4__ {scalar_t__ kind; } ;
typedef TYPE_2__ Node ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(Node *VAR_2) {
    VAR_1;
    char *VAR_3;
    bool VAR_4 = (VAR_2->ty->kind == VAR_0);
    switch (VAR_2->kind) {
    case '+': VAR_3 = (VAR_4 ? "addsd" : "addss"); break;
    case '-': VAR_3 = (VAR_4 ? "subsd" : "subss"); break;
    case '*': VAR_3 = (VAR_4 ? "mulsd" : "mulss"); break;
    case '/': VAR_3 = (VAR_4 ? "divsd" : "divss"); break;
    default: FUNC_2("invalid operator '%d'", VAR_2->kind);
    }
    FUNC_1(VAR_2->left);
    FUNC_4(0);
    FUNC_1(VAR_2->right);
    FUNC_0("%s #xmm0, #xmm1", (VAR_4 ? "movsd" : "movss"));
    FUNC_3(0);
    FUNC_0("%s #xmm1, #xmm0", VAR_3);
}
