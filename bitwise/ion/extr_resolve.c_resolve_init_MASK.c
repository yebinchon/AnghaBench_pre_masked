
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_16__ ;


typedef int Typespec ;
struct TYPE_26__ {scalar_t__ size; } ;
typedef TYPE_1__ Type ;
struct TYPE_27__ {scalar_t__ kind; } ;
struct TYPE_25__ {int type; } ;
typedef int SrcPos ;
typedef TYPE_2__ Expr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 TYPE_16__ FUNC_7 (TYPE_2__*) ;
 TYPE_1__* FUNC_8 (int ,TYPE_1__*,TYPE_2__*) ;
 TYPE_1__* FUNC_9 (int *,int) ;
 int FUNC_10 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_11 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_12 (TYPE_1__*) ;
 TYPE_1__* FUNC_13 (int ) ;

Type *FUNC_14(SrcPos VAR_1, Typespec *VAR_2, Expr *VAR_3, bool VAR_4, bool VAR_5) {
    Type *VAR_6 = ((void*)0);
    Type *VAR_7 = ((void*)0);
    Type *VAR_8 = ((void*)0);
    if (VAR_5) {
        if (VAR_2) {
            VAR_8 = VAR_6 = FUNC_9(VAR_2, VAR_4);
        }
        if (!VAR_6) {
            FUNC_2(VAR_1, "Cannot use undef initializer without declared type");
        }
    } else if (VAR_2) {
        VAR_8 = VAR_6 = FUNC_9(VAR_2, VAR_4);
        if (VAR_3) {
            VAR_7 = VAR_6 = FUNC_8(VAR_1, VAR_8, VAR_3);
            if (!VAR_7) {
                FUNC_2(VAR_1, "Invalid type in initialization. Expected %s", FUNC_3(VAR_8));
            }
        }
    } else {
        FUNC_0(VAR_3);
        VAR_7 = VAR_6 = FUNC_13(FUNC_7(VAR_3).type);
        if (FUNC_5(VAR_6) && VAR_3->kind != VAR_0) {
            VAR_6 = FUNC_12(VAR_6);
            FUNC_11(VAR_3, VAR_6);
        }
        FUNC_10(VAR_3, VAR_6);
    }
    FUNC_1(VAR_6);
    if (!VAR_3 || FUNC_6(VAR_7)) {
        VAR_6 = FUNC_4(VAR_6);
    }
    if (VAR_6->size == 0) {
        FUNC_2(VAR_1, "Cannot declare variable of size 0");
    }
    return VAR_6;
}
