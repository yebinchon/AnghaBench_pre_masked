
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* priv; } ;
struct TYPE_9__ {void* w; void* h; int format; TYPE_4__* dst; } ;
struct TYPE_8__ {int log2_chroma_w; int log2_chroma_h; } ;
struct TYPE_7__ {void*** width; void*** height; int nb_planes; } ;
typedef TYPE_1__ MidEqualizerContext ;
typedef TYPE_2__ AVPixFmtDescriptor ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 void* FUNC_0 (void*,int) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0->dst;
    MidEqualizerContext *VAR_2 = VAR_1->priv;
    const AVPixFmtDescriptor *VAR_3 = FUNC_2(VAR_0->format);
    int VAR_4, VAR_5;

    VAR_2->nb_planes = FUNC_1(VAR_0->format);

    VAR_5 = VAR_3->log2_chroma_w;
    VAR_4 = VAR_3->log2_chroma_h;

    VAR_2->height[1][0] = VAR_2->height[1][3] = VAR_0->h;
    VAR_2->width[1][0] = VAR_2->width[1][3] = VAR_0->w;
    VAR_2->height[1][1] = VAR_2->height[1][2] = FUNC_0(VAR_0->h, VAR_4);
    VAR_2->width[1][1] = VAR_2->width[1][2] = FUNC_0(VAR_0->w, VAR_5);

    return 0;
}
