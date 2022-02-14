
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ kind; } ;
struct TYPE_9__ {int kind; TYPE_3__* ty; int right; int left; } ;
typedef TYPE_1__ Node ;


 scalar_t__ VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,char*,TYPE_1__*) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(Node *VAR_2) {
    VAR_1;
    if (VAR_2->ty->kind == VAR_0) {
        FUNC_3(VAR_2->kind, VAR_2->left, VAR_2->right);
        return;
    }
    switch (VAR_2->kind) {
    case '<': FUNC_2("setl", "setb", VAR_2); return;
    case 130: FUNC_2("sete", "sete", VAR_2); return;
    case 129: FUNC_2("setle", "setna", VAR_2); return;
    case 128: FUNC_2("setne", "setne", VAR_2); return;
    }
    if (FUNC_6(VAR_2->ty))
        FUNC_1(VAR_2);
    else if (FUNC_5(VAR_2->ty))
        FUNC_0(VAR_2);
    else
        FUNC_4("internal error: %s", FUNC_7(VAR_2));
}
