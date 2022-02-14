
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int* A; int fault_addr; int fault_status; int ea_addr; int exception; } ;
typedef TYPE_1__ Q68State ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_10 ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_6(Q68State *VAR_11, uint32_t VAR_12)
{

    if (FUNC_0(VAR_12) == VAR_2) {
        return FUNC_4(VAR_11, VAR_12);
    }

    if (FUNC_0(VAR_12) == VAR_2
     || FUNC_0(VAR_12) == VAR_1
     || FUNC_0(VAR_12) == VAR_5
     || FUNC_0(VAR_12) == VAR_6
     || (FUNC_0(VAR_12) == VAR_3 && FUNC_1(VAR_12) == VAR_4)
    ) {
        return FUNC_5(VAR_11, VAR_12);
    }

    int VAR_13 = FUNC_3(VAR_11, VAR_12, VAR_10, VAR_0);
    if (VAR_13 < 0) {
        return FUNC_5(VAR_11, VAR_12);
    }
    if (VAR_13 % 4 == 2) {
        VAR_13 += 2;
    }

    if (VAR_11->A[7] & 1) {
        VAR_11->exception = VAR_7;
        VAR_11->fault_addr = VAR_11->A[7];
        VAR_11->fault_status = VAR_8
                            | VAR_9;
        return 0;
    }

    FUNC_2(VAR_11, VAR_11->ea_addr);
    return 8 + VAR_13;
}
