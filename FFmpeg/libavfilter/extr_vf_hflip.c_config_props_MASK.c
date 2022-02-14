
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int format; void* h; void* w; TYPE_1__* dst; } ;
struct TYPE_11__ {int log2_chroma_w; int log2_chroma_h; } ;
struct TYPE_10__ {int max_step; void** planeheight; void** planewidth; } ;
struct TYPE_9__ {TYPE_2__* priv; } ;
typedef TYPE_2__ FlipContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;


 void* FUNC_0 (void*,int const) ;
 int FUNC_1 (int ,int *,TYPE_3__ const*) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_0)
{
    FlipContext *VAR_1 = VAR_0->dst->priv;
    const AVPixFmtDescriptor *VAR_2 = FUNC_3(VAR_0->format);
    const int VAR_3 = VAR_2->log2_chroma_w;
    const int VAR_4 = VAR_2->log2_chroma_h;
    int VAR_5;

    FUNC_1(VAR_1->max_step, ((void*)0), VAR_2);
    VAR_1->planewidth[0] = VAR_1->planewidth[3] = VAR_0->w;
    VAR_1->planewidth[1] = VAR_1->planewidth[2] = FUNC_0(VAR_0->w, VAR_3);
    VAR_1->planeheight[0] = VAR_1->planeheight[3] = VAR_0->h;
    VAR_1->planeheight[1] = VAR_1->planeheight[2] = FUNC_0(VAR_0->h, VAR_4);

    VAR_5 = FUNC_2(VAR_0->format);

    return FUNC_4(VAR_1, VAR_1->max_step, VAR_5);
}
