
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_3__ {int * counter; } ;
typedef TYPE_1__ AudioBitScopeContext ;



__attribute__((used)) static void FUNC_0(AudioBitScopeContext *VAR_0, uint32_t VAR_1, int VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        if (VAR_1 & (1U << VAR_3))
            VAR_0->counter[VAR_3]++;
    }
}
