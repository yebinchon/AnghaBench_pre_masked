
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* priv; } ;
struct TYPE_12__ {void* w; void* h; int format; TYPE_5__* dst; } ;
struct TYPE_11__ {int log2_chroma_w; int log2_chroma_h; TYPE_1__* comp; } ;
struct TYPE_10__ {int depth; int half; int maskedmerge; void** width; void** height; int nb_planes; } ;
struct TYPE_9__ {int depth; } ;
typedef TYPE_2__ MaskedMergeContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (void*,int) ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_3->dst;
    MaskedMergeContext *VAR_5 = VAR_4->priv;
    const AVPixFmtDescriptor *VAR_6 = FUNC_2(VAR_3->format);
    int VAR_7, VAR_8;

    VAR_5->nb_planes = FUNC_1(VAR_3->format);

    VAR_8 = VAR_6->log2_chroma_w;
    VAR_7 = VAR_6->log2_chroma_h;
    VAR_5->height[1] = VAR_5->height[2] = FUNC_0(VAR_3->h, VAR_7);
    VAR_5->height[0] = VAR_5->height[3] = VAR_3->h;
    VAR_5->width[1] = VAR_5->width[2] = FUNC_0(VAR_3->w, VAR_8);
    VAR_5->width[0] = VAR_5->width[3] = VAR_3->w;

    VAR_5->depth = VAR_6->comp[0].depth;
    VAR_5->half = (1 << VAR_5->depth) / 2;

    if (VAR_6->comp[0].depth == 8)
        VAR_5->maskedmerge = VAR_2;
    else
        VAR_5->maskedmerge = VAR_1;

    if (VAR_0)
        FUNC_3(VAR_5);

    return 0;
}
