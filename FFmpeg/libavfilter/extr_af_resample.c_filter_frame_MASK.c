
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {TYPE_3__** outputs; TYPE_1__* priv; } ;
struct TYPE_17__ {int format; int sample_rate; int time_base; TYPE_4__* dst; } ;
struct TYPE_16__ {int nb_samples; scalar_t__ pts; int format; int sample_rate; int * linesize; int extended_data; } ;
struct TYPE_15__ {scalar_t__ next_pts; scalar_t__ next_in_pts; int got_output; scalar_t__ resampling; scalar_t__ avr; } ;
typedef TYPE_1__ ResampleContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__**) ;
 int FUNC_4 (TYPE_4__*,int ,char*) ;
 void* FUNC_5 (int,int ,int ) ;
 void* FUNC_6 (scalar_t__,int ,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,int ,int ,int,int ,int ,int) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__,int) ;
 int FUNC_11 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_12 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_13(AVFilterLink *VAR_3, AVFrame *VAR_4)
{
    AVFilterContext *VAR_5 = VAR_3->dst;
    ResampleContext *VAR_6 = VAR_5->priv;
    AVFilterLink *VAR_7 = VAR_5->outputs[0];
    int VAR_8;

    if (VAR_6->avr) {
        AVFrame *VAR_9;
        int VAR_10, VAR_11;


        VAR_10 = FUNC_9(VAR_6->avr);
        VAR_11 = FUNC_10(VAR_6->avr, VAR_4->nb_samples);

        VAR_9 = FUNC_12(VAR_7, VAR_11);
        if (!VAR_9) {
            VAR_8 = FUNC_0(VAR_2);
            goto fail;
        }

        VAR_8 = FUNC_8(VAR_6->avr, VAR_9->extended_data, VAR_9->linesize[0],
                                 VAR_11, VAR_4->extended_data, VAR_4->linesize[0],
                                 VAR_4->nb_samples);
        if (VAR_8 <= 0) {
            FUNC_3(&VAR_9);
            if (VAR_8 < 0)
                goto fail;
        }

        FUNC_1(!FUNC_7(VAR_6->avr));

        if (VAR_6->resampling && VAR_6->next_pts == VAR_1) {
            if (VAR_4->pts == VAR_1) {
                FUNC_4(VAR_5, VAR_0, "First timestamp is missing, "
                       "assuming 0.\n");
                VAR_6->next_pts = 0;
            } else
                VAR_6->next_pts = FUNC_6(VAR_4->pts, VAR_3->time_base,
                                           VAR_7->time_base);
        }

        if (VAR_8 > 0) {
            VAR_9->nb_samples = VAR_8;

            VAR_8 = FUNC_2(VAR_9, VAR_4);
            if (VAR_8 < 0) {
                FUNC_3(&VAR_9);
                goto fail;
            }

            if (VAR_6->resampling) {
                VAR_9->sample_rate = VAR_7->sample_rate;





                if (VAR_4->pts != VAR_1 && VAR_4->pts != VAR_6->next_in_pts) {
                    VAR_9->pts = FUNC_6(VAR_4->pts, VAR_3->time_base,
                                                VAR_7->time_base) -
                                   FUNC_5(VAR_10, VAR_7->sample_rate,
                                              VAR_3->sample_rate);
                } else
                    VAR_9->pts = VAR_6->next_pts;

                VAR_6->next_pts = VAR_9->pts + VAR_9->nb_samples;
                VAR_6->next_in_pts = VAR_4->pts + VAR_4->nb_samples;
            } else
                VAR_9->pts = VAR_4->pts;

            VAR_8 = FUNC_11(VAR_7, VAR_9);
            VAR_6->got_output = 1;
        }

fail:
        FUNC_3(&VAR_4);
    } else {
        VAR_4->format = VAR_7->format;
        VAR_8 = FUNC_11(VAR_7, VAR_4);
        VAR_6->got_output = 1;
    }

    return VAR_8;
}
