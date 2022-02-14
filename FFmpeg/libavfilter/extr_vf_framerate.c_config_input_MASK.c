
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
struct TYPE_12__ {int h; int time_base; int w; int format; TYPE_5__* dst; } ;
struct TYPE_11__ {int log2_chroma_h; TYPE_1__* comp; } ;
struct TYPE_10__ {int vsub; int* height; int bitdepth; int srce_time_base; int sad; int * line_size; } ;
struct TYPE_9__ {int depth; } ;
typedef TYPE_2__ FrameRateContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->dst;
    FrameRateContext *VAR_3 = VAR_2->priv;
    const AVPixFmtDescriptor *VAR_4 = FUNC_2(VAR_1->format);
    int VAR_5;

    VAR_3->vsub = VAR_4->log2_chroma_h;
    for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
        VAR_3->line_size[VAR_5] = FUNC_1(VAR_1->format, VAR_1->w, VAR_5);
        VAR_3->height[VAR_5] = VAR_1->h >> ((VAR_5 == 1 || VAR_5 == 2) ? VAR_3->vsub : 0);
    }

    VAR_3->bitdepth = VAR_4->comp[0].depth;

    VAR_3->sad = FUNC_4(VAR_3->bitdepth == 8 ? 8 : 16);
    if (!VAR_3->sad)
        return FUNC_0(VAR_0);

    VAR_3->srce_time_base = VAR_1->time_base;

    FUNC_3(VAR_3);

    return 0;
}
