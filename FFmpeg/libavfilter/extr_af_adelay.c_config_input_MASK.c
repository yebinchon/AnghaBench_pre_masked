
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* priv; } ;
struct TYPE_10__ {int channels; int format; float sample_rate; TYPE_4__* dst; } ;
struct TYPE_9__ {int nb_delays; char* delays; float padding; int delay_channel; int max_delay; int block_align; TYPE_1__* chandelay; scalar_t__ all; } ;
struct TYPE_8__ {float delay; int samples; } ;
typedef TYPE_1__ ChanDelay ;
typedef TYPE_2__ AudioDelayContext ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,float) ;
 float FUNC_2 (float,float) ;
 TYPE_1__* FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_4__*,int ,char*) ;
 int FUNC_6 (float,int ) ;
 int FUNC_7 (char*,char*,float*,...) ;
 char* FUNC_8 (char*,char*,char**) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_9(AVFilterLink *VAR_8)
{
    AVFilterContext *VAR_9 = VAR_8->dst;
    AudioDelayContext *VAR_10 = VAR_9->priv;
    char *VAR_11, *VAR_12, *VAR_13 = ((void*)0);
    int VAR_14;

    VAR_10->chandelay = FUNC_3(VAR_8->channels, sizeof(*VAR_10->chandelay));
    if (!VAR_10->chandelay)
        return FUNC_0(VAR_2);
    VAR_10->nb_delays = VAR_8->channels;
    VAR_10->block_align = FUNC_4(VAR_8->format);

    VAR_11 = VAR_10->delays;
    for (VAR_14 = 0; VAR_14 < VAR_10->nb_delays; VAR_14++) {
        ChanDelay *VAR_15 = &VAR_10->chandelay[VAR_14];
        float VAR_16, VAR_17;
        char VAR_18 = 0;
        int VAR_19;

        if (!(VAR_12 = FUNC_8(VAR_11, "|", &VAR_13)))
            break;

        VAR_11 = ((void*)0);

        VAR_19 = FUNC_7(VAR_12, "%d%c", &VAR_15->delay, &VAR_18);
        if (VAR_19 != 2 || VAR_18 != 'S') {
            VAR_17 = VAR_18 == 's' ? 1.0 : 1000.0;
            FUNC_7(VAR_12, "%f", &VAR_16);
            VAR_15->delay = VAR_16 * VAR_8->sample_rate / VAR_17;
        }

        if (VAR_15->delay < 0) {
            FUNC_5(VAR_9, VAR_0, "Delay must be non negative number.\n");
            return FUNC_0(VAR_1);
        }
    }

    if (VAR_10->all && VAR_14) {
        for (int VAR_20 = VAR_14; VAR_20 < VAR_10->nb_delays; VAR_20++)
            VAR_10->chandelay[VAR_20].delay = VAR_10->chandelay[VAR_14-1].delay;
    }

    VAR_10->padding = VAR_10->chandelay[0].delay;
    for (VAR_14 = 1; VAR_14 < VAR_10->nb_delays; VAR_14++) {
        ChanDelay *VAR_21 = &VAR_10->chandelay[VAR_14];

        VAR_10->padding = FUNC_2(VAR_10->padding, VAR_21->delay);
    }

    if (VAR_10->padding) {
        for (VAR_14 = 0; VAR_14 < VAR_10->nb_delays; VAR_14++) {
            ChanDelay *VAR_22 = &VAR_10->chandelay[VAR_14];

            VAR_22->delay -= VAR_10->padding;
        }
    }

    for (VAR_14 = 0; VAR_14 < VAR_10->nb_delays; VAR_14++) {
        ChanDelay *VAR_23 = &VAR_10->chandelay[VAR_14];

        if (!VAR_23->delay)
            continue;

        VAR_23->samples = FUNC_6(VAR_23->delay, VAR_10->block_align);
        if (!VAR_23->samples)
            return FUNC_0(VAR_2);

        VAR_10->max_delay = FUNC_1(VAR_10->max_delay, VAR_23->delay);
    }

    switch (VAR_8->format) {
    case 128 : VAR_10->delay_channel = VAR_7 ; break;
    case 130: VAR_10->delay_channel = VAR_5; break;
    case 129: VAR_10->delay_channel = VAR_6; break;
    case 131: VAR_10->delay_channel = VAR_4; break;
    case 132: VAR_10->delay_channel = VAR_3; break;
    }

    return 0;
}
