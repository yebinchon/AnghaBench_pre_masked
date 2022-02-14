
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int h; int w; int format; TYPE_1__* dst; } ;
struct TYPE_9__ {int log2_chroma_h; int log2_chroma_w; } ;
struct TYPE_8__ {int sws_flags; int vsub; int hsub; int chroma; int luma; } ;
struct TYPE_7__ {TYPE_2__* priv; } ;
typedef TYPE_2__ SabContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;


 int FUNC_0 (int ,int ) ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_0)
{
    SabContext *VAR_1 = VAR_0->dst->priv;
    const AVPixFmtDescriptor *VAR_2 = FUNC_1(VAR_0->format);
    int VAR_3;

    VAR_1->hsub = VAR_2->log2_chroma_w;
    VAR_1->vsub = VAR_2->log2_chroma_h;

    FUNC_2(&VAR_1->luma);
    VAR_3 = FUNC_3(&VAR_1->luma, VAR_0->w, VAR_0->h, VAR_1->sws_flags);
    if (VAR_3 < 0)
        return VAR_3;

    FUNC_2(&VAR_1->chroma);
    VAR_3 = FUNC_3(&VAR_1->chroma,
                            FUNC_0(VAR_0->w, VAR_1->hsub),
                            FUNC_0(VAR_0->h, VAR_1->vsub), VAR_1->sws_flags);
    return VAR_3;
}
