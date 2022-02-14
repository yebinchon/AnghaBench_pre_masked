
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int block; int * cond; } ;
struct TYPE_6__ {TYPE_1__ while_stmt; } ;
typedef int StmtList ;
typedef TYPE_2__ Stmt ;
typedef int SrcPos ;
typedef int Expr ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int ) ;

Stmt *FUNC_1(SrcPos VAR_1, Expr *VAR_2, StmtList VAR_3) {
    Stmt *VAR_4 = FUNC_0(VAR_0, VAR_1);
    VAR_4->while_stmt.cond = VAR_2;
    VAR_4->while_stmt.block = VAR_3;
    return VAR_4;
}
