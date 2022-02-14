
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ m68k_start; } ;
struct TYPE_7__ {int jit_pages; scalar_t__ jit_callstack_top; scalar_t__ jit_blist_num; scalar_t__ jit_in_blist; TYPE_1__* jit_blacklist; scalar_t__ jit_timestamp; scalar_t__ jit_total_data; int ** jit_hashchain; TYPE_5__* jit_table; scalar_t__ jit_abort; } ;
struct TYPE_6__ {scalar_t__ m68k_end; scalar_t__ m68k_start; } ;
typedef TYPE_2__ Q68State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_5__*) ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2(Q68State *VAR_2)
{
    int VAR_3;

    VAR_2->jit_abort = 0;
    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        if (VAR_2->jit_table[VAR_3].m68k_start) {
            FUNC_0(VAR_2, &VAR_2->jit_table[VAR_3]);
        }
    }
    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        VAR_2->jit_hashchain[VAR_3] = ((void*)0);
    }
    VAR_2->jit_total_data = 0;
    VAR_2->jit_timestamp = 0;
    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        VAR_2->jit_blacklist[VAR_3].m68k_start = 0;
        VAR_2->jit_blacklist[VAR_3].m68k_end = 0;
    }
    VAR_2->jit_in_blist = 0;
    VAR_2->jit_blist_num = 0;
    VAR_2->jit_callstack_top = 0;
    FUNC_1(VAR_2->jit_pages, 0, sizeof(VAR_2->jit_pages));
}
