
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* expr; } ;
struct TYPE_7__ {TYPE_1__ paren; } ;
typedef int SrcPos ;
typedef TYPE_2__ Expr ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int ) ;

Expr *FUNC_1(SrcPos VAR_1, Expr *VAR_2) {
    Expr *VAR_3 = FUNC_0(VAR_0, VAR_1);
    VAR_3->paren.expr = VAR_2;
    return VAR_3;
}
