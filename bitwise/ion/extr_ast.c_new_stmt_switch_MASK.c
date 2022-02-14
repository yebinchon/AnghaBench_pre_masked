
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t num_cases; int cases; int * expr; } ;
struct TYPE_6__ {TYPE_1__ switch_stmt; } ;
typedef int SwitchCase ;
typedef TYPE_2__ Stmt ;
typedef int SrcPos ;
typedef int Expr ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int ,int ) ;

Stmt *FUNC_2(SrcPos VAR_1, Expr *VAR_2, SwitchCase *VAR_3, size_t VAR_4) {
    Stmt *VAR_5 = FUNC_1(VAR_0, VAR_1);
    VAR_5->switch_stmt.expr = VAR_2;
    VAR_5->switch_stmt.cases = FUNC_0(VAR_3);
    VAR_5->switch_stmt.num_cases = VAR_4;
    return VAR_5;
}
