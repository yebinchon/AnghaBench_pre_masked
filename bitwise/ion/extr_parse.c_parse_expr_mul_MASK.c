
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TokenKind ;
struct TYPE_2__ {int kind; int pos; } ;
typedef int SrcPos ;
typedef int Expr ;


 scalar_t__ FUNC_0 () ;
 int * FUNC_1 (int ,int ,int *,int *) ;
 int FUNC_2 () ;
 int * FUNC_3 () ;
 TYPE_1__ VAR_0 ;

Expr *FUNC_4(void) {
    Expr *VAR_1 = FUNC_3();
    while (FUNC_0()) {
        SrcPos VAR_2 = VAR_0.pos;
        TokenKind VAR_3 = VAR_0.kind;
        FUNC_2();
        VAR_1 = FUNC_1(VAR_2, VAR_3, VAR_1, FUNC_3());
    }
    return VAR_1;
}
