
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pos; } ;
typedef int SrcPos ;
typedef int Expr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ,int *,int *) ;
 int * FUNC_2 () ;
 TYPE_1__ VAR_1 ;

Expr *FUNC_3(void) {
    Expr *VAR_2 = FUNC_2();
    while (FUNC_0(VAR_0)) {
        SrcPos VAR_3 = VAR_1.pos;
        VAR_2 = FUNC_1(VAR_3, VAR_0, VAR_2, FUNC_2());
    }
    return VAR_2;
}
