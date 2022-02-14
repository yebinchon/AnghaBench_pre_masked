
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int steps_y; } ;
struct TYPE_9__ {int hsub; TYPE_5__ chroma; TYPE_5__ luma; int nb_threads; int vsub; } ;
typedef TYPE_1__ UnsharpContext ;
struct TYPE_12__ {TYPE_1__* priv; } ;
struct TYPE_11__ {int h; int w; TYPE_4__* dst; int format; } ;
struct TYPE_10__ {int log2_chroma_h; int log2_chroma_w; } ;
typedef TYPE_2__ AVPixFmtDescriptor ;
typedef TYPE_3__ AVFilterLink ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_5__*,char*,int ) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_0)
{
    UnsharpContext *VAR_1 = VAR_0->dst->priv;
    const AVPixFmtDescriptor *VAR_2 = FUNC_2(VAR_0->format);
    int VAR_3;

    VAR_1->hsub = VAR_2->log2_chroma_w;
    VAR_1->vsub = VAR_2->log2_chroma_h;



    VAR_1->nb_threads = FUNC_1(FUNC_3(VAR_0->dst),
                          VAR_0->h / (4 * VAR_1->luma.steps_y));

    VAR_3 = FUNC_4(VAR_0->dst, &VAR_1->luma, "luma", VAR_0->w);
    if (VAR_3 < 0)
        return VAR_3;
    VAR_3 = FUNC_4(VAR_0->dst, &VAR_1->chroma, "chroma", FUNC_0(VAR_0->w, VAR_1->hsub));
    if (VAR_3 < 0)
        return VAR_3;

    return 0;
}
