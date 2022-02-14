
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {int power; scalar_t__ radius; } ;
struct TYPE_14__ {int power; scalar_t__ radius; } ;
struct TYPE_13__ {int power; scalar_t__ radius; } ;
struct TYPE_12__ {TYPE_1__* priv; } ;
struct TYPE_11__ {TYPE_3__* dst; } ;
struct TYPE_10__ {int* power; scalar_t__* radius; TYPE_7__ alpha_param; TYPE_6__ chroma_param; TYPE_5__ luma_param; } ;
typedef TYPE_1__ AverageBlurOpenCLContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (TYPE_3__*,int ,char*,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_5__*,TYPE_6__*,TYPE_7__*) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_5)
{
    AVFilterContext *VAR_6 = VAR_5->dst;
    AverageBlurOpenCLContext *VAR_7 = VAR_6->priv;
    int VAR_8, VAR_9;

    VAR_8 = FUNC_1(VAR_5,
                                        &VAR_7->luma_param,
                                        &VAR_7->chroma_param,
                                        &VAR_7->alpha_param);

    if (VAR_8 != 0) {
        FUNC_0(VAR_6, VAR_1, "Failed to evaluate "
               "filter params: %d.\n", VAR_8);
        return VAR_8;
    }

    VAR_7->radius[VAR_4] = VAR_7->luma_param.radius;
    VAR_7->radius[VAR_2] = VAR_7->radius[VAR_3] = VAR_7->chroma_param.radius;
    VAR_7->radius[VAR_0] = VAR_7->alpha_param.radius;

    VAR_7->power[VAR_4] = VAR_7->luma_param.power;
    VAR_7->power[VAR_2] = VAR_7->power[VAR_3] = VAR_7->chroma_param.power;
    VAR_7->power[VAR_0] = VAR_7->alpha_param.power;

    for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
        if (VAR_7->power[VAR_9] == 0) {
            VAR_7->power[VAR_9] = 1;
            VAR_7->radius[VAR_9] = 0;
        }
    }

    return 0;
}
