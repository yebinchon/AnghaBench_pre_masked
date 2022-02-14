
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_24__ {int value; } ;
struct TYPE_23__ {TYPE_3__** outputs; TYPE_1__* priv; } ;
struct TYPE_22__ {scalar_t__ w; int h; TYPE_4__* dst; } ;
struct TYPE_21__ {scalar_t__ width; int height; int* data; int* linesize; int * metadata; } ;
struct TYPE_20__ {int slide; int nb_values; int* values_size; float** values; double min; double max; int bg; scalar_t__ x; int mode; int* prev_y; TYPE_2__* out; int * first; int * fg_expr; int * key; } ;
typedef TYPE_1__ DrawGraphContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;
typedef TYPE_5__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int,int) ;
 float VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 float FUNC_3 (float,double,double) ;
 TYPE_5__* FUNC_4 (int *,int ,int *,int ) ;
 int FUNC_5 (int ,double*,int *) ;
 float* FUNC_6 (float*,int*,int) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_9 (TYPE_2__**) ;
 int FUNC_10 (int ,char*,float*) ;
 int FUNC_11 (TYPE_1__*,TYPE_2__*,TYPE_3__*) ;
 int FUNC_12 (int,int,int,TYPE_2__*) ;
 int FUNC_13 (TYPE_3__*,int ) ;
 TYPE_2__* FUNC_14 (TYPE_3__*,scalar_t__,int) ;
 int FUNC_15 (int,int,int) ;

__attribute__((used)) static int FUNC_16(AVFilterLink *VAR_6, AVFrame *VAR_7)
{
    AVFilterContext *VAR_8 = VAR_6->dst;
    DrawGraphContext *VAR_9 = VAR_8->priv;
    AVFilterLink *VAR_10 = VAR_8->outputs[0];
    AVDictionary *VAR_11;
    AVDictionaryEntry *VAR_12;
    AVFrame *VAR_13 = VAR_9->out;
    int VAR_14;

    if (VAR_9->slide == 4 && VAR_9->nb_values >= VAR_9->values_size[0] / sizeof(float)) {
        float *VAR_15;

        VAR_15 = FUNC_6(VAR_9->values[0], &VAR_9->values_size[0], VAR_9->values_size[0] * 2);
        if (!VAR_15)
            return FUNC_0(VAR_0);
        VAR_9->values[0] = VAR_15;

        VAR_15 = FUNC_6(VAR_9->values[1], &VAR_9->values_size[1], VAR_9->values_size[1] * 2);
        if (!VAR_15)
            return FUNC_0(VAR_0);
        VAR_9->values[1] = VAR_15;

        VAR_15 = FUNC_6(VAR_9->values[2], &VAR_9->values_size[2], VAR_9->values_size[2] * 2);
        if (!VAR_15)
            return FUNC_0(VAR_0);
        VAR_9->values[2] = VAR_15;

        VAR_15 = FUNC_6(VAR_9->values[3], &VAR_9->values_size[3], VAR_9->values_size[3] * 2);
        if (!VAR_15)
            return FUNC_0(VAR_0);
        VAR_9->values[3] = VAR_15;
    }

    if (VAR_9->slide != 4 || VAR_9->nb_values == 0) {
        if (!VAR_9->out || VAR_9->out->width != VAR_10->w ||
                       VAR_9->out->height != VAR_10->h) {
            FUNC_9(&VAR_9->out);
            VAR_9->out = FUNC_14(VAR_10, VAR_10->w, VAR_10->h);
            VAR_13 = VAR_9->out;
            if (!VAR_9->out) {
                FUNC_9(&VAR_7);
                return FUNC_0(VAR_0);
            }

            FUNC_11(VAR_9, VAR_13, VAR_10);
        }
        FUNC_8(VAR_13, VAR_7);
    }

    VAR_11 = VAR_7->metadata;

    for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
        double VAR_16[VAR_5];
        int VAR_17, VAR_18, VAR_19, VAR_20;
        uint32_t VAR_21, VAR_22;
        float VAR_23;

        if (VAR_9->slide == 4)
            VAR_9->values[VAR_14][VAR_9->nb_values] = VAR_1;

        VAR_12 = FUNC_4(VAR_11, VAR_9->key[VAR_14], ((void*)0), 0);
        if (!VAR_12 || !VAR_12->value)
            continue;

        if (FUNC_10(VAR_12->value, "%f", &VAR_23) != 1)
            continue;

        VAR_23 = FUNC_3(VAR_23, VAR_9->min, VAR_9->max);

        if (VAR_9->slide == 4) {
            VAR_9->values[VAR_14][VAR_9->nb_values] = VAR_23;
            continue;
        }

        VAR_16[VAR_3] = VAR_9->min;
        VAR_16[VAR_2] = VAR_9->max;
        VAR_16[VAR_4] = VAR_23;

        VAR_21 = FUNC_5(VAR_9->fg_expr[VAR_14], VAR_16, ((void*)0));
        VAR_22 = FUNC_1(VAR_9->bg);

        if (VAR_14 == 0 && (VAR_9->x >= VAR_10->w || VAR_9->slide == 3)) {
            if (VAR_9->slide == 0 || VAR_9->slide == 1)
                VAR_9->x = 0;

            if (VAR_9->slide == 2) {
                VAR_9->x = VAR_10->w - 1;
                for (VAR_17 = 0; VAR_17 < VAR_10->h; VAR_17++) {
                    FUNC_15(VAR_13->data[0] + VAR_17 * VAR_13->linesize[0] ,
                            VAR_13->data[0] + VAR_17 * VAR_13->linesize[0] + 4,
                            (VAR_10->w - 1) * 4);
                }
            } else if (VAR_9->slide == 3) {
                VAR_9->x = 0;
                for (VAR_17 = 0; VAR_17 < VAR_10->h; VAR_17++) {
                    FUNC_15(VAR_13->data[0] + VAR_17 * VAR_13->linesize[0] + 4,
                            VAR_13->data[0] + VAR_17 * VAR_13->linesize[0],
                            (VAR_10->w - 1) * 4);
                }
            } else if (VAR_9->slide == 0) {
                FUNC_11(VAR_9, VAR_13, VAR_10);
            }
        }

        VAR_19 = VAR_9->x;
        VAR_18 = (VAR_10->h - 1) * (1 - ((VAR_23 - VAR_9->min) / (VAR_9->max - VAR_9->min)));

        switch (VAR_9->mode) {
        case 0:
            if (VAR_14 == 0 && (VAR_9->slide > 0))
                for (VAR_17 = 0; VAR_17 < VAR_10->h; VAR_17++)
                    FUNC_12(VAR_22, VAR_19, VAR_17, VAR_13);

            VAR_20 = FUNC_1(VAR_13->data[0] + VAR_18 * VAR_13->linesize[0] + VAR_19 * 4);
            for (VAR_17 = VAR_18; VAR_17 < VAR_10->h; VAR_17++) {
                if (VAR_20 != VAR_22 &&
                    (FUNC_1(VAR_13->data[0] + VAR_17 * VAR_13->linesize[0] + VAR_19 * 4) != VAR_20) ||
                    FUNC_1(VAR_13->data[0] + FUNC_2(VAR_17+1, VAR_10->h - 1) * VAR_13->linesize[0] + VAR_19 * 4) != VAR_20) {
                    FUNC_12(VAR_21, VAR_19, VAR_17, VAR_13);
                    break;
                }
                FUNC_12(VAR_21, VAR_19, VAR_17, VAR_13);
            }
            break;
        case 1:
            if (VAR_14 == 0 && (VAR_9->slide > 0))
                for (VAR_17 = 0; VAR_17 < VAR_10->h; VAR_17++)
                    FUNC_12(VAR_22, VAR_19, VAR_17, VAR_13);
            FUNC_12(VAR_21, VAR_19, VAR_18, VAR_13);
            break;
        case 2:
            if (VAR_9->first[VAR_14]) {
                VAR_9->first[VAR_14] = 0;
                VAR_9->prev_y[VAR_14] = VAR_18;
            }

            if (VAR_14 == 0 && (VAR_9->slide > 0)) {
                for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++)
                    FUNC_12(VAR_22, VAR_19, VAR_17, VAR_13);
                for (VAR_17 = VAR_10->h - 1; VAR_17 > VAR_18; VAR_17--)
                    FUNC_12(VAR_22, VAR_19, VAR_17, VAR_13);
            }
            if (VAR_18 <= VAR_9->prev_y[VAR_14]) {
                for (VAR_17 = VAR_18; VAR_17 <= VAR_9->prev_y[VAR_14]; VAR_17++)
                    FUNC_12(VAR_21, VAR_19, VAR_17, VAR_13);
            } else {
                for (VAR_17 = VAR_9->prev_y[VAR_14]; VAR_17 <= VAR_18; VAR_17++)
                    FUNC_12(VAR_21, VAR_19, VAR_17, VAR_13);
            }
            VAR_9->prev_y[VAR_14] = VAR_18;
            break;
        }
    }

    VAR_9->nb_values++;
    VAR_9->x++;

    FUNC_9(&VAR_7);

    if (VAR_9->slide == 4)
        return 0;

    return FUNC_13(VAR_10, FUNC_7(VAR_9->out));
}
