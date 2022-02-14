
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Type ;
struct TYPE_3__ {size_t num_stmts; int * stmts; } ;
typedef int Sym ;
typedef TYPE_1__ StmtList ;
typedef int StmtCtx ;


 scalar_t__ FUNC_0 (int ,int *,int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;

bool FUNC_3(StmtList VAR_0, Type *VAR_1, StmtCtx VAR_2) {
    Sym *VAR_3 = FUNC_1();
    bool VAR_4 = 0;
    for (size_t VAR_5 = 0; VAR_5 < VAR_0.num_stmts; VAR_5++) {
        VAR_4 = FUNC_0(VAR_0.stmts[VAR_5], VAR_1, VAR_2) || VAR_4;
    }
    FUNC_2(VAR_3);
    return VAR_4;
}
