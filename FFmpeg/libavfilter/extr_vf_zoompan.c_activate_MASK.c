
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_21__ {int* var_values; int w; int h; int x; int y; int prev_zoom; int prev_nb_frames; double nb_frames; scalar_t__ finished; int current_frame; TYPE_7__* in; int duration_expr_str; TYPE_2__* desc; } ;
typedef TYPE_3__ ZPContext ;
struct TYPE_24__ {int width; int height; } ;
struct TYPE_23__ {TYPE_4__** outputs; TYPE_4__** inputs; TYPE_3__* priv; } ;
struct TYPE_19__ {double den; scalar_t__ num; } ;
struct TYPE_22__ {int frame_count_out; int frame_count_in; TYPE_1__ sample_aspect_ratio; } ;
struct TYPE_20__ {int log2_chroma_w; int log2_chroma_h; } ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (TYPE_4__*,TYPE_4__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 int FUNC_1 (double*,int ,int ,int*,int *,int *,int *,int *,int *,int ,TYPE_5__*) ;
 int FUNC_2 (TYPE_7__**) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int*,int *) ;
 int FUNC_4 (TYPE_4__*,TYPE_7__**) ;
 int FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,int,int ) ;
 int FUNC_8 (TYPE_5__*,TYPE_7__*,int*,int ,double*,double*,double*) ;
 int VAR_23 ;

__attribute__((used)) static int FUNC_9(AVFilterContext *VAR_24)
{
    ZPContext *VAR_25 = VAR_24->priv;
    AVFilterLink *VAR_26 = VAR_24->inputs[0];
    AVFilterLink *VAR_27 = VAR_24->outputs[0];
    int VAR_28, VAR_29 = 0;
    int64_t VAR_30;

    FUNC_0(VAR_27, VAR_26);

    if (VAR_25->in && FUNC_6(VAR_27)) {
        double VAR_31 = -1, VAR_32 = -1, VAR_33 = -1;

        VAR_29 = FUNC_8(VAR_24, VAR_25->in, VAR_25->var_values, VAR_25->current_frame,
                                  &VAR_31, &VAR_32, &VAR_33);
        if (VAR_29 < 0)
            return VAR_29;
    }

    if (!VAR_25->in && (VAR_29 = FUNC_4(VAR_26, &VAR_25->in)) > 0) {
        double VAR_34 = -1, VAR_35 = -1, VAR_36 = -1, VAR_37;

        VAR_25->finished = 0;
        VAR_25->var_values[VAR_7] = VAR_25->var_values[VAR_8] = VAR_25->in->width;
        VAR_25->var_values[VAR_6] = VAR_25->var_values[VAR_4] = VAR_25->in->height;
        VAR_25->var_values[VAR_12] = VAR_25->var_values[VAR_13] = VAR_25->w;
        VAR_25->var_values[VAR_11] = VAR_25->var_values[VAR_9] = VAR_25->h;
        VAR_25->var_values[VAR_5] = VAR_26->frame_count_out - 1;
        VAR_25->var_values[VAR_10] = VAR_27->frame_count_in;
        VAR_25->var_values[VAR_15] = VAR_25->x;
        VAR_25->var_values[VAR_16] = VAR_25->y;
        VAR_25->var_values[VAR_20] = 0;
        VAR_25->var_values[VAR_21] = 0;
        VAR_25->var_values[VAR_17] = VAR_25->prev_zoom;
        VAR_25->var_values[VAR_22] = 1;
        VAR_25->var_values[VAR_14] = VAR_25->prev_nb_frames;
        VAR_25->var_values[VAR_0] = (double) VAR_25->in->width / VAR_25->in->height;
        VAR_25->var_values[VAR_18] = VAR_26->sample_aspect_ratio.num ?
            (double) VAR_26->sample_aspect_ratio.num / VAR_26->sample_aspect_ratio.den : 1;
        VAR_25->var_values[VAR_1] = VAR_25->var_values[VAR_0] * VAR_25->var_values[VAR_18];
        VAR_25->var_values[VAR_3] = 1 << VAR_25->desc->log2_chroma_w;
        VAR_25->var_values[VAR_19] = 1 << VAR_25->desc->log2_chroma_h;

        if ((VAR_29 = FUNC_1(&VAR_37, VAR_25->duration_expr_str,
                                          VAR_23, VAR_25->var_values,
                                          ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, VAR_24)) < 0) {
            FUNC_2(&VAR_25->in);
            return VAR_29;
        }

        VAR_25->var_values[VAR_2] = VAR_25->nb_frames = VAR_37;

        VAR_29 = FUNC_8(VAR_24, VAR_25->in, VAR_25->var_values, VAR_25->current_frame,
                                  &VAR_34, &VAR_35, &VAR_36);
        if (VAR_29 < 0)
            return VAR_29;
    }
    if (VAR_29 < 0) {
        return VAR_29;
    } else if (VAR_25->finished && FUNC_3(VAR_26, &VAR_28, &VAR_30)) {
        FUNC_7(VAR_27, VAR_28, VAR_30);
        return 0;
    } else {
        if (FUNC_6(VAR_27) && VAR_25->finished)
            FUNC_5(VAR_26);
        return 0;
    }
}
