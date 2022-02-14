
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {int time_base; int on_event; TYPE_2__* opaque; TYPE_3__* in; } ;
struct TYPE_15__ {TYPE_1__* input_pads; TYPE_4__** inputs; TYPE_2__* priv; } ;
struct TYPE_14__ {scalar_t__ w; scalar_t__ h; int time_base; int frame_rate; int sample_aspect_ratio; TYPE_5__* src; } ;
struct TYPE_13__ {int sync; void* after; void* before; int time_base; } ;
struct TYPE_12__ {TYPE_6__ fs; } ;
struct TYPE_11__ {int name; } ;
typedef TYPE_2__ RemapContext ;
typedef TYPE_3__ FFFrameSyncIn ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_1 (TYPE_5__*,int ,char*,int ,scalar_t__,scalar_t__,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*,TYPE_5__*,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_6)
{
    AVFilterContext *VAR_7 = VAR_6->src;
    RemapContext *VAR_8 = VAR_7->priv;
    AVFilterLink *VAR_9 = VAR_7->inputs[0];
    AVFilterLink *VAR_10 = VAR_7->inputs[1];
    AVFilterLink *VAR_11 = VAR_7->inputs[2];
    FFFrameSyncIn *VAR_12;
    int VAR_13;

    if (VAR_10->w != VAR_11->w || VAR_10->h != VAR_11->h) {
        FUNC_1(VAR_7, VAR_0, "Second input link %s parameters "
               "(size %dx%d) do not match the corresponding "
               "third input link %s parameters (%dx%d)\n",
               VAR_7->input_pads[1].name, VAR_10->w, VAR_10->h,
               VAR_7->input_pads[2].name, VAR_11->w, VAR_11->h);
        return FUNC_0(VAR_1);
    }

    VAR_6->w = VAR_10->w;
    VAR_6->h = VAR_10->h;
    VAR_6->sample_aspect_ratio = VAR_9->sample_aspect_ratio;
    VAR_6->frame_rate = VAR_9->frame_rate;

    VAR_13 = FUNC_3(&VAR_8->fs, VAR_7, 3);
    if (VAR_13 < 0)
        return VAR_13;

    VAR_12 = VAR_8->fs.in;
    VAR_12[0].time_base = VAR_9->time_base;
    VAR_12[1].time_base = VAR_10->time_base;
    VAR_12[2].time_base = VAR_11->time_base;
    VAR_12[0].sync = 2;
    VAR_12[0].before = VAR_4;
    VAR_12[0].after = VAR_4;
    VAR_12[1].sync = 1;
    VAR_12[1].before = VAR_3;
    VAR_12[1].after = VAR_2;
    VAR_12[2].sync = 1;
    VAR_12[2].before = VAR_3;
    VAR_12[2].after = VAR_2;
    VAR_8->fs.opaque = VAR_8;
    VAR_8->fs.on_event = VAR_5;

    VAR_13 = FUNC_2(&VAR_8->fs);
    VAR_6->time_base = VAR_8->fs.time_base;

    return VAR_13;
}
