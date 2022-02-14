
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int TokenKind ;
struct TYPE_5__ {int * right; int * left; int op; } ;
struct TYPE_6__ {TYPE_1__ assign; } ;
typedef TYPE_2__ Stmt ;
typedef int SrcPos ;
typedef int Expr ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int ) ;

Stmt *FUNC_1(SrcPos VAR_1, TokenKind VAR_2, Expr *VAR_3, Expr *VAR_4) {
    Stmt *VAR_5 = FUNC_0(VAR_0, VAR_1);
    VAR_5->assign.op = VAR_2;
    VAR_5->assign.left = VAR_3;
    VAR_5->assign.right = VAR_4;
    return VAR_5;
}
