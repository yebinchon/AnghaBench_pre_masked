
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ready; } ;
struct TYPE_5__ {unsigned int nb_filters; TYPE_2__** filters; } ;
typedef TYPE_1__ AVFilterGraph ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3(AVFilterGraph *VAR_1)
{
    AVFilterContext *VAR_2;
    unsigned VAR_3;

    FUNC_1(VAR_1->nb_filters);
    VAR_2 = VAR_1->filters[0];
    for (VAR_3 = 1; VAR_3 < VAR_1->nb_filters; VAR_3++)
        if (VAR_1->filters[VAR_3]->ready > VAR_2->ready)
            VAR_2 = VAR_1->filters[VAR_3];
    if (!VAR_2->ready)
        return FUNC_0(VAR_0);
    return FUNC_2(VAR_2);
}
