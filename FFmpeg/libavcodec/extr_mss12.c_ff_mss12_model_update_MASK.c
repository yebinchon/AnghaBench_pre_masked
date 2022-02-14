
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* weights; int* idx2sym; int * cum_prob; } ;
typedef TYPE_1__ Model ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(Model *VAR_0, int VAR_1)
{
    int VAR_2;

    if (VAR_0->weights[VAR_1] == VAR_0->weights[VAR_1 - 1]) {
        for (VAR_2 = VAR_1; VAR_0->weights[VAR_2 - 1] == VAR_0->weights[VAR_1]; VAR_2--);
        if (VAR_2 != VAR_1) {
            int VAR_3, VAR_4;

            VAR_3 = VAR_0->idx2sym[VAR_1];
            VAR_4 = VAR_0->idx2sym[VAR_2];

            VAR_0->idx2sym[VAR_1] = VAR_4;
            VAR_0->idx2sym[VAR_2] = VAR_3;

            VAR_1 = VAR_2;
        }
    }
    VAR_0->weights[VAR_1]++;
    for (VAR_2 = VAR_1 - 1; VAR_2 >= 0; VAR_2--)
        VAR_0->cum_prob[VAR_2]++;
    FUNC_0(VAR_0);
}
