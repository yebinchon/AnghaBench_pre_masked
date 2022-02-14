
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ m68k_start; TYPE_3__* next; TYPE_2__* prev; int * native_code; scalar_t__ native_size; } ;
struct TYPE_11__ {TYPE_3__** jit_hashchain; int (* free_func ) (int *) ;int jit_total_data; TYPE_1__* jit_callstack; } ;
struct TYPE_10__ {TYPE_2__* prev; } ;
struct TYPE_9__ {TYPE_3__* next; } ;
struct TYPE_8__ {scalar_t__ return_PC; TYPE_5__* return_entry; } ;
typedef TYPE_4__ Q68State ;
typedef TYPE_5__ Q68JitEntry ;


 size_t FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(Q68State *VAR_1, Q68JitEntry *VAR_2)
{

    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        if (VAR_1->jit_callstack[VAR_3].return_entry == VAR_2) {
            VAR_1->jit_callstack[VAR_3].return_PC = 0;
        }
    }


    VAR_1->jit_total_data -= VAR_2->native_size;
    VAR_1->free_func(VAR_2->native_code);
    VAR_2->native_code = ((void*)0);


    if (VAR_2->next) {
        VAR_2->next->prev = VAR_2->prev;
    }
    if (VAR_2->prev) {
        VAR_2->prev->next = VAR_2->next;
    } else {
        VAR_1->jit_hashchain[FUNC_0(VAR_2->m68k_start)] = VAR_2->next;
    }


    VAR_2->m68k_start = 0;
}
