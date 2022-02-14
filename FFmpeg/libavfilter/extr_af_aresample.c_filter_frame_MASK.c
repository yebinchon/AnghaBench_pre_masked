
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_19__ {int const ratio; scalar_t__ next_pts; int more_data; int swr; } ;
struct TYPE_16__ {scalar_t__ num; int den; } ;
struct TYPE_18__ {scalar_t__ sample_rate; TYPE_2__ time_base; int channel_layout; int channels; int format; TYPE_1__* dst; } ;
struct TYPE_17__ {int nb_samples; scalar_t__ sample_rate; scalar_t__ pts; scalar_t__ extended_data; int channel_layout; int channels; int format; } ;
struct TYPE_15__ {TYPE_4__** outputs; TYPE_5__* priv; } ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AResampleContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_3__**) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__,int ) ;
 int FUNC_7 (TYPE_4__* const,TYPE_3__*) ;
 TYPE_3__* FUNC_8 (TYPE_4__* const,int) ;
 int FUNC_9 (int ,scalar_t__,int,void*,int const) ;
 scalar_t__ FUNC_10 (int ,scalar_t__) ;
 scalar_t__ FUNC_11 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_12(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AResampleContext *VAR_4 = VAR_2->dst->priv;
    const int VAR_5 = VAR_3->nb_samples;
    int64_t VAR_6;
    int VAR_7 = VAR_5 * VAR_4->ratio + 32;
    AVFilterLink *const VAR_8 = VAR_2->dst->outputs[0];
    AVFrame *VAR_9;
    int VAR_10;

    VAR_6 = FUNC_10(VAR_4->swr, VAR_8->sample_rate);
    if (VAR_6 > 0)
        VAR_7 += FUNC_2(VAR_6, FUNC_1(4096, VAR_7));

    VAR_9 = FUNC_8(VAR_8, VAR_7);

    if(!VAR_9) {
        FUNC_5(&VAR_3);
        return FUNC_0(VAR_1);
    }

    FUNC_4(VAR_9, VAR_3);
    VAR_9->format = VAR_8->format;
    VAR_9->channels = VAR_8->channels;
    VAR_9->channel_layout = VAR_8->channel_layout;
    VAR_9->sample_rate = VAR_8->sample_rate;

    if(VAR_3->pts != VAR_0) {
        int64_t VAR_11 = FUNC_6(VAR_3->pts, VAR_2->time_base.num * (int64_t)VAR_8->sample_rate * VAR_2->sample_rate, VAR_2->time_base.den);
        int64_t VAR_12= FUNC_11(VAR_4->swr, VAR_11);
        VAR_4->next_pts =
        VAR_9->pts = FUNC_3(VAR_12, VAR_2->sample_rate);
    } else {
        VAR_9->pts = VAR_0;
    }
    VAR_7 = FUNC_9(VAR_4->swr, VAR_9->extended_data, VAR_7,
                                 (void *)VAR_3->extended_data, VAR_5);
    if (VAR_7 <= 0) {
        FUNC_5(&VAR_9);
        FUNC_5(&VAR_3);
        return 0;
    }

    VAR_4->more_data = VAR_9->nb_samples == VAR_7;

    VAR_9->nb_samples = VAR_7;

    VAR_10 = FUNC_7(VAR_8, VAR_9);
    FUNC_5(&VAR_3);
    return VAR_10;
}
