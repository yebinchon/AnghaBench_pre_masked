
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_13__ ;
typedef struct TYPE_21__ TYPE_12__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct TYPE_31__ {int sync; void* after; void* before; int time_base; } ;
struct TYPE_30__ {int* planewidth; int* planeheight; int nb_planes; scalar_t__* depth; } ;
struct TYPE_22__ {int on_event; TYPE_7__* opaque; TYPE_9__* in; } ;
struct TYPE_29__ {int nb_inputs; int* planewidth; int* planeheight; int nb_planes; int** map; TYPE_13__ fs; TYPE_6__* outdesc; } ;
struct TYPE_28__ {TYPE_5__* comp; int log2_chroma_h; int log2_chroma_w; } ;
struct TYPE_27__ {int depth; } ;
struct TYPE_26__ {scalar_t__ num; scalar_t__ den; } ;
struct TYPE_25__ {int depth; } ;
struct TYPE_24__ {int name; } ;
struct TYPE_23__ {int name; } ;
struct TYPE_21__ {TYPE_2__* output_pads; TYPE_1__* input_pads; TYPE_11__** inputs; TYPE_7__* priv; } ;
struct TYPE_20__ {int w; int h; int time_base; int format; TYPE_4__ sample_aspect_ratio; int frame_rate; TYPE_12__* src; } ;
struct TYPE_19__ {TYPE_3__* comp; int log2_chroma_h; int log2_chroma_w; } ;
typedef TYPE_7__ MergePlanesContext ;
typedef TYPE_8__ InputParam ;
typedef TYPE_9__ FFFrameSyncIn ;
typedef TYPE_10__ AVPixFmtDescriptor ;
typedef TYPE_11__ AVFilterLink ;
typedef TYPE_12__ AVFilterContext ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_2 (TYPE_12__*,int ,char*,int const,int const,...) ;
 int FUNC_3 (int ) ;
 TYPE_10__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_13__*) ;
 int FUNC_6 (TYPE_13__*,TYPE_12__*,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_4)
{
    AVFilterContext *VAR_5 = VAR_4->src;
    MergePlanesContext *VAR_6 = VAR_5->priv;
    InputParam VAR_7[4];
    FFFrameSyncIn *VAR_8;
    int VAR_9, VAR_10;

    if ((VAR_10 = FUNC_6(&VAR_6->fs, VAR_5, VAR_6->nb_inputs)) < 0)
        return VAR_10;

    VAR_8 = VAR_6->fs.in;
    VAR_6->fs.opaque = VAR_6;
    VAR_6->fs.on_event = VAR_3;

    VAR_4->w = VAR_5->inputs[0]->w;
    VAR_4->h = VAR_5->inputs[0]->h;
    VAR_4->time_base = VAR_5->inputs[0]->time_base;
    VAR_4->frame_rate = VAR_5->inputs[0]->frame_rate;
    VAR_4->sample_aspect_ratio = VAR_5->inputs[0]->sample_aspect_ratio;

    VAR_6->planewidth[1] =
    VAR_6->planewidth[2] = FUNC_1(((VAR_6->outdesc->comp[1].depth > 8) + 1) * VAR_4->w, VAR_6->outdesc->log2_chroma_w);
    VAR_6->planewidth[0] =
    VAR_6->planewidth[3] = ((VAR_6->outdesc->comp[0].depth > 8) + 1) * VAR_4->w;
    VAR_6->planeheight[1] =
    VAR_6->planeheight[2] = FUNC_1(VAR_4->h, VAR_6->outdesc->log2_chroma_h);
    VAR_6->planeheight[0] =
    VAR_6->planeheight[3] = VAR_4->h;

    for (VAR_9 = 0; VAR_9 < VAR_6->nb_inputs; VAR_9++) {
        InputParam *VAR_11 = &VAR_7[VAR_9];
        AVFilterLink *VAR_12 = VAR_5->inputs[VAR_9];
        const AVPixFmtDescriptor *VAR_13 = FUNC_4(VAR_12->format);
        int VAR_14;

        if (VAR_4->sample_aspect_ratio.num != VAR_12->sample_aspect_ratio.num ||
            VAR_4->sample_aspect_ratio.den != VAR_12->sample_aspect_ratio.den) {
            FUNC_2(VAR_5, VAR_0, "input #%d link %s SAR %d:%d "
                                      "does not match output link %s SAR %d:%d\n",
                                      VAR_9, VAR_5->input_pads[VAR_9].name,
                                      VAR_12->sample_aspect_ratio.num,
                                      VAR_12->sample_aspect_ratio.den,
                                      VAR_5->output_pads[0].name,
                                      VAR_4->sample_aspect_ratio.num,
                                      VAR_4->sample_aspect_ratio.den);
            return FUNC_0(VAR_1);
        }

        VAR_11->planewidth[1] =
        VAR_11->planewidth[2] = FUNC_1(((VAR_13->comp[1].depth > 8) + 1) * VAR_12->w, VAR_13->log2_chroma_w);
        VAR_11->planewidth[0] =
        VAR_11->planewidth[3] = ((VAR_13->comp[0].depth > 8) + 1) * VAR_12->w;
        VAR_11->planeheight[1] =
        VAR_11->planeheight[2] = FUNC_1(VAR_12->h, VAR_13->log2_chroma_h);
        VAR_11->planeheight[0] =
        VAR_11->planeheight[3] = VAR_12->h;
        VAR_11->nb_planes = FUNC_3(VAR_12->format);

        for (VAR_14 = 0; VAR_14 < VAR_11->nb_planes; VAR_14++)
            VAR_11->depth[VAR_14] = VAR_13->comp[VAR_14].depth;

        VAR_8[VAR_9].time_base = VAR_12->time_base;
        VAR_8[VAR_9].sync = 1;
        VAR_8[VAR_9].before = VAR_2;
        VAR_8[VAR_9].after = VAR_2;
    }

    for (VAR_9 = 0; VAR_9 < VAR_6->nb_planes; VAR_9++) {
        const int VAR_15 = VAR_6->map[VAR_9][1];
        const int VAR_16 = VAR_6->map[VAR_9][0];
        InputParam *VAR_17 = &VAR_7[VAR_15];

        if (VAR_16 + 1 > VAR_17->nb_planes) {
            FUNC_2(VAR_5, VAR_0, "input %d does not have %d plane\n",
                                      VAR_15, VAR_16);
            goto fail;
        }
        if (VAR_6->outdesc->comp[VAR_9].depth != VAR_17->depth[VAR_16]) {
            FUNC_2(VAR_5, VAR_0, "output plane %d depth %d does not "
                                      "match input %d plane %d depth %d\n",
                                      VAR_9, VAR_6->outdesc->comp[VAR_9].depth,
                                      VAR_15, VAR_16, VAR_17->depth[VAR_16]);
            goto fail;
        }
        if (VAR_6->planewidth[VAR_9] != VAR_17->planewidth[VAR_16]) {
            FUNC_2(VAR_5, VAR_0, "output plane %d width %d does not "
                                      "match input %d plane %d width %d\n",
                                      VAR_9, VAR_6->planewidth[VAR_9],
                                      VAR_15, VAR_16, VAR_17->planewidth[VAR_16]);
            goto fail;
        }
        if (VAR_6->planeheight[VAR_9] != VAR_17->planeheight[VAR_16]) {
            FUNC_2(VAR_5, VAR_0, "output plane %d height %d does not "
                                      "match input %d plane %d height %d\n",
                                      VAR_9, VAR_6->planeheight[VAR_9],
                                      VAR_15, VAR_16, VAR_17->planeheight[VAR_16]);
            goto fail;
        }
    }

    return FUNC_5(&VAR_6->fs);
fail:
    return FUNC_0(VAR_1);
}
