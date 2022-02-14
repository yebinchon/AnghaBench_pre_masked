
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* priv; } ;
struct TYPE_9__ {int h; int w; int format; TYPE_4__* dst; } ;
struct TYPE_8__ {int log2_chroma_h; } ;
struct TYPE_7__ {int * planeheight; int linesize; int nb_planes; } ;
typedef TYPE_1__ NNEDIContext ;
typedef TYPE_2__ AVPixFmtDescriptor ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0->dst;
    NNEDIContext *VAR_2 = VAR_1->priv;
    const AVPixFmtDescriptor *VAR_3 = FUNC_3(VAR_0->format);
    int VAR_4;

    VAR_2->nb_planes = FUNC_2(VAR_0->format);
    if ((VAR_4 = FUNC_1(VAR_2->linesize, VAR_0->format, VAR_0->w)) < 0)
        return VAR_4;

    VAR_2->planeheight[1] = VAR_2->planeheight[2] = FUNC_0(VAR_0->h, VAR_3->log2_chroma_h);
    VAR_2->planeheight[0] = VAR_2->planeheight[3] = VAR_0->h;

    return 0;
}
