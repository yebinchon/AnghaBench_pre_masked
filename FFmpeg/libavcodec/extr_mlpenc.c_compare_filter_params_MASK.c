
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__** coeff; TYPE_1__* filter_params; } ;
struct TYPE_5__ {int order; scalar_t__ shift; } ;
typedef TYPE_1__ FilterParams ;
typedef TYPE_2__ ChannelParams ;



__attribute__((used)) static int FUNC_0(const ChannelParams *VAR_0, const ChannelParams *VAR_1, int VAR_2)
{
    const FilterParams *VAR_3 = &VAR_0->filter_params[VAR_2];
    const FilterParams *VAR_4 = &VAR_1->filter_params[VAR_2];
    int VAR_5;

    if (VAR_3->order != VAR_4->order)
        return 1;

    if (!VAR_3->order)
        return 0;

    if (VAR_3->shift != VAR_4->shift)
        return 1;

    for (VAR_5 = 0; VAR_5 < VAR_4->order; VAR_5++)
        if (VAR_0->coeff[VAR_2][VAR_5] != VAR_1->coeff[VAR_2][VAR_5])
            return 1;

    return 0;
}
