
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
struct TYPE_14__ {int nb_inputs; char* layout; TYPE_6__ fs; scalar_t__ shortest; int nb_planes; TYPE_10__* desc; TYPE_1__* items; scalar_t__ is_horizontal; scalar_t__ is_vertical; } ;
struct TYPE_13__ {int* height; int* y; int x; int linesize; } ;
struct TYPE_12__ {int log2_chroma_h; } ;
typedef TYPE_1__ StackItem ;
typedef TYPE_2__ StackContext ;
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
 void* VAR_4 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_5__*,int ,char*,int,int,int ,int) ;
 int FUNC_5 (int ) ;
 TYPE_10__* FUNC_6 (int ) ;
 char* FUNC_7 (char*,char*,char**) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (TYPE_6__*,TYPE_5__*,int) ;
 int VAR_5 ;
 int FUNC_10 (char*,char*,int*) ;

__attribute__((used)) static int FUNC_11(AVFilterLink *VAR_6)
{
    AVFilterContext *VAR_7 = VAR_6->src;
    StackContext *VAR_8 = VAR_7->priv;
    AVRational VAR_9 = VAR_7->inputs[0]->frame_rate;
    AVRational VAR_10 = VAR_7->inputs[0]->sample_aspect_ratio;
    int VAR_11 = VAR_7->inputs[0]->h;
    int VAR_12 = VAR_7->inputs[0]->w;
    FFFrameSyncIn *VAR_13;
    int VAR_14, VAR_15;

    VAR_8->desc = FUNC_6(VAR_6->format);
    if (!VAR_8->desc)
        return VAR_0;

    if (VAR_8->is_vertical) {
        for (VAR_14 = 0; VAR_14 < VAR_8->nb_inputs; VAR_14++) {
            AVFilterLink *VAR_16 = VAR_7->inputs[VAR_14];
            StackItem *VAR_17 = &VAR_8->items[VAR_14];

            if (VAR_7->inputs[VAR_14]->w != VAR_12) {
                FUNC_4(VAR_7, VAR_1, "Input %d width %d does not match input %d width %d.\n", VAR_14, VAR_7->inputs[VAR_14]->w, 0, VAR_12);
                return FUNC_0(VAR_2);
            }

            if ((VAR_15 = FUNC_3(VAR_17->linesize, VAR_16->format, VAR_16->w)) < 0) {
                return VAR_15;
            }

            VAR_17->height[1] = VAR_17->height[2] = FUNC_1(VAR_16->h, VAR_8->desc->log2_chroma_h);
            VAR_17->height[0] = VAR_17->height[3] = VAR_16->h;

            if (VAR_14) {
                VAR_17->y[1] = VAR_17->y[2] = FUNC_1(VAR_11, VAR_8->desc->log2_chroma_h);
                VAR_17->y[0] = VAR_17->y[3] = VAR_11;

                VAR_11 += VAR_7->inputs[VAR_14]->h;
            }
        }
    } else if (VAR_8->is_horizontal) {
        for (VAR_14 = 0; VAR_14 < VAR_8->nb_inputs; VAR_14++) {
            AVFilterLink *VAR_18 = VAR_7->inputs[VAR_14];
            StackItem *VAR_19 = &VAR_8->items[VAR_14];

            if (VAR_7->inputs[VAR_14]->h != VAR_11) {
                FUNC_4(VAR_7, VAR_1, "Input %d height %d does not match input %d height %d.\n", VAR_14, VAR_7->inputs[VAR_14]->h, 0, VAR_11);
                return FUNC_0(VAR_2);
            }

            if ((VAR_15 = FUNC_3(VAR_19->linesize, VAR_18->format, VAR_18->w)) < 0) {
                return VAR_15;
            }

            VAR_19->height[1] = VAR_19->height[2] = FUNC_1(VAR_18->h, VAR_8->desc->log2_chroma_h);
            VAR_19->height[0] = VAR_19->height[3] = VAR_18->h;

            if (VAR_14) {
                if ((VAR_15 = FUNC_3(VAR_19->x, VAR_18->format, VAR_12)) < 0) {
                    return VAR_15;
                }

                VAR_12 += VAR_7->inputs[VAR_14]->w;
            }
        }
    } else {
        char *VAR_20, *VAR_21 = VAR_8->layout, *VAR_22 = ((void*)0);
        char *VAR_23, *VAR_24, *VAR_25 = ((void*)0);
        char *VAR_26, *VAR_27, *VAR_28 = ((void*)0);
        int VAR_29, VAR_30, VAR_31;

        for (VAR_14 = 0; VAR_14 < VAR_8->nb_inputs; VAR_14++) {
            AVFilterLink *VAR_32 = VAR_7->inputs[VAR_14];
            StackItem *VAR_33 = &VAR_8->items[VAR_14];

            if (!(VAR_20 = FUNC_7(VAR_21, "|", &VAR_22)))
                return FUNC_0(VAR_2);

            VAR_21 = ((void*)0);

            if ((VAR_15 = FUNC_3(VAR_33->linesize, VAR_32->format, VAR_32->w)) < 0) {
                return VAR_15;
            }

            VAR_33->height[1] = VAR_33->height[2] = FUNC_1(VAR_32->h, VAR_8->desc->log2_chroma_h);
            VAR_33->height[0] = VAR_33->height[3] = VAR_32->h;

            VAR_24 = VAR_20;
            VAR_29 = VAR_30 = 0;

            for (int VAR_34 = 0; VAR_34 < 2; VAR_34++) {
                if (!(VAR_23 = FUNC_7(VAR_24, "_", &VAR_25)))
                    return FUNC_0(VAR_2);

                VAR_24 = ((void*)0);
                VAR_27 = VAR_23;
                while ((VAR_26 = FUNC_7(VAR_27, "+", &VAR_28))) {
                    VAR_27 = ((void*)0);
                    if (FUNC_10(VAR_26, "w%d", &VAR_31) == 1) {
                        if (VAR_31 == VAR_14 || VAR_31 < 0 || VAR_31 >= VAR_8->nb_inputs)
                            return FUNC_0(VAR_2);

                        if (!VAR_34)
                            VAR_29 += VAR_7->inputs[VAR_31]->w;
                        else
                            VAR_30 += VAR_7->inputs[VAR_31]->w;
                    } else if (FUNC_10(VAR_26, "h%d", &VAR_31) == 1) {
                        if (VAR_31 == VAR_14 || VAR_31 < 0 || VAR_31 >= VAR_8->nb_inputs)
                            return FUNC_0(VAR_2);

                        if (!VAR_34)
                            VAR_29 += VAR_7->inputs[VAR_31]->h;
                        else
                            VAR_30 += VAR_7->inputs[VAR_31]->h;
                    } else if (FUNC_10(VAR_26, "%d", &VAR_31) == 1) {
                        if (VAR_31 < 0)
                            return FUNC_0(VAR_2);

                        if (!VAR_34)
                            VAR_29 += VAR_31;
                        else
                            VAR_30 += VAR_31;
                    } else {
                        return FUNC_0(VAR_2);
                    }
                }
            }

            if ((VAR_15 = FUNC_3(VAR_33->x, VAR_32->format, VAR_29)) < 0) {
                return VAR_15;
            }

            VAR_33->y[1] = VAR_33->y[2] = FUNC_1(VAR_30, VAR_8->desc->log2_chroma_h);
            VAR_33->y[0] = VAR_33->y[3] = VAR_30;

            VAR_12 = FUNC_2(VAR_12, VAR_32->w + VAR_29);
            VAR_11 = FUNC_2(VAR_11, VAR_32->h + VAR_30);
        }
    }

    VAR_8->nb_planes = FUNC_5(VAR_6->format);

    VAR_6->w = VAR_12;
    VAR_6->h = VAR_11;
    VAR_6->frame_rate = VAR_9;
    VAR_6->sample_aspect_ratio = VAR_10;

    if ((VAR_15 = FUNC_9(&VAR_8->fs, VAR_7, VAR_8->nb_inputs)) < 0)
        return VAR_15;

    VAR_13 = VAR_8->fs.in;
    VAR_8->fs.opaque = VAR_8;
    VAR_8->fs.on_event = VAR_5;

    for (VAR_14 = 0; VAR_14 < VAR_8->nb_inputs; VAR_14++) {
        AVFilterLink *VAR_35 = VAR_7->inputs[VAR_14];

        VAR_13[VAR_14].time_base = VAR_35->time_base;
        VAR_13[VAR_14].sync = 1;
        VAR_13[VAR_14].before = VAR_4;
        VAR_13[VAR_14].after = VAR_8->shortest ? VAR_4 : VAR_3;
    }

    VAR_15 = FUNC_8(&VAR_8->fs);
    VAR_6->time_base = VAR_8->fs.time_base;

    return VAR_15;
}
