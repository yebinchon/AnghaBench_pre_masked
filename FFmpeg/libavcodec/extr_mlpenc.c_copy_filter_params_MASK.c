
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ** coeff; TYPE_1__* filter_params; } ;
struct TYPE_5__ {int order; int coeff_bits; int coeff_shift; int shift; } ;
typedef TYPE_1__ FilterParams ;
typedef TYPE_2__ ChannelParams ;



__attribute__((used)) static void FUNC_0(ChannelParams *VAR_0, ChannelParams *VAR_1, int VAR_2)
{
    FilterParams *VAR_3 = &VAR_0->filter_params[VAR_2];
    FilterParams *VAR_4 = &VAR_1->filter_params[VAR_2];
    unsigned int VAR_5;

    VAR_3->order = VAR_4->order;

    if (VAR_3->order) {
        VAR_3->shift = VAR_4->shift;

        VAR_3->coeff_shift = VAR_4->coeff_shift;
        VAR_3->coeff_bits = VAR_4->coeff_bits;
    }

    for (VAR_5 = 0; VAR_5 < VAR_3->order; VAR_5++)
        VAR_0->coeff[VAR_2][VAR_5] = VAR_1->coeff[VAR_2][VAR_5];
}
