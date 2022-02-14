
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {TYPE_1__* priv; TYPE_3__** inputs; } ;
struct TYPE_13__ {int channels; int sample_rate; TYPE_4__* src; } ;
struct TYPE_12__ {int nb_samples; scalar_t__* data; } ;
struct TYPE_11__ {scalar_t__ frame_type; int buf_size; int prev_nb_samples; double* buf; int limiter_buf_size; int buf_index; } ;
typedef TYPE_1__ LoudNormContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_4)
{
    int VAR_5;
    AVFilterContext *VAR_6 = VAR_4->src;
    AVFilterLink *VAR_7 = VAR_6->inputs[0];
    LoudNormContext *VAR_8 = VAR_6->priv;

    VAR_5 = FUNC_2(VAR_7);
    if (VAR_5 == VAR_0 && VAR_8->frame_type == VAR_3) {
        double *VAR_9;
        double *VAR_10;
        int VAR_11, VAR_12, VAR_13, VAR_14;
        AVFrame *VAR_15;

        VAR_11 = (VAR_8->buf_size / VAR_7->channels) - VAR_8->prev_nb_samples;
        VAR_11 -= (FUNC_4(VAR_7->sample_rate, 100) - VAR_8->prev_nb_samples);

        VAR_15 = FUNC_1(VAR_4, VAR_11);
        if (!VAR_15)
            return FUNC_0(VAR_1);
        VAR_15->nb_samples = VAR_11;

        VAR_10 = VAR_8->buf;
        VAR_9 = (double *)VAR_15->data[0];

        VAR_14 = ((VAR_8->limiter_buf_size / VAR_7->channels) - VAR_8->prev_nb_samples) * VAR_7->channels;
        VAR_14 -= (FUNC_4(VAR_7->sample_rate, 100) - VAR_8->prev_nb_samples) * VAR_7->channels;
        VAR_8->buf_index = VAR_8->buf_index - VAR_14 < 0 ? VAR_8->buf_index - VAR_14 + VAR_8->buf_size : VAR_8->buf_index - VAR_14;

        for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
            for (VAR_13 = 0; VAR_13 < VAR_7->channels; VAR_13++) {
                VAR_9[VAR_13] = VAR_10[VAR_8->buf_index + VAR_13];
            }
            VAR_9 += VAR_7->channels;
            VAR_8->buf_index += VAR_7->channels;
            if (VAR_8->buf_index >= VAR_8->buf_size)
                VAR_8->buf_index -= VAR_8->buf_size;
        }

        VAR_8->frame_type = VAR_2;
        VAR_5 = FUNC_3(VAR_7, VAR_15);
    }
    return VAR_5;
}
