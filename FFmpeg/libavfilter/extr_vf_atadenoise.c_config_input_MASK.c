
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


struct TYPE_14__ {int filter_row; } ;
struct TYPE_13__ {scalar_t__ algorithm; int* thra; int* fthra; int* thrb; int* fthrb; TYPE_6__ dsp; int filter_slice; void** planewidth; void** planeheight; int nb_planes; } ;
struct TYPE_12__ {TYPE_5__* priv; } ;
struct TYPE_11__ {void* w; void* h; TYPE_4__* dst; int format; } ;
struct TYPE_10__ {TYPE_1__* comp; int log2_chroma_w; int log2_chroma_h; int nb_components; } ;
struct TYPE_9__ {int depth; } ;
typedef TYPE_2__ AVPixFmtDescriptor ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;
typedef TYPE_5__ ATADenoiseContext ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (void*,int ) ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_6__*,int,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_7)
{
    const AVPixFmtDescriptor *VAR_8 = FUNC_1(VAR_7->format);
    AVFilterContext *VAR_9 = VAR_7->dst;
    ATADenoiseContext *VAR_10 = VAR_9->priv;
    int VAR_11;

    VAR_10->nb_planes = VAR_8->nb_components;

    VAR_10->planeheight[1] = VAR_10->planeheight[2] = FUNC_0(VAR_7->h, VAR_8->log2_chroma_h);
    VAR_10->planeheight[0] = VAR_10->planeheight[3] = VAR_7->h;
    VAR_10->planewidth[1] = VAR_10->planewidth[2] = FUNC_0(VAR_7->w, VAR_8->log2_chroma_w);
    VAR_10->planewidth[0] = VAR_10->planewidth[3] = VAR_7->w;

    VAR_11 = VAR_8->comp[0].depth;
    VAR_10->filter_slice = VAR_6;
    if (VAR_11 == 8)
        VAR_10->dsp.filter_row = VAR_10->algorithm == VAR_1 ? VAR_4 : VAR_5;
    else
        VAR_10->dsp.filter_row = VAR_10->algorithm == VAR_1 ? VAR_2 : VAR_3;

    VAR_10->thra[0] = VAR_10->fthra[0] * (1 << VAR_11) - 1;
    VAR_10->thra[1] = VAR_10->fthra[1] * (1 << VAR_11) - 1;
    VAR_10->thra[2] = VAR_10->fthra[2] * (1 << VAR_11) - 1;
    VAR_10->thrb[0] = VAR_10->fthrb[0] * (1 << VAR_11) - 1;
    VAR_10->thrb[1] = VAR_10->fthrb[1] * (1 << VAR_11) - 1;
    VAR_10->thrb[2] = VAR_10->fthrb[2] * (1 << VAR_11) - 1;

    if (VAR_0)
        FUNC_2(&VAR_10->dsp, VAR_11, VAR_10->algorithm);

    return 0;
}
