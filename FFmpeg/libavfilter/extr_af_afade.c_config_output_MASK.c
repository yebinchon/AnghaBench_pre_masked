
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int format; int sample_rate; TYPE_3__* src; } ;
struct TYPE_5__ {scalar_t__ start_time; void* start_sample; scalar_t__ duration; void* nb_samples; int fade_samples; } ;
typedef TYPE_1__ AudioFadeContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;
 int VAR_0 ;
 void* FUNC_0 (scalar_t__,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_1(AVFilterLink *VAR_9)
{
    AVFilterContext *VAR_10 = VAR_9->src;
    AudioFadeContext *VAR_11 = VAR_10->priv;

    switch (VAR_9->format) {
    case 135: VAR_11->fade_samples = VAR_1; break;
    case 134: VAR_11->fade_samples = VAR_2; break;
    case 133: VAR_11->fade_samples = VAR_3; break;
    case 132: VAR_11->fade_samples = VAR_4; break;
    case 131: VAR_11->fade_samples = VAR_5; break;
    case 130: VAR_11->fade_samples = VAR_6; break;
    case 129: VAR_11->fade_samples = VAR_7; break;
    case 128: VAR_11->fade_samples = VAR_8; break;
    }

    if (VAR_11->duration)
        VAR_11->nb_samples = FUNC_0(VAR_11->duration, VAR_9->sample_rate, VAR_0);
    if (VAR_11->start_time)
        VAR_11->start_sample = FUNC_0(VAR_11->start_time, VAR_9->sample_rate, VAR_0);

    return 0;
}
