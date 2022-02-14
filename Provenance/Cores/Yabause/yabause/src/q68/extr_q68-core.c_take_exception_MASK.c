
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_7__ {int SR; int USP; int* A; int SSP; int PC; int fault_opcode; int fault_addr; int fault_status; void* halted; int * jit_running; } ;
typedef TYPE_1__ Q68State ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 void* VAR_0 ;
 int FUNC_2 (TYPE_1__*,int const) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,int const) ;

__attribute__((used)) static int FUNC_4(Q68State *VAR_2, uint8_t VAR_3)
{
    static const int VAR_4[256] = {
        [145 ] = 50,
        [146 ] = 50,
        [142 ] = 34,
        [143 ] = 42,
        [144 ] = 44,
        [128 ] = 34,
        [132 ] = 34,
        [130 ] = 34,
        [134 ] = 34,
        [133 ] = 34,
        [131 ] = 44,
        [141 ] = 44,
        [140 ] = 44,
        [139 ] = 44,
        [138 ] = 44,
        [137 ] = 44,
        [136 ] = 44,
        [135 ] = 44,
        [129 + 0 ] = 38,
        [129 + 1 ] = 38,
        [129 + 2 ] = 38,
        [129 + 3 ] = 38,
        [129 + 4 ] = 38,
        [129 + 5 ] = 38,
        [129 + 6 ] = 38,
        [129 + 7 ] = 38,
        [129 + 8 ] = 38,
        [129 + 9 ] = 38,
        [129 +10 ] = 38,
        [129 +11 ] = 38,
        [129 +12 ] = 38,
        [129 +13 ] = 38,
        [129 +14 ] = 38,
        [129 +15 ] = 38,
    };


    VAR_2->jit_running = ((void*)0);

    if (!(VAR_2->SR & VAR_1)) {
        VAR_2->USP = VAR_2->A[7];
        VAR_2->A[7] = VAR_2->SSP;
    }

    if (VAR_2->A[7] & 1) {
        VAR_2->halted = VAR_0;
        return 0;
    }

    FUNC_1(VAR_2, VAR_2->PC);
    FUNC_0(VAR_2, VAR_2->SR);
    if (VAR_3 == 145 || VAR_3 == 146) {
        FUNC_0(VAR_2, VAR_2->fault_opcode);
        FUNC_1(VAR_2, VAR_2->fault_addr);
        FUNC_0(VAR_2, VAR_2->fault_status);
    }
    VAR_2->SR |= VAR_1;
    if (VAR_3 >= 141 && VAR_3 <= 135) {
        FUNC_3(VAR_2, (VAR_3 - 141) + 1);
    }
    VAR_2->PC = FUNC_2(VAR_2, VAR_3*4);

    if (VAR_2->PC & 1) {


        VAR_2->halted = VAR_0;
        return 0;
    }

    return VAR_4[VAR_3];
}
