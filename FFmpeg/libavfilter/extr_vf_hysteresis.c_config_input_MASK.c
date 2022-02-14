
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* priv; } ;
struct TYPE_11__ {int h; int w; int format; TYPE_5__* dst; } ;
struct TYPE_10__ {int log2_chroma_w; int log2_chroma_h; TYPE_1__* comp; } ;
struct TYPE_9__ {int* height; int* width; int depth; void* xy; void* map; int hysteresis; int nb_planes; } ;
struct TYPE_8__ {int depth; } ;
typedef TYPE_2__ HysteresisContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int,int) ;
 int VAR_0 ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_3->dst;
    HysteresisContext *VAR_5 = VAR_4->priv;
    const AVPixFmtDescriptor *VAR_6 = FUNC_4(VAR_3->format);
    int VAR_7, VAR_8;

    VAR_5->nb_planes = FUNC_3(VAR_3->format);

    VAR_8 = VAR_6->log2_chroma_w;
    VAR_7 = VAR_6->log2_chroma_h;
    VAR_5->height[1] = VAR_5->height[2] = FUNC_1(VAR_3->h, VAR_7);
    VAR_5->height[0] = VAR_5->height[3] = VAR_3->h;
    VAR_5->width[1] = VAR_5->width[2] = FUNC_1(VAR_3->w, VAR_8);
    VAR_5->width[0] = VAR_5->width[3] = VAR_3->w;

    VAR_5->depth = VAR_6->comp[0].depth;

    if (VAR_6->comp[0].depth == 8)
        VAR_5->hysteresis = VAR_2;
    else
        VAR_5->hysteresis = VAR_1;

    VAR_5->map = FUNC_2(VAR_3->w, VAR_3->h * sizeof (*VAR_5->map));
    if (!VAR_5->map)
        return FUNC_0(VAR_0);

    VAR_5->xy = FUNC_2(VAR_3->w, VAR_3->h * sizeof(*VAR_5->xy));
    if (!VAR_5->xy)
        return FUNC_0(VAR_0);

    return 0;
}
