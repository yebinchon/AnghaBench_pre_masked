
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ TokenKind ;
struct TYPE_2__ {scalar_t__ kind; int pos; } ;
typedef int SrcPos ;
typedef int Expr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int * FUNC_1 (int ,scalar_t__,int,int *) ;
 int * FUNC_2 (int ,scalar_t__,int *) ;
 int FUNC_3 () ;
 int * FUNC_4 () ;
 TYPE_1__ VAR_2 ;

Expr *FUNC_5(void) {
    if (FUNC_0()) {
        SrcPos VAR_3 = VAR_2.pos;
        TokenKind VAR_4 = VAR_2.kind;
        FUNC_3();
        if (VAR_4 == VAR_1 || VAR_4 == VAR_0) {
            return FUNC_1(VAR_3, VAR_4, 0, FUNC_5());
        } else {
            return FUNC_2(VAR_3, VAR_4, FUNC_5());
        }
    } else {
        return FUNC_4();
    }
}
