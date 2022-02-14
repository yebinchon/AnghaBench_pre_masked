
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pos; } ;
typedef int SrcPos ;
typedef int Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int ,int *,int *,int *) ;
 int * FUNC_3 () ;
 TYPE_1__ VAR_2 ;

Expr *FUNC_4(void) {
    SrcPos VAR_3 = VAR_2.pos;
    Expr *VAR_4 = FUNC_3();
    if (FUNC_1(VAR_1)) {
        Expr *VAR_5 = FUNC_4();
        FUNC_0(VAR_0);
        Expr *VAR_6 = FUNC_4();
        VAR_4 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);
    }
    return VAR_4;
}
