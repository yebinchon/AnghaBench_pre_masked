
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* weights; int till_rescale; int tot_weight; int upd_val; int* secondary; int* freqs; int sec_size; int max_upd_val; } ;
typedef TYPE_1__ Model256 ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(Model256 *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4 = 0;
    unsigned VAR_5;
    int VAR_6, VAR_7 = 1;

    VAR_1->weights[VAR_2]++;
    VAR_1->till_rescale--;
    if (VAR_1->till_rescale)
        return;
    VAR_1->tot_weight += VAR_1->upd_val;

    if (VAR_1->tot_weight > 0x8000) {
        VAR_1->tot_weight = 0;
        for (VAR_3 = 0; VAR_3 < 256; VAR_3++) {
            VAR_1->weights[VAR_3] = (VAR_1->weights[VAR_3] + 1) >> 1;
            VAR_1->tot_weight += VAR_1->weights[VAR_3];
        }
    }
    VAR_5 = 0x80000000u / VAR_1->tot_weight;
    VAR_1->secondary[0] = 0;
    for (VAR_3 = 0; VAR_3 < 256; VAR_3++) {
        VAR_1->freqs[VAR_3] = VAR_4 * VAR_5 >> 16;
        VAR_4 += VAR_1->weights[VAR_3];
        VAR_6 = VAR_1->freqs[VAR_3] >> VAR_0;
        while (VAR_7 <= VAR_6)
            VAR_1->secondary[VAR_7++] = VAR_3 - 1;
    }
    while (VAR_7 < VAR_1->sec_size)
        VAR_1->secondary[VAR_7++] = 255;

    VAR_1->upd_val = VAR_1->upd_val * 5 >> 2;
    if (VAR_1->upd_val > VAR_1->max_upd_val)
        VAR_1->upd_val = VAR_1->max_upd_val;
    VAR_1->till_rescale = VAR_1->upd_val;
}
