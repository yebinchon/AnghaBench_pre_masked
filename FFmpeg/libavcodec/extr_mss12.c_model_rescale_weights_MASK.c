
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ thr_weight; int threshold; int* cum_prob; int num_syms; int* weights; } ;
typedef TYPE_1__ Model ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(Model *VAR_1)
{
    int VAR_2;
    int VAR_3;

    if (VAR_1->thr_weight == VAR_0)
        VAR_1->threshold = FUNC_0(VAR_1);
    while (VAR_1->cum_prob[0] > VAR_1->threshold) {
        VAR_3 = 0;
        for (VAR_2 = VAR_1->num_syms; VAR_2 >= 0; VAR_2--) {
            VAR_1->cum_prob[VAR_2] = VAR_3;
            VAR_1->weights[VAR_2] = (VAR_1->weights[VAR_2] + 1) >> 1;
            VAR_3 += VAR_1->weights[VAR_2];
        }
    }
}
