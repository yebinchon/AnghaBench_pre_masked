
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TokenKind ;
struct TYPE_6__ {int post; TYPE_2__* expr; int op; } ;
struct TYPE_7__ {TYPE_1__ modify; } ;
typedef int SrcPos ;
typedef TYPE_2__ Expr ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int ) ;

Expr *FUNC_1(SrcPos VAR_1, TokenKind VAR_2, bool VAR_3, Expr *VAR_4) {
    Expr *VAR_5 = FUNC_0(VAR_0, VAR_1);
    VAR_5->modify.op = VAR_2;
    VAR_5->modify.post = VAR_3;
    VAR_5->modify.expr = VAR_4;
    return VAR_5;
}
