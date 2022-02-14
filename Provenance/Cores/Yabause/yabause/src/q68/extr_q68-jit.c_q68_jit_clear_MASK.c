
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_7__ {scalar_t__ m68k_start; struct TYPE_7__* next; } ;
struct TYPE_6__ {TYPE_2__** jit_hashchain; } ;
typedef TYPE_1__ Q68State ;
typedef TYPE_2__ Q68JitEntry ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;

void FUNC_2(Q68State *VAR_0, uint32_t VAR_1)
{
    const int VAR_2 = FUNC_0(VAR_1);
    Q68JitEntry *VAR_3 = VAR_0->jit_hashchain[VAR_2];
    while (VAR_3) {
        if (VAR_3->m68k_start == VAR_1) {
            FUNC_1(VAR_0, VAR_3);
            return;
        }
        VAR_3 = VAR_3->next;
    }
}
