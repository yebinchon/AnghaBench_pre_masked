
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {double sample_rate; int channels; int format; TYPE_3__* dst; } ;
struct TYPE_5__ {double max_samples; double delay_min; double delay_depth; int lfo_length; int speed; int delay_buffer; void* lfo; int wave_shape; void* delay_last; } ;
typedef TYPE_1__ FlangerContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int *,int *,int,int,int ,int ) ;
 int FUNC_3 (int ,int ,void*,int,int ,int,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_3->dst;
    FlangerContext *VAR_5 = VAR_4->priv;

    VAR_5->max_samples = (VAR_5->delay_min + VAR_5->delay_depth) * VAR_3->sample_rate + 2.5;
    VAR_5->lfo_length = VAR_3->sample_rate / VAR_5->speed;
    VAR_5->delay_last = FUNC_1(VAR_3->channels, sizeof(*VAR_5->delay_last));
    VAR_5->lfo = FUNC_1(VAR_5->lfo_length, sizeof(*VAR_5->lfo));
    if (!VAR_5->lfo || !VAR_5->delay_last)
        return FUNC_0(VAR_1);

    FUNC_3(VAR_5->wave_shape, VAR_0, VAR_5->lfo, VAR_5->lfo_length,
                           FUNC_4(VAR_5->delay_min * VAR_3->sample_rate),
                           VAR_5->max_samples - 2., 3 * VAR_2);

    return FUNC_2(&VAR_5->delay_buffer, ((void*)0),
                                              VAR_3->channels, VAR_5->max_samples,
                                              VAR_3->format, 0);
}
