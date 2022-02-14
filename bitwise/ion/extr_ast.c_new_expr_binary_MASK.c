
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TokenKind ;
struct TYPE_7__ {TYPE_2__* right; TYPE_2__* left; int op; } ;
struct TYPE_8__ {TYPE_1__ binary; } ;
typedef int SrcPos ;
typedef TYPE_2__ Expr ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int ) ;

Expr *FUNC_1(SrcPos VAR_1, TokenKind VAR_2, Expr *VAR_3, Expr *VAR_4) {
    Expr *VAR_5 = FUNC_0(VAR_0, VAR_1);
    VAR_5->binary.op = VAR_2;
    VAR_5->binary.left = VAR_3;
    VAR_5->binary.right = VAR_4;
    return VAR_5;
}
