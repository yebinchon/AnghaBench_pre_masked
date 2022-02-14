
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* arg; TYPE_2__* len; TYPE_2__* alloc; } ;
struct TYPE_9__ {TYPE_1__ new_expr; } ;
typedef int SrcPos ;
typedef TYPE_2__ Expr ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int ) ;

Expr *FUNC_1(SrcPos VAR_1, Expr *VAR_2, Expr *VAR_3, Expr *VAR_4) {
    Expr *VAR_5 = FUNC_0(VAR_0, VAR_1);
    VAR_5->new_expr.alloc = VAR_2;
    VAR_5->new_expr.len = VAR_3;
    VAR_5->new_expr.arg = VAR_4;
    return VAR_5;
}
