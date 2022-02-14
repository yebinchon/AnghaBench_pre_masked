
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nb_outputs; } ;
struct TYPE_5__ {int nb_filters; TYPE_2__** filters; } ;
typedef TYPE_1__ AVFilterGraph ;
typedef TYPE_2__ AVFilterContext ;
typedef int AVClass ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_1(AVFilterGraph *VAR_0, AVClass *VAR_1)
{
    AVFilterContext *VAR_2;
    int VAR_3, VAR_4;

    for (VAR_3 = 0; VAR_3 < VAR_0->nb_filters; VAR_3++) {
        VAR_2 = VAR_0->filters[VAR_3];

        if (!VAR_2->nb_outputs) {
            if ((VAR_4 = FUNC_0(VAR_2)))
                return VAR_4;
        }
    }

    return 0;
}
