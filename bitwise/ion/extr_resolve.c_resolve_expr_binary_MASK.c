
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TokenKind ;
struct TYPE_4__ {int right; int left; int op; } ;
struct TYPE_5__ {scalar_t__ kind; TYPE_1__ binary; int pos; } ;
typedef int Operand ;
typedef TYPE_2__ Expr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char const*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;

Operand FUNC_4(Expr *VAR_1) {
    FUNC_0(VAR_1->kind == VAR_0);
    Operand VAR_2 = FUNC_2(VAR_1->binary.left);
    Operand VAR_3 = FUNC_2(VAR_1->binary.right);
    TokenKind VAR_4 = VAR_1->binary.op;
    const char *VAR_5 = FUNC_3(VAR_4);
    return FUNC_1(VAR_4, VAR_5, VAR_1->pos, VAR_2, VAR_3, VAR_1->binary.left, VAR_1->binary.right);
}
