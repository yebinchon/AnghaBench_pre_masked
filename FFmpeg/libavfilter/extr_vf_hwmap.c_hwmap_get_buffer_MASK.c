
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* priv; TYPE_2__** outputs; } ;
struct TYPE_9__ {int hw_frames_ctx; TYPE_3__* dst; } ;
struct TYPE_8__ {int mode; scalar_t__ reverse; } ;
typedef TYPE_1__ HWMapContext ;
typedef int AVFrame ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (TYPE_3__*,int ,char*,...) ;
 int * FUNC_4 (TYPE_2__*,int,int) ;
 int * FUNC_5 (TYPE_2__*,int,int) ;

__attribute__((used)) static AVFrame *FUNC_6(AVFilterLink *VAR_1, int VAR_2, int VAR_3)
{
    AVFilterContext *VAR_4 = VAR_1->dst;
    AVFilterLink *VAR_5 = VAR_4->outputs[0];
    HWMapContext *VAR_6 = VAR_4->priv;

    if (VAR_6->reverse && !VAR_1->hw_frames_ctx) {
        AVFrame *VAR_7, *VAR_8;
        int VAR_9;

        VAR_7 = FUNC_5(VAR_5, VAR_2, VAR_3);
        if (!VAR_7) {
            FUNC_3(VAR_4, VAR_0, "Failed to allocate source "
                   "frame for software mapping.\n");
            return ((void*)0);
        }

        VAR_8 = FUNC_0();
        if (!VAR_8) {
            FUNC_1(&VAR_7);
            return ((void*)0);
        }

        VAR_9 = FUNC_2(VAR_8, VAR_7, VAR_6->mode);
        if (VAR_9) {
            FUNC_3(VAR_4, VAR_0, "Failed to map frame to "
                   "software: %d.\n", VAR_9);
            FUNC_1(&VAR_7);
            FUNC_1(&VAR_8);
            return ((void*)0);
        }

        FUNC_1(&VAR_7);
        return VAR_8;
    } else {
        return FUNC_4(VAR_1, VAR_2, VAR_3);
    }
}
