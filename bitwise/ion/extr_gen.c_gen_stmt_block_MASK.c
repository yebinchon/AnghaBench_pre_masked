
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t num_stmts; int * stmts; } ;
typedef TYPE_1__ StmtList ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

void FUNC_3(StmtList VAR_1) {
    FUNC_1("{");
    VAR_0++;
    for (size_t VAR_2 = 0; VAR_2 < VAR_1.num_stmts; VAR_2++) {
        FUNC_0(VAR_1.stmts[VAR_2]);
    }
    VAR_0--;
    FUNC_2("}");
}
