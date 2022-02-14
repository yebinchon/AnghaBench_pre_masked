
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int Typespec ;
struct TYPE_2__ {int pos; } ;
typedef int SrcPos ;
typedef int Expr ;
typedef int CompoundField ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ,int *,int *,int ) ;
 int FUNC_6 () ;
 TYPE_1__ VAR_3 ;

Expr *FUNC_7(Typespec *VAR_4) {
    SrcPos VAR_5 = VAR_3.pos;
    FUNC_2(VAR_1);
    CompoundField *VAR_6 = ((void*)0);
    while (!FUNC_3(VAR_2)) {
        FUNC_1(VAR_6, FUNC_6());
        if (!FUNC_4(VAR_0)) {
            break;
        }
    }
    FUNC_2(VAR_2);
    return FUNC_5(VAR_5, VAR_4, VAR_6, FUNC_0(VAR_6));
}
