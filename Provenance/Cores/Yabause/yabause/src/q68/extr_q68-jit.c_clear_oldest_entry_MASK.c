
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ m68k_start; int timestamp; } ;
struct TYPE_5__ {scalar_t__ jit_total_data; TYPE_4__* jit_table; int jit_timestamp; } ;
typedef TYPE_1__ Q68State ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_4__*) ;

__attribute__((used)) static void FUNC_4(Q68State *VAR_1)
{
    int VAR_2 = -1;
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        if (VAR_1->jit_table[VAR_3].m68k_start == 0) {
            continue;
        }
        if (VAR_2 < 0
         || FUNC_2(VAR_1->jit_timestamp,
                              VAR_1->jit_table[VAR_3].timestamp,
                              VAR_1->jit_table[VAR_2].timestamp) < 0) {
            VAR_2 = VAR_3;
        }
    }
    if (FUNC_1(VAR_2 >= 0)) {
        FUNC_3(VAR_1, &VAR_1->jit_table[VAR_2]);
    } else {
        FUNC_0("Tried to clear oldest entry from an empty table!");

        VAR_1->jit_total_data = 0;
    }
}
