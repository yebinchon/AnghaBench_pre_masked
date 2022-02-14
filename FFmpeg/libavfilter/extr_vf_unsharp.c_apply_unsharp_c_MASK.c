
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int UnsharpFilterParam ;
struct TYPE_13__ {int nb_threads; int chroma; int luma; int vsub; int hsub; } ;
typedef TYPE_2__ UnsharpContext ;
struct TYPE_14__ {int width; int height; int src_stride; int dst_stride; int src; int dst; int * fp; } ;
typedef TYPE_3__ ThreadData ;
struct TYPE_17__ {TYPE_1__* internal; TYPE_2__* priv; TYPE_5__** inputs; } ;
struct TYPE_16__ {int w; int h; } ;
struct TYPE_15__ {int * linesize; int * data; } ;
struct TYPE_12__ {int (* execute ) (TYPE_6__*,int ,TYPE_3__*,int *,int ) ;} ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_6__*,int ,TYPE_3__*,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(AVFilterContext *VAR_1, AVFrame *VAR_2, AVFrame *VAR_3)
{
    AVFilterLink *VAR_4 = VAR_1->inputs[0];
    UnsharpContext *VAR_5 = VAR_1->priv;
    int VAR_6, VAR_7[3], VAR_8[3];
    UnsharpFilterParam *VAR_9[3];
    ThreadData VAR_10;

    VAR_7[0] = VAR_4->w;
    VAR_7[1] = VAR_7[2] = FUNC_0(VAR_4->w, VAR_5->hsub);
    VAR_8[0] = VAR_4->h;
    VAR_8[1] = VAR_8[2] = FUNC_0(VAR_4->h, VAR_5->vsub);
    VAR_9[0] = &VAR_5->luma;
    VAR_9[1] = VAR_9[2] = &VAR_5->chroma;
    for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
        VAR_10.fp = VAR_9[VAR_6];
        VAR_10.dst = VAR_3->data[VAR_6];
        VAR_10.src = VAR_2->data[VAR_6];
        VAR_10.width = VAR_7[VAR_6];
        VAR_10.height = VAR_8[VAR_6];
        VAR_10.dst_stride = VAR_3->linesize[VAR_6];
        VAR_10.src_stride = VAR_2->linesize[VAR_6];
        VAR_1->internal->execute(VAR_1, VAR_0, &VAR_10, ((void*)0), FUNC_1(VAR_8[VAR_6], VAR_5->nb_threads));
    }
    return 0;
}
