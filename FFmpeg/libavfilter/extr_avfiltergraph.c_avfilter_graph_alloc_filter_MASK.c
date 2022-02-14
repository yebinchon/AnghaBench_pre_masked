
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__* graph; } ;
struct TYPE_13__ {int nb_filters; TYPE_3__** filters; scalar_t__ execute; TYPE_1__* internal; scalar_t__ thread_type; } ;
struct TYPE_12__ {scalar_t__ thread_execute; } ;
typedef TYPE_2__ AVFilterGraph ;
typedef TYPE_3__ AVFilterContext ;
typedef int AVFilter ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,char*,int ) ;
 TYPE_3__** FUNC_2 (TYPE_3__**,int) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int const*,char const*) ;
 int FUNC_5 (TYPE_2__*) ;

AVFilterContext *FUNC_6(AVFilterGraph *VAR_1,
                                             const AVFilter *VAR_2,
                                             const char *VAR_3)
{
    AVFilterContext **VAR_4, *VAR_5;

    if (VAR_1->thread_type && !VAR_1->internal->thread_execute) {
        if (VAR_1->execute) {
            VAR_1->internal->thread_execute = VAR_1->execute;
        } else {
            int VAR_6 = FUNC_5(VAR_1);
            if (VAR_6 < 0) {
                FUNC_1(VAR_1, VAR_0, "Error initializing threading: %s.\n", FUNC_0(VAR_6));
                return ((void*)0);
            }
        }
    }

    VAR_5 = FUNC_4(VAR_2, VAR_3);
    if (!VAR_5)
        return ((void*)0);

    VAR_4 = FUNC_2(VAR_1->filters, sizeof(*VAR_4) * (VAR_1->nb_filters + 1));
    if (!VAR_4) {
        FUNC_3(VAR_5);
        return ((void*)0);
    }

    VAR_1->filters = VAR_4;
    VAR_1->filters[VAR_1->nb_filters++] = VAR_5;

    VAR_5->graph = VAR_1;

    return VAR_5;
}
