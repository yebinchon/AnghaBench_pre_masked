
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ offset; } ;
typedef TYPE_2__ Type ;
struct TYPE_12__ {int kind; int operand; TYPE_1__* ty; struct TYPE_12__* struc; int glabel; scalar_t__ loff; } ;
struct TYPE_10__ {int offset; } ;
typedef TYPE_3__ Node ;






 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*,char*,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_6(Node *VAR_1, Type *VAR_2, int VAR_3) {
    VAR_0;
    switch (VAR_1->kind) {
    case 129:
        FUNC_3(VAR_1);
        FUNC_2(VAR_2, "rbp", VAR_1->loff + VAR_2->offset + VAR_3);
        break;
    case 130:
        FUNC_1(VAR_2, VAR_1->glabel, VAR_2->offset + VAR_3);
        break;
    case 128:
        FUNC_6(VAR_1->struc, VAR_2, VAR_1->ty->offset + VAR_3);
        break;
    case 131:
        FUNC_0(VAR_1->operand);
        FUNC_2(VAR_2, "rax", VAR_2->offset + VAR_3);
        break;
    default:
        FUNC_4("internal error: %s", FUNC_5(VAR_1));
    }
}
