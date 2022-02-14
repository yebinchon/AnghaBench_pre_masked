
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int address; int size; struct TYPE_3__* next; } ;
typedef TYPE_1__ s_mem_area ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline void FUNC_0(int VAR_1, int VAR_2, int VAR_3)
{

    s_mem_area * VAR_4 = VAR_0;
    VAR_4[VAR_3].address = VAR_1;
    VAR_4[VAR_3].size = VAR_2 - VAR_1;
    VAR_4[VAR_3].next = 0;


    if (VAR_3 > 0)
    {
        VAR_4[VAR_3 - 1].next = &VAR_4[VAR_3];
    }
}
