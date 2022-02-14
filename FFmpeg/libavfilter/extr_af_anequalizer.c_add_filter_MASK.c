
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int sample_rate; } ;
struct TYPE_5__ {size_t nb_filters; int nb_allocated; int * filters; } ;
typedef int EqualizatorFilter ;
typedef TYPE_1__ AudioNEqualizerContext ;
typedef TYPE_2__ AVFilterLink ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *,int) ;

__attribute__((used)) static int FUNC_5(AudioNEqualizerContext *VAR_1, AVFilterLink *VAR_2)
{
    FUNC_3(&VAR_1->filters[VAR_1->nb_filters], VAR_2->sample_rate);
    if (VAR_1->nb_filters >= VAR_1->nb_allocated) {
        EqualizatorFilter *VAR_3;

        VAR_3 = FUNC_1(VAR_1->nb_allocated, 2 * sizeof(*VAR_1->filters));
        if (!VAR_3)
            return FUNC_0(VAR_0);
        FUNC_4(VAR_3, VAR_1->filters, sizeof(*VAR_1->filters) * VAR_1->nb_allocated);
        FUNC_2(VAR_1->filters);
        VAR_1->filters = VAR_3;
        VAR_1->nb_allocated *= 2;
    }
    VAR_1->nb_filters++;

    return 0;
}
