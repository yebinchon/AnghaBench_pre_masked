
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_21__ {int nb_samples; scalar_t__* extended_data; int pts; } ;
struct TYPE_20__ {int format; } ;
struct TYPE_19__ {int nb_inputs; TYPE_5__** inputs; int * outputs; TYPE_2__* priv; } ;
struct TYPE_18__ {scalar_t__* extended_data; int pts; } ;
struct TYPE_17__ {int channels; int planes; TYPE_8__** frames; TYPE_1__* fdsp; int samples_align; } ;
struct TYPE_16__ {int (* vector_dmul ) (double*,double const*,double const*,int) ;int (* vector_fmul ) (float*,float const*,float const*,int) ;} ;
typedef TYPE_2__ AudioMultiplyContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,TYPE_4__*) ;
 int FUNC_4 (TYPE_8__**) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,TYPE_3__*) ;
 TYPE_3__* FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 (TYPE_5__*,int*,int *) ;
 scalar_t__ FUNC_11 (TYPE_5__*,int) ;
 int FUNC_12 (TYPE_5__*,int,int,TYPE_8__**) ;
 scalar_t__ FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (TYPE_5__*) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ,int,int ) ;
 int FUNC_17 (float*,float const*,float const*,int) ;
 int FUNC_18 (double*,double const*,double const*,int) ;

__attribute__((used)) static int FUNC_19(AVFilterContext *VAR_2)
{
    AudioMultiplyContext *VAR_3 = VAR_2->priv;
    int VAR_4, VAR_5, VAR_6;
    int VAR_7;
    int64_t VAR_8;

    FUNC_3(VAR_2->outputs[0], VAR_2);

    VAR_7 = FUNC_2(FUNC_13(VAR_2->inputs[0]),
                       FUNC_13(VAR_2->inputs[1]));
    for (VAR_4 = 0; VAR_4 < VAR_2->nb_inputs && VAR_7 > 0; VAR_4++) {
        if (VAR_3->frames[VAR_4])
            continue;

        if (FUNC_11(VAR_2->inputs[VAR_4], VAR_7) > 0) {
            VAR_5 = FUNC_12(VAR_2->inputs[VAR_4], VAR_7, VAR_7, &VAR_3->frames[VAR_4]);
            if (VAR_5 < 0)
                return VAR_5;
        }
    }

    if (VAR_3->frames[0] && VAR_3->frames[1]) {
        AVFrame *VAR_9;
        int VAR_10;

        if (FUNC_6(VAR_2->inputs[0]->format))
            VAR_10 = FUNC_1(VAR_3->frames[0]->nb_samples, VAR_3->samples_align);
        else
            VAR_10 = FUNC_1(VAR_3->frames[0]->nb_samples * VAR_3->channels, VAR_3->samples_align);

        VAR_9 = FUNC_9(VAR_2->outputs[0], VAR_3->frames[0]->nb_samples);
        if (!VAR_9)
            return FUNC_0(VAR_1);

        VAR_9->pts = VAR_3->frames[0]->pts;

        if (FUNC_5(VAR_2->inputs[0]->format) == VAR_0) {
            for (VAR_4 = 0; VAR_4 < VAR_3->planes; VAR_4++) {
                VAR_3->fdsp->vector_fmul((float *)VAR_9->extended_data[VAR_4],
                                     (const float *)VAR_3->frames[0]->extended_data[VAR_4],
                                     (const float *)VAR_3->frames[1]->extended_data[VAR_4],
                                     VAR_10);
            }
        } else {
            for (VAR_4 = 0; VAR_4 < VAR_3->planes; VAR_4++) {
                VAR_3->fdsp->vector_dmul((double *)VAR_9->extended_data[VAR_4],
                                     (const double *)VAR_3->frames[0]->extended_data[VAR_4],
                                     (const double *)VAR_3->frames[1]->extended_data[VAR_4],
                                     VAR_10);
            }
        }
        FUNC_7();

        FUNC_4(&VAR_3->frames[0]);
        FUNC_4(&VAR_3->frames[1]);

        VAR_5 = FUNC_8(VAR_2->outputs[0], VAR_9);
        if (VAR_5 < 0)
            return VAR_5;
    }

    if (!VAR_7) {
        for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
            if (FUNC_10(VAR_2->inputs[VAR_4], &VAR_6, &VAR_8)) {
                FUNC_16(VAR_2->outputs[0], VAR_6, VAR_8);
                return 0;
            }
        }
    }

    if (FUNC_15(VAR_2->outputs[0])) {
        for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
            if (FUNC_13(VAR_2->inputs[VAR_4]) > 0)
                continue;
            FUNC_14(VAR_2->inputs[VAR_4]);
            return 0;
        }
    }
    return 0;
}
