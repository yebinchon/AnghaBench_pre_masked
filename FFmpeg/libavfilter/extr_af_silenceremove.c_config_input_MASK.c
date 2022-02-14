
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {int sample_rate; int channels; TYPE_3__* dst; } ;
struct TYPE_6__ {int window_size; int window_ratio; int start_duration; int start_silence; int stop_duration; int stop_silence; int mode; scalar_t__ start_periods; scalar_t__ stop_found_periods; scalar_t__ stop_holdoff_end; scalar_t__ stop_holdoff_offset; void* stop_silence_hold; void* stop_holdoff; scalar_t__ start_found_periods; scalar_t__ start_holdoff_end; scalar_t__ start_holdoff_offset; void* start_silence_hold; void* start_holdoff; int stop_silence_opt; int stop_duration_opt; int start_silence_opt; int start_duration_opt; void* window; int next_pts; } ;
typedef TYPE_1__ SilenceRemoveContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_2 (int,int) ;
 void* FUNC_3 (int ,int,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_5)
{
    AVFilterContext *VAR_6 = VAR_5->dst;
    SilenceRemoveContext *VAR_7 = VAR_6->priv;

    VAR_7->next_pts = VAR_0;
    VAR_7->window_size = FUNC_1((VAR_5->sample_rate * VAR_7->window_ratio), 1) * VAR_5->channels;
    VAR_7->window = FUNC_2(VAR_7->window_size, sizeof(*VAR_7->window));
    if (!VAR_7->window)
        return FUNC_0(VAR_2);

    FUNC_4(VAR_7);

    VAR_7->start_duration = FUNC_3(VAR_7->start_duration_opt, VAR_5->sample_rate,
                                   VAR_1);
    VAR_7->start_silence = FUNC_3(VAR_7->start_silence_opt, VAR_5->sample_rate,
                                   VAR_1);
    VAR_7->stop_duration = FUNC_3(VAR_7->stop_duration_opt, VAR_5->sample_rate,
                                   VAR_1);
    VAR_7->stop_silence = FUNC_3(VAR_7->stop_silence_opt, VAR_5->sample_rate,
                                   VAR_1);

    VAR_7->start_holdoff = FUNC_2(FUNC_1(VAR_7->start_duration, 1),
                                       sizeof(*VAR_7->start_holdoff) *
                                       VAR_5->channels);
    if (!VAR_7->start_holdoff)
        return FUNC_0(VAR_2);

    VAR_7->start_silence_hold = FUNC_2(FUNC_1(VAR_7->start_silence, 1),
                                            sizeof(*VAR_7->start_silence_hold) *
                                            VAR_5->channels);
    if (!VAR_7->start_silence_hold)
        return FUNC_0(VAR_2);

    VAR_7->start_holdoff_offset = 0;
    VAR_7->start_holdoff_end = 0;
    VAR_7->start_found_periods = 0;

    VAR_7->stop_holdoff = FUNC_2(FUNC_1(VAR_7->stop_duration, 1),
                                      sizeof(*VAR_7->stop_holdoff) *
                                      VAR_5->channels);
    if (!VAR_7->stop_holdoff)
        return FUNC_0(VAR_2);

    VAR_7->stop_silence_hold = FUNC_2(FUNC_1(VAR_7->stop_silence, 1),
                                           sizeof(*VAR_7->stop_silence_hold) *
                                           VAR_5->channels);
    if (!VAR_7->stop_silence_hold)
        return FUNC_0(VAR_2);

    VAR_7->stop_holdoff_offset = 0;
    VAR_7->stop_holdoff_end = 0;
    VAR_7->stop_found_periods = 0;

    if (VAR_7->start_periods)
        VAR_7->mode = VAR_4;
    else
        VAR_7->mode = VAR_3;

    return 0;
}
