
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int log2_chroma_h; TYPE_1__* comp; } ;
struct TYPE_10__ {TYPE_3__** inputs; TYPE_2__* priv; } ;
struct TYPE_9__ {int h; int w; int format; TYPE_4__* src; } ;
struct TYPE_8__ {int depth; int * height; TYPE_6__* desc; int linesize; int lagfun; int nb_planes; } ;
struct TYPE_7__ {int depth; } ;
typedef TYPE_2__ LagfunContext ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_6__* FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_3->src;
    LagfunContext *VAR_5 = VAR_4->priv;
    AVFilterLink *VAR_6 = VAR_4->inputs[0];
    int VAR_7;

    VAR_5->desc = FUNC_3(VAR_3->format);
    if (!VAR_5->desc)
        return VAR_0;
    VAR_5->nb_planes = FUNC_2(VAR_3->format);
    VAR_5->depth = VAR_5->desc->comp[0].depth;
    VAR_5->lagfun = VAR_5->depth <= 8 ? VAR_2 : VAR_1;

    if ((VAR_7 = FUNC_1(VAR_5->linesize, VAR_6->format, VAR_6->w)) < 0)
        return VAR_7;

    VAR_5->height[1] = VAR_5->height[2] = FUNC_0(VAR_6->h, VAR_5->desc->log2_chroma_h);
    VAR_5->height[0] = VAR_5->height[3] = VAR_6->h;

    return 0;
}
