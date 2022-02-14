
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t num_elseifs; void* else_block; int elseifs; void* then_block; int * cond; TYPE_2__* init; } ;
struct TYPE_7__ {TYPE_1__ if_stmt; } ;
typedef void* StmtList ;
typedef TYPE_2__ Stmt ;
typedef int SrcPos ;
typedef int Expr ;
typedef int ElseIf ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int ,int ) ;

Stmt *FUNC_2(SrcPos VAR_1, Stmt *VAR_2, Expr *VAR_3, StmtList VAR_4, ElseIf *VAR_5, size_t VAR_6, StmtList VAR_7) {
    Stmt *VAR_8 = FUNC_1(VAR_0, VAR_1);
    VAR_8->if_stmt.init = VAR_2;
    VAR_8->if_stmt.cond = VAR_3;
    VAR_8->if_stmt.then_block = VAR_4;
    VAR_8->if_stmt.elseifs = FUNC_0(VAR_5);
    VAR_8->if_stmt.num_elseifs = VAR_6;
    VAR_8->if_stmt.else_block = VAR_7;
    return VAR_8;
}
