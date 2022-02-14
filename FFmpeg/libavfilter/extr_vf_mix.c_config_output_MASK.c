
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_18__ {int time_base; int on_event; TYPE_2__* opaque; TYPE_3__* in; } ;
struct TYPE_17__ {TYPE_4__** inputs; TYPE_2__* priv; } ;
struct TYPE_16__ {int h; int w; int time_base; void* sample_aspect_ratio; void* frame_rate; int format; TYPE_5__* src; } ;
struct TYPE_15__ {int sync; void* after; void* before; int time_base; } ;
struct TYPE_14__ {int nb_inputs; int depth; int max; int* height; int duration; TYPE_6__ fs; scalar_t__ tmix; TYPE_10__* desc; int linesize; int nb_planes; } ;
struct TYPE_13__ {int depth; } ;
struct TYPE_12__ {int log2_chroma_h; TYPE_1__* comp; } ;
typedef TYPE_2__ MixContext ;
typedef TYPE_3__ FFFrameSyncIn ;
typedef void* AVRational ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_5__*,int ,char*,int,int,int,int ,int,int) ;
 int FUNC_4 (int ) ;
 TYPE_10__* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*,TYPE_5__*,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_6)
{
    AVFilterContext *VAR_7 = VAR_6->src;
    MixContext *VAR_8 = VAR_7->priv;
    AVRational VAR_9 = VAR_7->inputs[0]->frame_rate;
    AVRational VAR_10 = VAR_7->inputs[0]->sample_aspect_ratio;
    AVFilterLink *VAR_11 = VAR_7->inputs[0];
    int VAR_12 = VAR_7->inputs[0]->h;
    int VAR_13 = VAR_7->inputs[0]->w;
    FFFrameSyncIn *VAR_14;
    int VAR_15, VAR_16;

    if (!VAR_8->tmix) {
        for (VAR_15 = 1; VAR_15 < VAR_8->nb_inputs; VAR_15++) {
            if (VAR_7->inputs[VAR_15]->h != VAR_12 || VAR_7->inputs[VAR_15]->w != VAR_13) {
                FUNC_3(VAR_7, VAR_1, "Input %d size (%dx%d) does not match input %d size (%dx%d).\n", VAR_15, VAR_7->inputs[VAR_15]->w, VAR_7->inputs[VAR_15]->h, 0, VAR_13, VAR_12);
                return FUNC_0(VAR_2);
            }
        }
    }

    VAR_8->desc = FUNC_5(VAR_6->format);
    if (!VAR_8->desc)
        return VAR_0;
    VAR_8->nb_planes = FUNC_4(VAR_6->format);
    VAR_8->depth = VAR_8->desc->comp[0].depth;
    VAR_8->max = (1 << VAR_8->depth) - 1;

    if ((VAR_16 = FUNC_2(VAR_8->linesize, VAR_11->format, VAR_11->w)) < 0)
        return VAR_16;

    VAR_8->height[1] = VAR_8->height[2] = FUNC_1(VAR_11->h, VAR_8->desc->log2_chroma_h);
    VAR_8->height[0] = VAR_8->height[3] = VAR_11->h;

    if (VAR_8->tmix)
        return 0;

    VAR_6->w = VAR_13;
    VAR_6->h = VAR_12;
    VAR_6->frame_rate = VAR_9;
    VAR_6->sample_aspect_ratio = VAR_10;

    if ((VAR_16 = FUNC_7(&VAR_8->fs, VAR_7, VAR_8->nb_inputs)) < 0)
        return VAR_16;

    VAR_14 = VAR_8->fs.in;
    VAR_8->fs.opaque = VAR_8;
    VAR_8->fs.on_event = VAR_5;

    for (VAR_15 = 0; VAR_15 < VAR_8->nb_inputs; VAR_15++) {
        AVFilterLink *VAR_17 = VAR_7->inputs[VAR_15];

        VAR_14[VAR_15].time_base = VAR_17->time_base;
        VAR_14[VAR_15].sync = 1;
        VAR_14[VAR_15].before = VAR_4;
        VAR_14[VAR_15].after = (VAR_8->duration == 1 || (VAR_8->duration == 2 && VAR_15 == 0)) ? VAR_4 : VAR_3;
    }

    VAR_16 = FUNC_6(&VAR_8->fs);
    VAR_6->time_base = VAR_8->fs.time_base;

    return VAR_16;
}
