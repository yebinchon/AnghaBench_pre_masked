
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ halted; void* PC; void** A; int * jit_running; scalar_t__ fault_status; scalar_t__ fault_opcode; scalar_t__ fault_addr; scalar_t__ exception; scalar_t__ ea_addr; scalar_t__ current_PC; scalar_t__ SSP; scalar_t__ USP; int SR; scalar_t__* D; } ;
typedef TYPE_1__ Q68State ;


 void* FUNC_0 (TYPE_1__*,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(Q68State *VAR_1)
{
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
        VAR_1->D[VAR_2] = 0;
        VAR_1->A[VAR_2] = 0;
    }
    VAR_1->PC = 0;
    VAR_1->SR = VAR_0;
    FUNC_1(VAR_1, 7);
    VAR_1->USP = 0;
    VAR_1->SSP = 0;
    VAR_1->current_PC = 0;
    VAR_1->ea_addr = 0;
    VAR_1->exception = 0;
    VAR_1->fault_addr = 0;
    VAR_1->fault_opcode = 0;
    VAR_1->fault_status = 0;
    VAR_1->jit_running = ((void*)0);







    VAR_1->A[7] = FUNC_0(VAR_1, 0x000000);
    VAR_1->PC = FUNC_0(VAR_1, 0x000004);
    VAR_1->halted = 0;
}
