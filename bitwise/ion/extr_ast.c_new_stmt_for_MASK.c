
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int block; TYPE_2__* next; int * cond; TYPE_2__* init; } ;
struct TYPE_8__ {TYPE_1__ for_stmt; } ;
typedef int StmtList ;
typedef TYPE_2__ Stmt ;
typedef int SrcPos ;
typedef int Expr ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int ) ;

Stmt *FUNC_1(SrcPos VAR_1, Stmt *VAR_2, Expr *VAR_3, Stmt *VAR_4, StmtList VAR_5) {
    Stmt *VAR_6 = FUNC_0(VAR_0, VAR_1);
    VAR_6->for_stmt.init = VAR_2;
    VAR_6->for_stmt.cond = VAR_3;
    VAR_6->for_stmt.next = VAR_4;
    VAR_6->for_stmt.block = VAR_5;
    return VAR_6;
}
