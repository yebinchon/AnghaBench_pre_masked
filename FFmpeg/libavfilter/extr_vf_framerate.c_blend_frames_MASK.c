
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int src2_factor; scalar_t__ src1_factor; int copy_src2; int copy_src1; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_17__ {TYPE_1__* internal; TYPE_4__** outputs; TYPE_3__* priv; } ;
struct TYPE_16__ {int h; int w; } ;
struct TYPE_15__ {int flags; double score; double scene_score; int f0; int work; scalar_t__ blend_factor_max; int f1; } ;
struct TYPE_13__ {int (* execute ) (TYPE_5__*,int ,TYPE_2__*,int *,int ) ;} ;
typedef TYPE_3__ FrameRateContext ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_5__*,char*,...) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_4__*,int ,int) ;
 int VAR_2 ;
 double FUNC_7 (TYPE_5__*,int ,int ) ;
 int FUNC_8 (TYPE_5__*,int ,TYPE_2__*,int *,int ) ;

__attribute__((used)) static int FUNC_9(AVFilterContext *VAR_3, int VAR_4)
{
    FrameRateContext *VAR_5 = VAR_3->priv;
    AVFilterLink *VAR_6 = VAR_3->outputs[0];
    double VAR_7 = 0;

    if ((VAR_5->flags & VAR_1)) {
        if (VAR_5->score >= 0.0)
            VAR_7 = VAR_5->score;
        else
            VAR_7 = VAR_5->score = FUNC_7(VAR_3, VAR_5->f0, VAR_5->f1);
        FUNC_4(VAR_3, "blend_frames() interpolate scene score:%f\n", VAR_7);
    }

    if (VAR_7 < VAR_5->scene_score) {
        ThreadData VAR_8;
        VAR_8.copy_src1 = VAR_5->f0;
        VAR_8.copy_src2 = VAR_5->f1;
        VAR_8.src2_factor = VAR_4;
        VAR_8.src1_factor = VAR_5->blend_factor_max - VAR_8.src2_factor;


        VAR_5->work = FUNC_6(VAR_6, VAR_6->w, VAR_6->h);
        if (!VAR_5->work)
            return FUNC_0(VAR_0);

        FUNC_3(VAR_5->work, VAR_5->f0);

        FUNC_4(VAR_3, "blend_frames() INTERPOLATE to create work frame\n");
        VAR_3->internal->execute(VAR_3, VAR_2, &VAR_8, ((void*)0), FUNC_2(FUNC_1(1, VAR_6->h >> 2), FUNC_5(VAR_3)));
        return 1;
    }
    return 0;
}
