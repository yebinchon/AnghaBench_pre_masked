
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int time_base; int on_event; TYPE_1__* opaque; TYPE_2__* in; } ;
struct TYPE_13__ {TYPE_3__** inputs; TYPE_1__* priv; } ;
struct TYPE_12__ {scalar_t__ format; int time_base; int frame_rate; int sample_aspect_ratio; int h; int w; TYPE_4__* src; } ;
struct TYPE_11__ {int sync; void* after; void* before; int time_base; } ;
struct TYPE_10__ {TYPE_5__ fs; } ;
typedef TYPE_1__ MidEqualizerContext ;
typedef TYPE_2__ FFFrameSyncIn ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (TYPE_4__*,int ,char*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,TYPE_4__*,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_5)
{
    AVFilterContext *VAR_6 = VAR_5->src;
    MidEqualizerContext *VAR_7 = VAR_6->priv;
    AVFilterLink *VAR_8 = VAR_6->inputs[0];
    AVFilterLink *VAR_9 = VAR_6->inputs[1];
    FFFrameSyncIn *VAR_10;
    int VAR_11;

    if (VAR_8->format != VAR_9->format) {
        FUNC_1(VAR_6, VAR_0, "inputs must be of same pixel format\n");
        return FUNC_0(VAR_1);
    }

    VAR_5->w = VAR_8->w;
    VAR_5->h = VAR_8->h;
    VAR_5->sample_aspect_ratio = VAR_8->sample_aspect_ratio;
    VAR_5->frame_rate = VAR_8->frame_rate;

    if ((VAR_11 = FUNC_3(&VAR_7->fs, VAR_6, 2)) < 0)
        return VAR_11;

    VAR_10 = VAR_7->fs.in;
    VAR_10[0].time_base = VAR_8->time_base;
    VAR_10[1].time_base = VAR_9->time_base;
    VAR_10[0].sync = 1;
    VAR_10[0].before = VAR_3;
    VAR_10[0].after = VAR_2;
    VAR_10[1].sync = 1;
    VAR_10[1].before = VAR_3;
    VAR_10[1].after = VAR_2;
    VAR_7->fs.opaque = VAR_7;
    VAR_7->fs.on_event = VAR_4;

    VAR_11 = FUNC_2(&VAR_7->fs);
    VAR_5->time_base = VAR_7->fs.time_base;

    return VAR_11;
}
