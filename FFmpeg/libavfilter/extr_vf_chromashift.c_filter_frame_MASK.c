
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_22__ {TYPE_1__* internal; TYPE_2__* priv; TYPE_4__** outputs; } ;
struct TYPE_21__ {int h; int w; TYPE_5__* dst; } ;
struct TYPE_20__ {int * linesize; int * data; } ;
struct TYPE_19__ {TYPE_3__* in; int * height; int filter_slice; int * linesize; int is_rgbashift; } ;
struct TYPE_18__ {int (* execute ) (TYPE_5__*,int ,TYPE_3__*,int *,int ) ;} ;
typedef TYPE_2__ ChromaShiftContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__**) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_5__*) ;
 TYPE_3__* FUNC_7 (TYPE_4__*,int ,int ) ;
 int FUNC_8 (TYPE_5__*,int ,TYPE_3__*,int *,int ) ;

__attribute__((used)) static int FUNC_9(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    AVFilterLink *VAR_4 = VAR_3->outputs[0];
    ChromaShiftContext *VAR_5 = VAR_3->priv;
    AVFrame *VAR_6;

    VAR_6 = FUNC_7(VAR_4, VAR_4->w, VAR_4->h);
    if (!VAR_6) {
        FUNC_3(&VAR_2);
        return FUNC_0(VAR_0);
    }
    FUNC_2(VAR_6, VAR_2);

    VAR_5->in = VAR_2;
    if (!VAR_5->is_rgbashift) {
        FUNC_4(VAR_6->data[0],
                            VAR_6->linesize[0],
                            VAR_2->data[0], VAR_2->linesize[0],
                            VAR_5->linesize[0], VAR_5->height[0]);
    }
    VAR_3->internal->execute(VAR_3, VAR_5->filter_slice, VAR_6, ((void*)0),
                           FUNC_1(VAR_5->height[1],
                                  VAR_5->height[2],
                                  FUNC_6(VAR_3)));
    VAR_5->in = ((void*)0);
    FUNC_3(&VAR_2);
    return FUNC_5(VAR_4, VAR_6);
}
