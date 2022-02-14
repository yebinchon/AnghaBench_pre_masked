
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int8_t ;
struct TYPE_18__ {TYPE_3__** outputs; TYPE_1__* priv; } ;
struct TYPE_17__ {int h; int w; TYPE_4__* dst; } ;
struct TYPE_16__ {int pict_type; int linesize; scalar_t__ data; int height; int width; } ;
struct TYPE_15__ {size_t mode_id; int pp_ctx; int * modes; } ;
typedef TYPE_1__ PPFilterContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__**) ;
 int * FUNC_4 (TYPE_2__*,int*,int*) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_6 (TYPE_3__*,int const,int const) ;
 int FUNC_7 (int const**,int ,scalar_t__,int ,int const,int ,int *,int,int ,int ,int) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    PPFilterContext *VAR_5 = VAR_4->priv;
    AVFilterLink *VAR_6 = VAR_4->outputs[0];
    const int VAR_7 = FUNC_1(VAR_6->w, 8);
    const int VAR_8 = FUNC_1(VAR_6->h, 8);
    AVFrame *VAR_9;
    int VAR_10, VAR_11;
    int8_t *VAR_12 ;

    VAR_9 = FUNC_6(VAR_6, VAR_7, VAR_8);
    if (!VAR_9) {
        FUNC_3(&VAR_3);
        return FUNC_0(VAR_0);
    }
    FUNC_2(VAR_9, VAR_3);
    VAR_9->width = VAR_3->width;
    VAR_9->height = VAR_3->height;
    VAR_12 = FUNC_4(VAR_3, &VAR_10, &VAR_11);

    FUNC_7((const uint8_t **)VAR_3->data, VAR_3->linesize,
                   VAR_9->data, VAR_9->linesize,
                   VAR_7, VAR_6->h,
                   VAR_12,
                   VAR_10,
                   VAR_5->modes[VAR_5->mode_id],
                   VAR_5->pp_ctx,
                   VAR_9->pict_type | (VAR_11 ? VAR_1 : 0));

    FUNC_3(&VAR_3);
    return FUNC_5(VAR_6, VAR_9);
}
