
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_5__ {int* A; int fault_addr; int fault_status; scalar_t__ current_PC; scalar_t__ PC; int exception; } ;
typedef TYPE_1__ Q68State ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_3(Q68State *VAR_8, uint32_t VAR_9)
{
    VAR_4;
    VAR_5;
    int VAR_10 = 0;
    if (VAR_7 == 0) {
        VAR_7 = (int16_t)FUNC_0(VAR_8);
        VAR_10 = 4;
    }
    if (VAR_6 == VAR_0) {


        if (VAR_8->A[7] & 1) {
            VAR_8->exception = VAR_1;
            VAR_8->fault_addr = VAR_8->A[7];
            VAR_8->fault_status = VAR_2
                                | VAR_3;
            return 0;
        }

        FUNC_2(VAR_8, VAR_8->PC);
        VAR_8->PC = VAR_8->current_PC + VAR_7;
        return 18;
    } else if (FUNC_1(VAR_6)) {
        VAR_8->PC = VAR_8->current_PC + VAR_7;
        return 10;
    } else {
        return 8 + VAR_10;
    }
}
