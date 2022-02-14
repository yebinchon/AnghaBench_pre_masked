
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
struct TYPE_14__ {int nb_inputs; int depth; int max; int* width; int* height; TYPE_6__ fs; TYPE_10__* desc; int linesize; int median_frames; int nb_planes; } ;
typedef TYPE_2__ XMedianContext ;
struct TYPE_17__ {TYPE_4__** inputs; TYPE_2__* priv; } ;
struct TYPE_16__ {int h; int w; int time_base; void* sample_aspect_ratio; void* frame_rate; int format; TYPE_5__* src; } ;
struct TYPE_15__ {int sync; void* after; void* before; int time_base; } ;
struct TYPE_13__ {int depth; } ;
struct TYPE_12__ {int log2_chroma_h; int log2_chroma_w; TYPE_1__* comp; } ;
typedef TYPE_3__ FFFrameSyncIn ;
typedef void* AVRational ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_5__*,int ,char*,int,int,int,int ,int,int) ;
 int FUNC_4 (int ) ;
 TYPE_10__* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*,TYPE_5__*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_7)
{
    AVFilterContext *VAR_8 = VAR_7->src;
    XMedianContext *VAR_9 = VAR_8->priv;
    AVRational VAR_10 = VAR_8->inputs[0]->frame_rate;
    AVRational VAR_11 = VAR_8->inputs[0]->sample_aspect_ratio;
    AVFilterLink *VAR_12 = VAR_8->inputs[0];
    int VAR_13 = VAR_8->inputs[0]->h;
    int VAR_14 = VAR_8->inputs[0]->w;
    FFFrameSyncIn *VAR_15;
    int VAR_16, VAR_17;

    for (int VAR_18 = 1; VAR_18 < VAR_9->nb_inputs; VAR_18++) {
        if (VAR_8->inputs[VAR_18]->h != VAR_13 || VAR_8->inputs[VAR_18]->w != VAR_14) {
            FUNC_3(VAR_8, VAR_1, "Input %d size (%dx%d) does not match input %d size (%dx%d).\n", VAR_18, VAR_8->inputs[VAR_18]->w, VAR_8->inputs[VAR_18]->h, 0, VAR_14, VAR_13);
            return FUNC_0(VAR_2);
        }
    }

    VAR_9->desc = FUNC_5(VAR_7->format);
    if (!VAR_9->desc)
        return VAR_0;
    VAR_9->nb_planes = FUNC_4(VAR_7->format);
    VAR_9->depth = VAR_9->desc->comp[0].depth;
    VAR_9->max = (1 << VAR_9->depth) - 1;

    if (VAR_9->depth <= 8)
        VAR_9->median_frames = VAR_5;
    else
        VAR_9->median_frames = VAR_4;

    if ((VAR_17 = FUNC_2(VAR_9->linesize, VAR_12->format, VAR_12->w)) < 0)
        return VAR_17;

    VAR_9->width[1] = VAR_9->width[2] = FUNC_1(VAR_12->w, VAR_9->desc->log2_chroma_w);
    VAR_9->width[0] = VAR_9->width[3] = VAR_12->w;
    VAR_9->height[1] = VAR_9->height[2] = FUNC_1(VAR_12->h, VAR_9->desc->log2_chroma_h);
    VAR_9->height[0] = VAR_9->height[3] = VAR_12->h;

    VAR_7->w = VAR_14;
    VAR_7->h = VAR_13;
    VAR_7->frame_rate = VAR_10;
    VAR_7->sample_aspect_ratio = VAR_11;

    if ((VAR_17 = FUNC_7(&VAR_9->fs, VAR_8, VAR_9->nb_inputs)) < 0)
        return VAR_17;

    VAR_15 = VAR_9->fs.in;
    VAR_9->fs.opaque = VAR_9;
    VAR_9->fs.on_event = VAR_6;

    for (VAR_16 = 0; VAR_16 < VAR_9->nb_inputs; VAR_16++) {
        AVFilterLink *VAR_19 = VAR_8->inputs[VAR_16];

        VAR_15[VAR_16].time_base = VAR_19->time_base;
        VAR_15[VAR_16].sync = 1;
        VAR_15[VAR_16].before = VAR_3;
        VAR_15[VAR_16].after = VAR_3;
    }

    VAR_17 = FUNC_6(&VAR_9->fs);
    VAR_7->time_base = VAR_9->fs.time_base;

    return VAR_17;
}
