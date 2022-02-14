
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int kind; int fname; TYPE_1__* ty; struct TYPE_7__* struc; int operand; int glabel; int loff; } ;
struct TYPE_6__ {int offset; } ;
typedef TYPE_2__ Node ;







 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(Node *VAR_0) {
    switch (VAR_0->kind) {
    case 129:
        FUNC_2(VAR_0);
        FUNC_0("lea %d(#rbp), #rax", VAR_0->loff);
        break;
    case 130:
        FUNC_0("lea %s(#rip), #rax", VAR_0->glabel);
        break;
    case 132:
        FUNC_1(VAR_0->operand);
        break;
    case 128:
        FUNC_5(VAR_0->struc);
        FUNC_0("add $%d, #rax", VAR_0->ty->offset);
        break;
    case 131:
        FUNC_0("lea %s(#rip), #rax", VAR_0->fname);
        break;
    default:
        FUNC_3("internal error: %s", FUNC_4(VAR_0));
    }
}
