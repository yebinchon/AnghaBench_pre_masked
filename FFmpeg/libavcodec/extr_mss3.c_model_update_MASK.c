
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* weights; int till_rescale; int tot_weight; int upd_val; int num_syms; int* freqs; int max_upd_val; } ;
typedef TYPE_1__ Model ;



__attribute__((used)) static void FUNC_0(Model *VAR_0, int VAR_1)
{
    int VAR_2, VAR_3 = 0;
    unsigned VAR_4;

    VAR_0->weights[VAR_1]++;
    VAR_0->till_rescale--;
    if (VAR_0->till_rescale)
        return;
    VAR_0->tot_weight += VAR_0->upd_val;

    if (VAR_0->tot_weight > 0x8000) {
        VAR_0->tot_weight = 0;
        for (VAR_2 = 0; VAR_2 < VAR_0->num_syms; VAR_2++) {
            VAR_0->weights[VAR_2] = (VAR_0->weights[VAR_2] + 1) >> 1;
            VAR_0->tot_weight += VAR_0->weights[VAR_2];
        }
    }
    VAR_4 = 0x80000000u / VAR_0->tot_weight;
    for (VAR_2 = 0; VAR_2 < VAR_0->num_syms; VAR_2++) {
        VAR_0->freqs[VAR_2] = VAR_3 * VAR_4 >> 16;
        VAR_3 += VAR_0->weights[VAR_2];
    }

    VAR_0->upd_val = VAR_0->upd_val * 5 >> 2;
    if (VAR_0->upd_val > VAR_0->max_upd_val)
        VAR_0->upd_val = VAR_0->max_upd_val;
    VAR_0->till_rescale = VAR_0->upd_val;
}
