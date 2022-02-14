
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int nb_refs; int * used; } ;
struct TYPE_6__ {TYPE_3__ long_term_rps; TYPE_2__* short_term_rps; } ;
struct TYPE_9__ {TYPE_1__ sh; } ;
struct TYPE_7__ {int num_negative_pics; int num_delta_pocs; int * used; } ;
typedef TYPE_2__ ShortTermRPS ;
typedef TYPE_3__ LongTermRPS ;
typedef TYPE_4__ HEVCContext ;



int FUNC_0(const HEVCContext *VAR_0)
{
    int VAR_1 = 0;
    int VAR_2;
    const ShortTermRPS *VAR_3 = VAR_0->sh.short_term_rps;
    const LongTermRPS *VAR_4 = &VAR_0->sh.long_term_rps;

    if (VAR_3) {
        for (VAR_2 = 0; VAR_2 < VAR_3->num_negative_pics; VAR_2++)
            VAR_1 += !!VAR_3->used[VAR_2];
        for (; VAR_2 < VAR_3->num_delta_pocs; VAR_2++)
            VAR_1 += !!VAR_3->used[VAR_2];
    }

    if (VAR_4) {
        for (VAR_2 = 0; VAR_2 < VAR_4->nb_refs; VAR_2++)
            VAR_1 += !!VAR_4->used[VAR_2];
    }
    return VAR_1;
}
