
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {TYPE_1__** inputs; TYPE_2__* priv; } ;
struct TYPE_15__ {int format; TYPE_5__* dst; } ;
struct TYPE_14__ {int log2_chroma_w; int log2_chroma_h; } ;
struct TYPE_13__ {int* var_values; int overlay_is_packed_rgb; scalar_t__ eval_mode; int y; int x; int overlay_has_alpha; int overlay_rgba_map; int y_expr; int y_pexpr; int x_expr; int x_pexpr; int overlay_pix_step; } ;
struct TYPE_12__ {int w; int h; int format; } ;
typedef TYPE_2__ OverlayContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 void* VAR_3 ;
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
 int VAR_20 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,TYPE_3__ const*) ;
 int FUNC_2 (TYPE_5__*,int ,char*,int,int,int,int,...) ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int ,char*,TYPE_5__*) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_21)
{
    AVFilterContext *VAR_22 = VAR_21->dst;
    OverlayContext *VAR_23 = VAR_21->dst->priv;
    int VAR_24;
    const AVPixFmtDescriptor *VAR_25 = FUNC_3(VAR_21->format);

    FUNC_1(VAR_23->overlay_pix_step, ((void*)0), VAR_25);



    VAR_23->var_values[VAR_7 ] = VAR_23->var_values[VAR_9] = VAR_22->inputs[VAR_2 ]->w;
    VAR_23->var_values[VAR_6 ] = VAR_23->var_values[VAR_8] = VAR_22->inputs[VAR_2 ]->h;
    VAR_23->var_values[VAR_13] = VAR_23->var_values[VAR_14] = VAR_22->inputs[VAR_4]->w;
    VAR_23->var_values[VAR_12] = VAR_23->var_values[VAR_11] = VAR_22->inputs[VAR_4]->h;
    VAR_23->var_values[VAR_5] = 1<<VAR_25->log2_chroma_w;
    VAR_23->var_values[VAR_17] = 1<<VAR_25->log2_chroma_h;
    VAR_23->var_values[VAR_18] = VAR_3;
    VAR_23->var_values[VAR_19] = VAR_3;
    VAR_23->var_values[VAR_10] = 0;
    VAR_23->var_values[VAR_16] = VAR_3;
    VAR_23->var_values[VAR_15] = VAR_3;

    if ((VAR_24 = FUNC_7(&VAR_23->x_pexpr, VAR_23->x_expr, "x", VAR_22)) < 0 ||
        (VAR_24 = FUNC_7(&VAR_23->y_pexpr, VAR_23->y_expr, "y", VAR_22)) < 0)
        return VAR_24;

    VAR_23->overlay_is_packed_rgb =
        FUNC_5(VAR_23->overlay_rgba_map, VAR_21->format) >= 0;
    VAR_23->overlay_has_alpha = FUNC_6(VAR_21->format, VAR_20);

    if (VAR_23->eval_mode == VAR_1) {
        FUNC_4(VAR_22);
        FUNC_2(VAR_22, VAR_0, "x:%f xi:%d y:%f yi:%d\n",
               VAR_23->var_values[VAR_18], VAR_23->x,
               VAR_23->var_values[VAR_19], VAR_23->y);
    }

    FUNC_2(VAR_22, VAR_0,
           "main w:%d h:%d fmt:%s overlay w:%d h:%d fmt:%s\n",
           VAR_22->inputs[VAR_2]->w, VAR_22->inputs[VAR_2]->h,
           FUNC_0(VAR_22->inputs[VAR_2]->format),
           VAR_22->inputs[VAR_4]->w, VAR_22->inputs[VAR_4]->h,
           FUNC_0(VAR_22->inputs[VAR_4]->format));
    return 0;
}
