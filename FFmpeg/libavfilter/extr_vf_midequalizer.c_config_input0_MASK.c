
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
struct TYPE_9__ {int histogram_size; int midequalizer; void* cchange; void** histogram; void*** width; void*** height; int nb_planes; } ;
struct TYPE_8__ {int depth; } ;
typedef TYPE_2__ MidEqualizerContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (void*,int) ;
 int VAR_0 ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_3->dst;
    MidEqualizerContext *VAR_5 = VAR_4->priv;
    const AVPixFmtDescriptor *VAR_6 = FUNC_4(VAR_3->format);
    int VAR_7, VAR_8;

    VAR_5->nb_planes = FUNC_3(VAR_3->format);

    VAR_8 = VAR_6->log2_chroma_w;
    VAR_7 = VAR_6->log2_chroma_h;

    VAR_5->height[0][0] = VAR_5->height[0][3] = VAR_3->h;
    VAR_5->width[0][0] = VAR_5->width[0][3] = VAR_3->w;
    VAR_5->height[0][1] = VAR_5->height[0][2] = FUNC_1(VAR_3->h, VAR_7);
    VAR_5->width[0][1] = VAR_5->width[0][2] = FUNC_1(VAR_3->w, VAR_8);

    VAR_5->histogram_size = 1 << VAR_6->comp[0].depth;

    VAR_5->histogram[0] = FUNC_2(VAR_5->histogram_size, sizeof(float));
    VAR_5->histogram[1] = FUNC_2(VAR_5->histogram_size, sizeof(float));
    VAR_5->cchange = FUNC_2(VAR_5->histogram_size, sizeof(unsigned));
    if (!VAR_5->histogram[0] || !VAR_5->histogram[1] || !VAR_5->cchange)
        return FUNC_0(VAR_0);

    if (VAR_5->histogram_size == 256) {
        VAR_5->midequalizer = VAR_2;
    } else {
        VAR_5->midequalizer = VAR_1;
    }

    return 0;
}
