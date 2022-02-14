
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {float* fmap; int fmap_linesize; scalar_t__ backward; void* angle; int eval_mode; void* y0; void* x0; void** var_values; int y0_pexpr; int x0_pexpr; int angle_pexpr; } ;
typedef TYPE_1__ VignetteContext ;
struct TYPE_10__ {int h; int w; int time_base; void* frame_count_out; } ;
struct TYPE_9__ {int pts; } ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ,int ) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 void* FUNC_2 (void*,int ,int ) ;
 void* FUNC_3 (int ,void**,int *) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 scalar_t__ FUNC_5 (void*) ;

__attribute__((used)) static void FUNC_6(VignetteContext *VAR_6, AVFilterLink *VAR_7, AVFrame *VAR_8)
{
    int VAR_9, VAR_10;
    float *VAR_11 = VAR_6->fmap;
    int VAR_12 = VAR_6->fmap_linesize;

    if (VAR_8) {
        VAR_6->var_values[VAR_3] = VAR_7->frame_count_out;
        VAR_6->var_values[VAR_5] = FUNC_1(VAR_8->pts, VAR_7->time_base);
        VAR_6->var_values[VAR_4] = FUNC_0(VAR_8->pts);
    } else {
        VAR_6->var_values[VAR_3] = VAR_2;
        VAR_6->var_values[VAR_5] = VAR_2;
        VAR_6->var_values[VAR_4] = VAR_2;
    }

    VAR_6->angle = FUNC_3(VAR_6->angle_pexpr, VAR_6->var_values, ((void*)0));
    VAR_6->x0 = FUNC_3(VAR_6->x0_pexpr, VAR_6->var_values, ((void*)0));
    VAR_6->y0 = FUNC_3(VAR_6->y0_pexpr, VAR_6->var_values, ((void*)0));

    if (FUNC_5(VAR_6->x0) || FUNC_5(VAR_6->y0) || FUNC_5(VAR_6->angle))
        VAR_6->eval_mode = VAR_0;

    VAR_6->angle = FUNC_2(VAR_6->angle, 0, VAR_1);

    if (VAR_6->backward) {
        for (VAR_10 = 0; VAR_10 < VAR_7->h; VAR_10++) {
            for (VAR_9 = 0; VAR_9 < VAR_7->w; VAR_9++)
                VAR_11[VAR_9] = 1. / FUNC_4(VAR_6, VAR_9, VAR_10);
            VAR_11 += VAR_12;
        }
    } else {
        for (VAR_10 = 0; VAR_10 < VAR_7->h; VAR_10++) {
            for (VAR_9 = 0; VAR_9 < VAR_7->w; VAR_9++)
                VAR_11[VAR_9] = FUNC_4(VAR_6, VAR_9, VAR_10);
            VAR_11 += VAR_12;
        }
    }
}
