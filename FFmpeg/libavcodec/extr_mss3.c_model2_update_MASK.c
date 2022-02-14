
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zero_weight; int till_rescale; int total_weight; int upd_val; unsigned int zero_freq; unsigned int total_freq; } ;
typedef TYPE_1__ Model2 ;



__attribute__((used)) static void FUNC_0(Model2 *VAR_0, int VAR_1)
{
    unsigned VAR_2;

    if (!VAR_1)
        VAR_0->zero_weight++;
    VAR_0->till_rescale--;
    if (VAR_0->till_rescale)
        return;

    VAR_0->total_weight += VAR_0->upd_val;
    if (VAR_0->total_weight > 0x2000) {
        VAR_0->total_weight = (VAR_0->total_weight + 1) >> 1;
        VAR_0->zero_weight = (VAR_0->zero_weight + 1) >> 1;
        if (VAR_0->total_weight == VAR_0->zero_weight)
            VAR_0->total_weight = VAR_0->zero_weight + 1;
    }
    VAR_0->upd_val = VAR_0->upd_val * 5 >> 2;
    if (VAR_0->upd_val > 64)
        VAR_0->upd_val = 64;
    VAR_2 = 0x80000000u / VAR_0->total_weight;
    VAR_0->zero_freq = VAR_0->zero_weight * VAR_2 >> 18;
    VAR_0->total_freq = VAR_0->total_weight * VAR_2 >> 18;
    VAR_0->till_rescale = VAR_0->upd_val;
}
