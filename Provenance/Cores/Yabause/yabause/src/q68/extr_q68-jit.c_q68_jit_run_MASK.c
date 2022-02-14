
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_14__ {int running; int exec_address; int must_clear; int timestamp; } ;
struct TYPE_13__ {scalar_t__ cycles; unsigned int jit_callstack_top; scalar_t__ PC; int exception; TYPE_1__* jit_callstack; int * A; scalar_t__ jit_abort; int jit_timestamp; } ;
struct TYPE_12__ {scalar_t__ return_PC; int return_native; TYPE_3__* return_entry; } ;
typedef TYPE_2__ Q68State ;
typedef TYPE_3__ Q68JitEntry ;


 int FUNC_0 (TYPE_2__*,scalar_t__,int *) ;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 TYPE_3__* FUNC_4 (TYPE_2__*,scalar_t__) ;

void FUNC_5(Q68State *VAR_1, uint32_t VAR_2,
                 Q68JitEntry **VAR_3)
{
    Q68JitEntry *VAR_4 = *VAR_3;

  again:
    VAR_4->timestamp = VAR_1->jit_timestamp;
    VAR_1->jit_timestamp++;
    VAR_4->running = 1;
    int VAR_5 = FUNC_0(VAR_1, VAR_2 - VAR_1->cycles,
                          &VAR_4->exec_address);
    VAR_4->running = 0;
    VAR_1->jit_abort = 0;
    VAR_1->cycles += VAR_5 & 0x3FFF;

    if (FUNC_2(VAR_4->must_clear)) {
        FUNC_3(VAR_1, VAR_4);
        VAR_4 = ((void*)0);
    } else if (VAR_5 & 0x8000) {
        if (VAR_5 & 0x4000) {
            VAR_4 = ((void*)0);
            unsigned int VAR_6 = VAR_1->jit_callstack_top;
            unsigned int VAR_7;
            for (VAR_7 = VAR_0; VAR_7 > 0; VAR_7--) {
                VAR_6 = (VAR_6 + VAR_0-1) % VAR_0;
                if (VAR_1->jit_callstack[VAR_6].return_PC == VAR_1->PC) {
                    VAR_4 = VAR_1->jit_callstack[VAR_6].return_entry;
                    VAR_4->exec_address =
                        VAR_1->jit_callstack[VAR_6].return_native;
                    VAR_1->jit_callstack_top = VAR_6;
                    if (VAR_1->cycles < VAR_2) {
                        goto again;
                    } else {
                        break;
                    }
                }
            }
        } else {
            const unsigned int VAR_8 = VAR_1->jit_callstack_top;
            const uint32_t VAR_9 = FUNC_1(VAR_1, VAR_1->A[7]);
            VAR_1->jit_callstack[VAR_8].return_PC = VAR_9;
            VAR_1->jit_callstack[VAR_8].return_entry = VAR_4;
            VAR_1->jit_callstack[VAR_8].return_native = VAR_4->exec_address;
            VAR_1->jit_callstack_top = (VAR_8+1) % VAR_0;
            VAR_4 = ((void*)0);
        }
    } else if (!VAR_4->exec_address) {
        VAR_4 = ((void*)0);
    }





    if (!VAR_4 && VAR_1->cycles < VAR_2 && !VAR_1->exception) {
        VAR_4 = FUNC_4(VAR_1, VAR_1->PC);
        if (VAR_4) {
            goto again;
        }
    }

    *VAR_3 = VAR_4;
}
