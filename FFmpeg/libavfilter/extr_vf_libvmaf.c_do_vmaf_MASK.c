
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * outputs; TYPE_1__* priv; } ;
struct TYPE_8__ {TYPE_3__* parent; } ;
struct TYPE_7__ {int frame_set; int lock; int cond; int gmain; int gref; scalar_t__ error; } ;
typedef TYPE_1__ LIBVMAFContext ;
typedef TYPE_2__ FFFrameSync ;
typedef int AVFrame ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_2__*,int **,int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(FFFrameSync *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->parent;
    LIBVMAFContext *VAR_4 = VAR_3->priv;
    AVFrame *VAR_5, *VAR_6;
    int VAR_7;

    VAR_7 = FUNC_4(VAR_2, &VAR_5, &VAR_6);
    if (VAR_7 < 0)
        return VAR_7;
    if (!VAR_6)
        return FUNC_3(VAR_3->outputs[0], VAR_5);

    FUNC_7(&VAR_4->lock);

    while (VAR_4->frame_set && !VAR_4->error) {
        FUNC_6(&VAR_4->cond, &VAR_4->lock);
    }

    if (VAR_4->error) {
        FUNC_2(VAR_3, VAR_0,
               "libvmaf encountered an error, check log for details\n");
        FUNC_8(&VAR_4->lock);
        return FUNC_0(VAR_1);
    }

    FUNC_1(VAR_4->gref, VAR_6);
    FUNC_1(VAR_4->gmain, VAR_5);

    VAR_4->frame_set = 1;

    FUNC_5(&VAR_4->cond);
    FUNC_8(&VAR_4->lock);

    return FUNC_3(VAR_3->outputs[0], VAR_5);
}
