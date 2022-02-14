
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_18__ {int power; int radius; } ;
struct TYPE_17__ {int power; int radius; } ;
struct TYPE_16__ {int power; int radius; } ;
struct TYPE_15__ {TYPE_1__* priv; } ;
struct TYPE_14__ {int w; int h; TYPE_4__* dst; int format; } ;
struct TYPE_13__ {int log2_chroma_h; int log2_chroma_w; } ;
struct TYPE_12__ {TYPE_8__ alpha_param; int * power; TYPE_7__ chroma_param; TYPE_6__ luma_param; int * radius; int vsub; int hsub; void** temp; } ;
typedef TYPE_1__ BoxBlurContext ;
typedef TYPE_2__ AVPixFmtDescriptor ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_2 (TYPE_4__*,int ,char*,int) ;
 void* FUNC_3 (int) ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,TYPE_6__*,TYPE_7__*,TYPE_8__*) ;

__attribute__((used)) static int FUNC_6(AVFilterLink *VAR_6)
{
    const AVPixFmtDescriptor *VAR_7 = FUNC_4(VAR_6->format);
    AVFilterContext *VAR_8 = VAR_6->dst;
    BoxBlurContext *VAR_9 = VAR_8->priv;
    int VAR_10 = VAR_6->w, VAR_11 = VAR_6->h;
    int VAR_12;

    if (!(VAR_9->temp[0] = FUNC_3(2*FUNC_1(VAR_10, VAR_11))) ||
        !(VAR_9->temp[1] = FUNC_3(2*FUNC_1(VAR_10, VAR_11))))
        return FUNC_0(VAR_2);

    VAR_9->hsub = VAR_7->log2_chroma_w;
    VAR_9->vsub = VAR_7->log2_chroma_h;

    VAR_12 = FUNC_5(VAR_6,
                                        &VAR_9->luma_param,
                                        &VAR_9->chroma_param,
                                        &VAR_9->alpha_param);

    if (VAR_12 != 0) {
        FUNC_2(VAR_8, VAR_1, "Failed to evaluate "
               "filter params: %d.\n", VAR_12);
        return VAR_12;
    }

    VAR_9->radius[VAR_5] = VAR_9->luma_param.radius;
    VAR_9->radius[VAR_3] = VAR_9->radius[VAR_4] = VAR_9->chroma_param.radius;
    VAR_9->radius[VAR_0] = VAR_9->alpha_param.radius;

    VAR_9->power[VAR_5] = VAR_9->luma_param.power;
    VAR_9->power[VAR_3] = VAR_9->power[VAR_4] = VAR_9->chroma_param.power;
    VAR_9->power[VAR_0] = VAR_9->alpha_param.power;

    return 0;
}
