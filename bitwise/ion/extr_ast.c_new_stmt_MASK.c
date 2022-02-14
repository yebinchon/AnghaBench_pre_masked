
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pos; int kind; } ;
typedef int StmtKind ;
typedef TYPE_1__ Stmt ;
typedef int SrcPos ;


 TYPE_1__* FUNC_0 (int) ;

Stmt *FUNC_1(StmtKind VAR_0, SrcPos VAR_1) {
    Stmt *VAR_2 = FUNC_0(sizeof(Stmt));
    VAR_2->kind = VAR_0;
    VAR_2->pos = VAR_1;
    return VAR_2;
}
