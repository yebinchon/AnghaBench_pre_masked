
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {double freq; double width; double gain; } ;
struct TYPE_10__ {TYPE_2__** inputs; TYPE_1__* priv; } ;
struct TYPE_9__ {double sample_rate; } ;
struct TYPE_8__ {int nb_filters; int video; scalar_t__ draw_curves; TYPE_5__* filters; } ;
typedef TYPE_1__ AudioNEqualizerContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_5__*,double) ;
 int FUNC_3 (char const*,char*,int*,double*,double*,double*) ;
 int FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(AVFilterContext *VAR_2, const char *VAR_3, const char *VAR_4,
                           char *VAR_5, int VAR_6, int VAR_7)
{
    AudioNEqualizerContext *VAR_8 = VAR_2->priv;
    AVFilterLink *VAR_9 = VAR_2->inputs[0];
    int VAR_10 = FUNC_0(VAR_1);

    if (!FUNC_4(VAR_3, "change")) {
        double VAR_11, VAR_12, VAR_13;
        int VAR_14;

        if (FUNC_3(VAR_4, "%d|f=%lf|w=%lf|g=%lf", &VAR_14, &VAR_11, &VAR_12, &VAR_13) != 4)
            return FUNC_0(VAR_0);

        if (VAR_14 < 0 || VAR_14 >= VAR_8->nb_filters)
            return FUNC_0(VAR_0);

        if (VAR_11 < 0 || VAR_11 > VAR_9->sample_rate / 2.0)
            return FUNC_0(VAR_0);

        VAR_8->filters[VAR_14].freq = VAR_11;
        VAR_8->filters[VAR_14].width = VAR_12;
        VAR_8->filters[VAR_14].gain = VAR_13;
        FUNC_2(&VAR_8->filters[VAR_14], VAR_9->sample_rate);
        if (VAR_8->draw_curves)
            FUNC_1(VAR_2, VAR_9, VAR_8->video);

        VAR_10 = 0;
    }

    return VAR_10;
}
