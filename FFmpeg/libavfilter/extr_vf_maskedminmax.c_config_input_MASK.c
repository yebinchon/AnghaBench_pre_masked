
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
struct TYPE_11__ {void* w; void* h; int format; TYPE_5__* dst; } ;
struct TYPE_10__ {int log2_chroma_w; int log2_chroma_h; TYPE_1__* comp; } ;
struct TYPE_9__ {int depth; scalar_t__ maskedmin; int maskedminmax; void** planewidth; void** planeheight; int linesize; int nb_planes; } ;
struct TYPE_8__ {int depth; } ;
typedef TYPE_2__ MaskedMinMaxContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 void* FUNC_0 (void*,int) ;
 int FUNC_1 (int ,int ,void*) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_4)
{
    AVFilterContext *VAR_5 = VAR_4->dst;
    MaskedMinMaxContext *VAR_6 = VAR_5->priv;
    const AVPixFmtDescriptor *VAR_7 = FUNC_3(VAR_4->format);
    int VAR_8, VAR_9, VAR_10;

    VAR_6->nb_planes = FUNC_2(VAR_4->format);

    if ((VAR_10 = FUNC_1(VAR_6->linesize, VAR_4->format, VAR_4->w)) < 0)
        return VAR_10;

    VAR_9 = VAR_7->log2_chroma_w;
    VAR_8 = VAR_7->log2_chroma_h;
    VAR_6->planeheight[1] = VAR_6->planeheight[2] = FUNC_0(VAR_4->h, VAR_8);
    VAR_6->planeheight[0] = VAR_6->planeheight[3] = VAR_4->h;
    VAR_6->planewidth[1] = VAR_6->planewidth[2] = FUNC_0(VAR_4->w, VAR_9);
    VAR_6->planewidth[0] = VAR_6->planewidth[3] = VAR_4->w;

    VAR_6->depth = VAR_7->comp[0].depth;

    if (VAR_7->comp[0].depth == 8)
        VAR_6->maskedminmax = VAR_6->maskedmin ? VAR_3 : VAR_1;
    else
        VAR_6->maskedminmax = VAR_6->maskedmin ? VAR_2 : VAR_0;

    return 0;
}
