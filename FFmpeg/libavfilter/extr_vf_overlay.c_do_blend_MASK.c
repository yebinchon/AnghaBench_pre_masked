
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_19__ {TYPE_5__* src; TYPE_5__* dst; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_24__ {int * outputs; TYPE_1__* internal; TYPE_6__** inputs; TYPE_3__* priv; } ;
struct TYPE_23__ {int frame_count_out; int time_base; } ;
struct TYPE_22__ {int pkt_pos; int pts; scalar_t__ width; scalar_t__ height; } ;
struct TYPE_21__ {TYPE_7__* parent; } ;
struct TYPE_20__ {scalar_t__ eval_mode; int* var_values; scalar_t__ x; scalar_t__ y; int blend_slice; } ;
struct TYPE_18__ {int (* execute ) (TYPE_7__*,int ,TYPE_2__*,int *,int ) ;} ;
typedef TYPE_3__ OverlayContext ;
typedef TYPE_4__ FFFrameSync ;
typedef TYPE_5__ AVFrame ;
typedef TYPE_6__ AVFilterLink ;
typedef TYPE_7__ AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,scalar_t__) ;
 int VAR_3 ;
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
 int FUNC_3 (TYPE_7__*,int ,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (int ,TYPE_5__*) ;
 scalar_t__ FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (TYPE_4__*,TYPE_5__**,TYPE_5__**) ;
 int FUNC_9 (TYPE_7__*,int ,TYPE_2__*,int *,int ) ;

__attribute__((used)) static int FUNC_10(FFFrameSync *VAR_17)
{
    AVFilterContext *VAR_18 = VAR_17->parent;
    AVFrame *VAR_19, *VAR_20;
    OverlayContext *VAR_21 = VAR_18->priv;
    AVFilterLink *VAR_22 = VAR_18->inputs[0];
    int VAR_23;

    VAR_23 = FUNC_8(VAR_17, &VAR_19, &VAR_20);
    if (VAR_23 < 0)
        return VAR_23;
    if (!VAR_20)
        return FUNC_6(VAR_18->outputs[0], VAR_19);

    if (VAR_21->eval_mode == VAR_2) {
        int64_t VAR_24 = VAR_19->pkt_pos;

        VAR_21->var_values[VAR_8] = VAR_22->frame_count_out;
        VAR_21->var_values[VAR_14] = VAR_19->pts == VAR_1 ?
            VAR_3 : VAR_19->pts * FUNC_4(VAR_22->time_base);
        VAR_21->var_values[VAR_13] = VAR_24 == -1 ? VAR_3 : VAR_24;

        VAR_21->var_values[VAR_11] = VAR_21->var_values[VAR_12] = VAR_20->width;
        VAR_21->var_values[VAR_10] = VAR_21->var_values[VAR_9] = VAR_20->height;
        VAR_21->var_values[VAR_5 ] = VAR_21->var_values[VAR_7] = VAR_19->width;
        VAR_21->var_values[VAR_4 ] = VAR_21->var_values[VAR_6] = VAR_19->height;

        FUNC_5(VAR_18);
        FUNC_3(VAR_18, VAR_0, "n:%f t:%f pos:%f x:%f xi:%d y:%f yi:%d\n",
               VAR_21->var_values[VAR_8], VAR_21->var_values[VAR_14], VAR_21->var_values[VAR_13],
               VAR_21->var_values[VAR_15], VAR_21->x,
               VAR_21->var_values[VAR_16], VAR_21->y);
    }

    if (VAR_21->x < VAR_19->width && VAR_21->x + VAR_20->width >= 0 &&
        VAR_21->y < VAR_19->height && VAR_21->y + VAR_20->height >= 0) {
        ThreadData VAR_25;

        VAR_25.dst = VAR_19;
        VAR_25.src = VAR_20;
        VAR_18->internal->execute(VAR_18, VAR_21->blend_slice, &VAR_25, ((void*)0), FUNC_1(FUNC_0(1, FUNC_2(VAR_21->y + VAR_20->height, FUNC_1(VAR_20->height, VAR_19->height), VAR_19->height - VAR_21->y)),
                                                                     FUNC_7(VAR_18)));
    }
    return FUNC_6(VAR_18->outputs[0], VAR_19);
}
