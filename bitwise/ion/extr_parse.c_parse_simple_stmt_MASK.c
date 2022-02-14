
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TokenKind ;
struct TYPE_2__ {int kind; int pos; } ;
typedef int Stmt ;
typedef int SrcPos ;
typedef int Expr ;


 scalar_t__ FUNC_0 () ;
 int * FUNC_1 (int ,int ,int *,int *) ;
 int * FUNC_2 (int ,int *) ;
 int FUNC_3 () ;
 int * FUNC_4 () ;
 int * FUNC_5 (int *) ;
 TYPE_1__ VAR_0 ;

Stmt *FUNC_6(void) {
    SrcPos VAR_1 = VAR_0.pos;
    Expr *VAR_2 = FUNC_4();
    Stmt *VAR_3 = FUNC_5(VAR_2);
    if (!VAR_3) {
        if (FUNC_0()) {
            TokenKind VAR_4 = VAR_0.kind;
            FUNC_3();
            VAR_3 = FUNC_1(VAR_1, VAR_4, VAR_2, FUNC_4());
        } else {
            VAR_3 = FUNC_2(VAR_1, VAR_2);
        }
    }
    return VAR_3;
}
