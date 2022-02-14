
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


struct TYPE_14__ {int limiter; } ;
struct TYPE_13__ {TYPE_2__* priv; } ;
struct TYPE_12__ {void* w; void* h; int format; TYPE_5__* dst; } ;
struct TYPE_11__ {int log2_chroma_w; int log2_chroma_h; TYPE_1__* comp; } ;
struct TYPE_10__ {TYPE_6__ dsp; void* min; void* max; void** width; void** height; int linesize; int nb_planes; } ;
struct TYPE_9__ {int depth; } ;
typedef TYPE_2__ LimiterContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (void*,int) ;
 void* FUNC_1 (void*,int) ;
 int FUNC_2 (int ,int ,void*) ;
 int FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_6__*,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(AVFilterLink *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_3->dst;
    LimiterContext *VAR_5 = VAR_4->priv;
    const AVPixFmtDescriptor *VAR_6 = FUNC_4(VAR_3->format);
    int VAR_7, VAR_8, VAR_9, VAR_10;

    VAR_5->nb_planes = FUNC_3(VAR_3->format);

    if ((VAR_10 = FUNC_2(VAR_5->linesize, VAR_3->format, VAR_3->w)) < 0)
        return VAR_10;

    VAR_7 = VAR_6->comp[0].depth;
    VAR_9 = VAR_6->log2_chroma_w;
    VAR_8 = VAR_6->log2_chroma_h;
    VAR_5->height[1] = VAR_5->height[2] = FUNC_0(VAR_3->h, VAR_8);
    VAR_5->height[0] = VAR_5->height[3] = VAR_3->h;
    VAR_5->width[1] = VAR_5->width[2] = FUNC_0(VAR_3->w, VAR_9);
    VAR_5->width[0] = VAR_5->width[3] = VAR_3->w;

    VAR_5->max = FUNC_1(VAR_5->max, (1 << VAR_7) - 1);
    VAR_5->min = FUNC_1(VAR_5->min, (1 << VAR_7) - 1);

    if (VAR_7 == 8) {
        VAR_5->dsp.limiter = VAR_2;
    } else {
        VAR_5->dsp.limiter = VAR_1;
    }

    if (VAR_0)
        FUNC_5(&VAR_5->dsp, VAR_6->comp[0].depth);

    return 0;
}
