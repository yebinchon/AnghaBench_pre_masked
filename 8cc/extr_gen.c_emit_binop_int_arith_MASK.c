
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int ty; } ;
struct TYPE_6__ {int kind; TYPE_3__* left; TYPE_1__* ty; TYPE_3__* right; } ;
struct TYPE_5__ {scalar_t__ usig; } ;
typedef TYPE_2__ Node ;





 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,char) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(Node *VAR_1) {
    VAR_0;
    char *VAR_2 = ((void*)0);
    switch (VAR_1->kind) {
    case '+': VAR_2 = "add"; break;
    case '-': VAR_2 = "sub"; break;
    case '*': VAR_2 = "imul"; break;
    case '^': VAR_2 = "xor"; break;
    case 130: VAR_2 = "sal"; break;
    case 129: VAR_2 = "sar"; break;
    case 128: VAR_2 = "shr"; break;
    case '/': case '%': break;
    default: FUNC_2("invalid operator '%d'", VAR_1->kind);
    }
    FUNC_1(VAR_1->left);
    FUNC_5("rax");
    FUNC_1(VAR_1->right);
    FUNC_0("mov #rax, #rcx");
    FUNC_4("rax");
    if (VAR_1->kind == '/' || VAR_1->kind == '%') {
        if (VAR_1->ty->usig) {
          FUNC_0("xor #edx, #edx");
          FUNC_0("div #rcx");
        } else {
          FUNC_0("cqto");
          FUNC_0("idiv #rcx");
        }
        if (VAR_1->kind == '%')
            FUNC_0("mov #edx, #eax");
    } else if (VAR_1->kind == 130 || VAR_1->kind == 129 || VAR_1->kind == 128) {
        FUNC_0("%s #cl, #%s", VAR_2, FUNC_3(VAR_1->left->ty, 'a'));
    } else {
        FUNC_0("%s #rcx, #rax", VAR_2);
    }
}
