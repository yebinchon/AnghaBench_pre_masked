
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int* planeheight; int nb_planes; int linesize; int double_weave; } ;
typedef TYPE_3__ WeaveContext ;
struct TYPE_14__ {TYPE_5__** inputs; TYPE_3__* priv; } ;
struct TYPE_10__ {int den; int num; } ;
struct TYPE_9__ {int num; int den; } ;
struct TYPE_13__ {int h; int format; int w; TYPE_2__ frame_rate; TYPE_1__ time_base; TYPE_6__* src; } ;
struct TYPE_12__ {int log2_chroma_h; } ;
typedef TYPE_4__ AVPixFmtDescriptor ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0->src;
    WeaveContext *VAR_2 = VAR_1->priv;
    AVFilterLink *VAR_3 = VAR_1->inputs[0];
    const AVPixFmtDescriptor *VAR_4 = FUNC_3(VAR_3->format);
    int VAR_5;

    if (!VAR_2->double_weave) {
        VAR_0->time_base.num = VAR_3->time_base.num * 2;
        VAR_0->time_base.den = VAR_3->time_base.den;
        VAR_0->frame_rate.num = VAR_3->frame_rate.num;
        VAR_0->frame_rate.den = VAR_3->frame_rate.den * 2;
    }
    VAR_0->w = VAR_3->w;
    VAR_0->h = VAR_3->h * 2;

    if ((VAR_5 = FUNC_1(VAR_2->linesize, VAR_3->format, VAR_3->w)) < 0)
        return VAR_5;

    VAR_2->planeheight[1] = VAR_2->planeheight[2] = FUNC_0(VAR_3->h, VAR_4->log2_chroma_h);
    VAR_2->planeheight[0] = VAR_2->planeheight[3] = VAR_3->h;

    VAR_2->nb_planes = FUNC_2(VAR_3->format);

    return 0;
}
