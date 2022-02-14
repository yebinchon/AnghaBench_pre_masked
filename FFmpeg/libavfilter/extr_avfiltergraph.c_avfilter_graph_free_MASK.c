
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* internal; struct TYPE_6__* filters; struct TYPE_6__* resample_lavr_opts; struct TYPE_6__* aresample_swr_opts; struct TYPE_6__* scale_sws_opts; struct TYPE_6__* sink_links; scalar_t__ nb_filters; } ;
typedef TYPE_1__ AVFilterGraph ;


 int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(AVFilterGraph **VAR_0)
{
    if (!*VAR_0)
        return;

    while ((*VAR_0)->nb_filters)
        FUNC_1((*VAR_0)->filters[0]);

    FUNC_2(*VAR_0);

    FUNC_0(&(*VAR_0)->sink_links);

    FUNC_0(&(*VAR_0)->scale_sws_opts);
    FUNC_0(&(*VAR_0)->aresample_swr_opts);



    FUNC_0(&(*VAR_0)->filters);
    FUNC_0(&(*VAR_0)->internal);
    FUNC_0(VAR_0);
}
