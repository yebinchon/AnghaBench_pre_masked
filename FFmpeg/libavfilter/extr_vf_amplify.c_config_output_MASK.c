
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
struct TYPE_8__ {int * height; TYPE_6__* desc; int linesize; int depth; int nb_planes; } ;
struct TYPE_7__ {int depth; } ;
typedef TYPE_2__ AmplifyContext ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_6__* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->src;
    AmplifyContext *VAR_3 = VAR_2->priv;
    AVFilterLink *VAR_4 = VAR_2->inputs[0];
    int VAR_5;

    VAR_3->desc = FUNC_3(VAR_1->format);
    if (!VAR_3->desc)
        return VAR_0;
    VAR_3->nb_planes = FUNC_2(VAR_1->format);
    VAR_3->depth = VAR_3->desc->comp[0].depth;

    if ((VAR_5 = FUNC_1(VAR_3->linesize, VAR_4->format, VAR_4->w)) < 0)
        return VAR_5;

    VAR_3->height[1] = VAR_3->height[2] = FUNC_0(VAR_4->h, VAR_3->desc->log2_chroma_h);
    VAR_3->height[0] = VAR_3->height[3] = VAR_4->h;

    return 0;
}
