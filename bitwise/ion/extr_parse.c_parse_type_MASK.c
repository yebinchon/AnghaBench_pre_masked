
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int Typespec ;
struct TYPE_2__ {int pos; } ;
typedef int SrcPos ;
typedef int Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (int ,int *,int *) ;
 int * FUNC_7 (int ,int *) ;
 int * FUNC_8 (int ,int *) ;
 int FUNC_9 () ;
 int * FUNC_10 () ;
 int * FUNC_11 () ;
 TYPE_1__ VAR_4 ;

Typespec *FUNC_12(void) {
    Typespec *VAR_5 = FUNC_11();
    SrcPos VAR_6 = VAR_4.pos;
    while (FUNC_3(VAR_0) || FUNC_3(VAR_1) || FUNC_2(VAR_3)) {
        if (FUNC_5(VAR_0)) {
            Expr *VAR_7 = ((void*)0);
            if (!FUNC_3(VAR_2)) {
                VAR_7 = FUNC_10();
            }
            FUNC_1(VAR_2);
            VAR_5 = FUNC_6(VAR_6, VAR_5, VAR_7);
        } else if (FUNC_4(VAR_3)) {
            VAR_5 = FUNC_7(VAR_6, VAR_5);
        } else {
            FUNC_0(FUNC_3(VAR_1));
            FUNC_9();
            VAR_5 = FUNC_8(VAR_6, VAR_5);
        }
    }
    return VAR_5;
}
