
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* ty; } ;
struct TYPE_6__ {int kind; scalar_t__ usig; } ;
struct TYPE_5__ {TYPE_3__* left; TYPE_3__* right; } ;
typedef TYPE_1__ Node ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(char *VAR_4, char *VAR_5, Node *VAR_6) {
    VAR_3;
    if (FUNC_2(VAR_6->left->ty)) {
        FUNC_1(VAR_6->left);
        FUNC_6(0);
        FUNC_1(VAR_6->right);
        FUNC_4(1);
        if (VAR_6->left->ty->kind == VAR_0)
            FUNC_0("ucomiss #xmm0, #xmm1");
        else
            FUNC_0("ucomisd #xmm0, #xmm1");
    } else {
        FUNC_1(VAR_6->left);
        FUNC_5("rax");
        FUNC_1(VAR_6->right);
        FUNC_3("rcx");
        int VAR_7 = VAR_6->left->ty->kind;
        if (VAR_7 == VAR_2 || VAR_7 == VAR_1)
          FUNC_0("cmp #rax, #rcx");
        else
          FUNC_0("cmp #eax, #ecx");
    }
    if (FUNC_2(VAR_6->left->ty) || VAR_6->left->ty->usig)
        FUNC_0("%s #al", VAR_5);
    else
        FUNC_0("%s #al", VAR_4);
    FUNC_0("movzb #al, #eax");
}
