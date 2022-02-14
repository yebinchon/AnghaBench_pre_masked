
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int channel; double freq; int ignore; int type; int gain; int width; } ;
struct TYPE_10__ {TYPE_1__* priv; } ;
struct TYPE_9__ {int channels; double sample_rate; TYPE_3__* dst; } ;
struct TYPE_8__ {int nb_allocated; size_t nb_filters; TYPE_5__* filters; int args; } ;
typedef TYPE_1__ AudioNEqualizerContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 TYPE_5__* FUNC_2 (int,int) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int ) ;
 char* FUNC_6 (char*,char*,char**) ;
 int FUNC_7 (char*,char*,int*,double*,int *,int *,...) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_3->dst;
    AudioNEqualizerContext *VAR_5 = VAR_4->priv;
    char *VAR_6 = FUNC_5(VAR_5->args);
    char *VAR_7 = ((void*)0);
    int VAR_8 = 0;

    if (!VAR_6)
        return FUNC_0(VAR_1);

    VAR_5->nb_allocated = 32 * VAR_3->channels;
    VAR_5->filters = FUNC_2(VAR_3->channels, 32 * sizeof(*VAR_5->filters));
    if (!VAR_5->filters) {
        VAR_5->nb_allocated = 0;
        FUNC_4(VAR_6);
        return FUNC_0(VAR_1);
    }

    while (1) {
        char *VAR_9 = FUNC_6(VAR_5->nb_filters == 0 ? VAR_6 : ((void*)0), "|", &VAR_7);

        if (!VAR_9)
            break;

        VAR_5->filters[VAR_5->nb_filters].type = 0;
        if (FUNC_7(VAR_9, "c%d f=%lf w=%lf g=%lf t=%d", &VAR_5->filters[VAR_5->nb_filters].channel,
                                                     &VAR_5->filters[VAR_5->nb_filters].freq,
                                                     &VAR_5->filters[VAR_5->nb_filters].width,
                                                     &VAR_5->filters[VAR_5->nb_filters].gain,
                                                     &VAR_5->filters[VAR_5->nb_filters].type) != 5 &&
            FUNC_7(VAR_9, "c%d f=%lf w=%lf g=%lf", &VAR_5->filters[VAR_5->nb_filters].channel,
                                                &VAR_5->filters[VAR_5->nb_filters].freq,
                                                &VAR_5->filters[VAR_5->nb_filters].width,
                                                &VAR_5->filters[VAR_5->nb_filters].gain) != 4 ) {
            FUNC_4(VAR_6);
            return FUNC_0(VAR_0);
        }

        if (VAR_5->filters[VAR_5->nb_filters].freq < 0 ||
            VAR_5->filters[VAR_5->nb_filters].freq > VAR_3->sample_rate / 2.0)
            VAR_5->filters[VAR_5->nb_filters].ignore = 1;

        if (VAR_5->filters[VAR_5->nb_filters].channel < 0 ||
            VAR_5->filters[VAR_5->nb_filters].channel >= VAR_3->channels)
            VAR_5->filters[VAR_5->nb_filters].ignore = 1;

        VAR_5->filters[VAR_5->nb_filters].type = FUNC_3(VAR_5->filters[VAR_5->nb_filters].type, 0, VAR_2 - 1);
        VAR_8 = FUNC_1(VAR_5, VAR_3);
        if (VAR_8 < 0)
            break;
    }

    FUNC_4(VAR_6);

    return VAR_8;
}
