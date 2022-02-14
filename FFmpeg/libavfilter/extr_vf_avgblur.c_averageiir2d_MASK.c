
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int width; int height; int linesize; int ptr; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_18__ {TYPE_1__* internal; TYPE_3__* priv; } ;
struct TYPE_17__ {int * linesize; int * data; } ;
struct TYPE_16__ {int* planewidth; int* planeheight; int filter_vertically; int filter_horizontally; } ;
struct TYPE_14__ {int (* execute ) (TYPE_5__*,int ,TYPE_2__*,int *,int ) ;} ;
typedef TYPE_3__ AverageBlurContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int const,int const) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int ,TYPE_2__*,int *,int ) ;
 int FUNC_3 (TYPE_5__*,int ,TYPE_2__*,int *,int ) ;

__attribute__((used)) static void FUNC_4(AVFilterContext *VAR_0, AVFrame *VAR_1, AVFrame *VAR_2, int VAR_3)
{
    AverageBlurContext *VAR_4 = VAR_0->priv;
    const int VAR_5 = VAR_4->planewidth[VAR_3];
    const int VAR_6 = VAR_4->planeheight[VAR_3];
    const int VAR_7 = FUNC_1(VAR_0);
    ThreadData VAR_8;

    VAR_8.width = VAR_5;
    VAR_8.height = VAR_6;
    VAR_8.ptr = VAR_1->data[VAR_3];
    VAR_8.linesize = VAR_1->linesize[VAR_3];
    VAR_0->internal->execute(VAR_0, VAR_4->filter_horizontally, &VAR_8, ((void*)0), FUNC_0(VAR_6, VAR_7));
    VAR_8.ptr = VAR_2->data[VAR_3];
    VAR_8.linesize = VAR_2->linesize[VAR_3];
    VAR_0->internal->execute(VAR_0, VAR_4->filter_vertically, &VAR_8, ((void*)0), FUNC_0(VAR_5, VAR_7));
}
