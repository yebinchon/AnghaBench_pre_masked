
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int depth; void** width; void** height; int nb_planes; } ;
typedef TYPE_2__ ThresholdContext ;
struct TYPE_13__ {TYPE_2__* priv; } ;
struct TYPE_12__ {void* w; void* h; int format; TYPE_5__* dst; } ;
struct TYPE_11__ {int log2_chroma_w; int log2_chroma_h; TYPE_1__* comp; } ;
struct TYPE_9__ {int depth; } ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 void* FUNC_0 (void*,int) ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0->dst;
    ThresholdContext *VAR_2 = VAR_1->priv;
    const AVPixFmtDescriptor *VAR_3 = FUNC_2(VAR_0->format);
    int VAR_4, VAR_5;

    VAR_2->nb_planes = FUNC_1(VAR_0->format);

    VAR_5 = VAR_3->log2_chroma_w;
    VAR_4 = VAR_3->log2_chroma_h;
    VAR_2->height[1] = VAR_2->height[2] = FUNC_0(VAR_0->h, VAR_4);
    VAR_2->height[0] = VAR_2->height[3] = VAR_0->h;
    VAR_2->width[1] = VAR_2->width[2] = FUNC_0(VAR_0->w, VAR_5);
    VAR_2->width[0] = VAR_2->width[3] = VAR_0->w;
    VAR_2->depth = VAR_3->comp[0].depth;

    FUNC_3(VAR_2);

    return 0;
}
