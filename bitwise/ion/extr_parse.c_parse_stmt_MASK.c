
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int pos; } ;
struct TYPE_17__ {int notes; } ;
typedef TYPE_1__ Stmt ;
typedef int SrcPos ;
typedef int Notes ;
typedef int Note ;
typedef int Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ,int ) ;
 TYPE_1__* FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int ,int ) ;
 TYPE_1__* FUNC_8 (int ,int ) ;
 TYPE_1__* FUNC_9 (int ,int ) ;
 TYPE_1__* FUNC_10 (int ,int *) ;
 int * FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 TYPE_1__* FUNC_15 () ;
 int FUNC_16 () ;
 TYPE_1__* FUNC_17 (int ) ;
 TYPE_1__* FUNC_18 (int ) ;
 TYPE_1__* FUNC_19 (int ) ;
 TYPE_1__* FUNC_20 (int ) ;
 TYPE_1__* FUNC_21 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_2__ VAR_12 ;
 int VAR_13 ;

Stmt *FUNC_22(void) {
    Notes VAR_14 = FUNC_14();
    SrcPos VAR_15 = VAR_12.pos;
    Stmt *VAR_16 = ((void*)0);
    if (FUNC_2(VAR_9)) {
        VAR_16 = FUNC_19(VAR_15);
    } else if (FUNC_2(VAR_13)) {
        VAR_16 = FUNC_21(VAR_15);
    } else if (FUNC_2(VAR_6)) {
        VAR_16 = FUNC_17(VAR_15);
    } else if (FUNC_2(VAR_7)) {
        VAR_16 = FUNC_18(VAR_15);
    } else if (FUNC_2(VAR_11)) {
        VAR_16 = FUNC_20(VAR_15);
    } else if (FUNC_1(VAR_1)) {
        VAR_16 = FUNC_4(VAR_15, FUNC_16());
    } else if (FUNC_2(VAR_4)) {
        FUNC_0(VAR_3);
        VAR_16 = FUNC_5(VAR_15);
    } else if (FUNC_2(VAR_5)) {
        FUNC_0(VAR_3);
        VAR_16 = FUNC_6(VAR_15);
    } else if (FUNC_2(VAR_10)) {
        Expr *VAR_17 = ((void*)0);
        if (!FUNC_1(VAR_3)) {
            VAR_17 = FUNC_11();
        }
        FUNC_0(VAR_3);
        VAR_16 = FUNC_10(VAR_15, VAR_17);
    } else if (FUNC_3(VAR_2)) {
        Note VAR_18 = FUNC_13();
        FUNC_0(VAR_3);
        VAR_16 = FUNC_9(VAR_15, VAR_18);
    } else if (FUNC_3(VAR_0)) {
        VAR_16 = FUNC_8(VAR_15, FUNC_12());
    } else if (FUNC_2(VAR_8)) {
        VAR_16 = FUNC_7(VAR_15, FUNC_12());
        FUNC_0(VAR_3);
    } else {
        VAR_16 = FUNC_15();
        FUNC_0(VAR_3);
    }
    VAR_16->notes = VAR_14;
    return VAR_16;
}
