
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pos; int kind; } ;
typedef int SrcPos ;
typedef int ExprKind ;
typedef TYPE_1__ Expr ;


 TYPE_1__* FUNC_0 (int) ;

Expr *FUNC_1(ExprKind VAR_0, SrcPos VAR_1) {
    Expr *VAR_2 = FUNC_0(sizeof(Expr));
    VAR_2->kind = VAR_0;
    VAR_2->pos = VAR_1;
    return VAR_2;
}
