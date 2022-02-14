
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int Type ;
struct TYPE_6__ {scalar_t__ type; } ;
typedef TYPE_1__ Operand ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int * FUNC_7 (scalar_t__) ;

void FUNC_8(Operand *VAR_2, Operand *VAR_3) {
    if (VAR_2->type == VAR_0) {
        FUNC_1(VAR_3, VAR_0);
    } else if (VAR_3->type == VAR_0) {
        FUNC_1(VAR_2, VAR_0);
    } else if (VAR_2->type == VAR_1) {
        FUNC_1(VAR_3, VAR_1);
    } else if (VAR_3->type == VAR_1) {
        FUNC_1(VAR_2, VAR_1);
    } else {
        FUNC_0(FUNC_2(VAR_2->type));
        FUNC_0(FUNC_2(VAR_3->type));
        FUNC_4(VAR_2);
        FUNC_4(VAR_3);
        if (VAR_2->type != VAR_3->type) {
            if (FUNC_3(VAR_2->type) == FUNC_3(VAR_3->type)) {
                if (FUNC_5(VAR_2->type) <= FUNC_5(VAR_3->type)) {
                    FUNC_1(VAR_2, VAR_3->type);
                } else {
                    FUNC_1(VAR_3, VAR_2->type);
                }
            } else if (FUNC_3(VAR_2->type) && FUNC_5(VAR_3->type) >= FUNC_5(VAR_2->type)) {
                FUNC_1(VAR_2, VAR_3->type);
            } else if (FUNC_3(VAR_3->type) && FUNC_5(VAR_2->type) >= FUNC_5(VAR_3->type)) {
                FUNC_1(VAR_3, VAR_2->type);
            } else if (FUNC_3(VAR_2->type) && FUNC_6(VAR_2->type) > FUNC_6(VAR_3->type)) {
                FUNC_1(VAR_3, VAR_2->type);
            } else if (FUNC_3(VAR_3->type) && FUNC_6(VAR_3->type) > FUNC_6(VAR_2->type)) {
                FUNC_1(VAR_2, VAR_3->type);
            } else {
                Type *VAR_4 = FUNC_7(FUNC_3(VAR_2->type) ? VAR_2->type : VAR_3->type);
                FUNC_1(VAR_2, VAR_4);
                FUNC_1(VAR_3, VAR_4);
            }
        }
    }
    FUNC_0(VAR_2->type == VAR_3->type);
}
