
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_syms; int* weights; int* cum_prob; int* idx2sym; } ;
typedef TYPE_1__ Model ;



__attribute__((used)) static void FUNC_0(Model *VAR_0)
{
    int VAR_1;

    for (VAR_1 = 0; VAR_1 <= VAR_0->num_syms; VAR_1++) {
        VAR_0->weights[VAR_1] = 1;
        VAR_0->cum_prob[VAR_1] = VAR_0->num_syms - VAR_1;
    }
    VAR_0->weights[0] = 0;
    for (VAR_1 = 0; VAR_1 < VAR_0->num_syms; VAR_1++)
        VAR_0->idx2sym[VAR_1 + 1] = VAR_1;
}
