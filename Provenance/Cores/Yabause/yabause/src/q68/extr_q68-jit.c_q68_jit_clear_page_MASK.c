
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int const uint32_t ;
struct TYPE_7__ {int m68k_start; int m68k_end; int must_clear; int running; } ;
struct TYPE_6__ {int jit_abort; TYPE_4__* jit_table; } ;
typedef TYPE_1__ Q68State ;


 int FUNC_0 (char*,int const) ;
 int FUNC_1 (TYPE_1__*,int const) ;
 int const VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_4__*) ;

void FUNC_4(Q68State *VAR_2, uint32_t VAR_3)
{
    const uint32_t VAR_4 = VAR_3 >> VAR_0;




    int VAR_5;
    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
        if (VAR_2->jit_table[VAR_5].m68k_start != 0
         && VAR_2->jit_table[VAR_5].m68k_start >> VAR_0 <= VAR_4
         && VAR_2->jit_table[VAR_5].m68k_end >> VAR_0 >= VAR_4
        ) {
            if (FUNC_2(VAR_2->jit_table[VAR_5].running)) {
                VAR_2->jit_table[VAR_5].must_clear = 1;
                VAR_2->jit_abort = 1;
            } else {
                FUNC_3(VAR_2, &VAR_2->jit_table[VAR_5]);
            }
        }
    }

    FUNC_1(VAR_2, VAR_4);
}
