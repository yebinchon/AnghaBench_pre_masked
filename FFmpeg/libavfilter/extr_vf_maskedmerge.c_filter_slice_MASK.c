
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* out; TYPE_3__* mask; TYPE_3__* overlay; TYPE_3__* base; } ;
typedef TYPE_1__ ThreadData ;
struct TYPE_9__ {TYPE_2__* priv; } ;
struct TYPE_8__ {int const* linesize; scalar_t__* data; } ;
struct TYPE_7__ {int nb_planes; int* height; int planes; int depth; int half; int * width; int (* maskedmerge ) (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int const,int const,int const,int const,int ,int const,int ,int ) ;int * linesize; } ;
typedef TYPE_2__ MaskedMergeContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (scalar_t__,int const,scalar_t__,int const,int ,int const) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int const,int const,int const,int const,int ,int const,int ,int ) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    MaskedMergeContext *VAR_4 = VAR_0->priv;
    ThreadData *VAR_5 = VAR_1;
    AVFrame *VAR_6 = VAR_5->base;
    AVFrame *VAR_7 = VAR_5->overlay;
    AVFrame *VAR_8 = VAR_5->mask;
    AVFrame *VAR_9 = VAR_5->out;
    int VAR_10;

    for (VAR_10 = 0; VAR_10 < VAR_4->nb_planes; VAR_10++) {
        const int VAR_11 = VAR_4->height[VAR_10];
        const int VAR_12 = (VAR_11 * VAR_2) / VAR_3;
        const int VAR_13 = (VAR_11 * (VAR_2+1)) / VAR_3;

        if (!((1 << VAR_10) & VAR_4->planes)) {
            FUNC_0(VAR_9->data[VAR_10] + VAR_12 * VAR_9->linesize[VAR_10],
                                VAR_9->linesize[VAR_10],
                                VAR_6->data[VAR_10] + VAR_12 * VAR_6->linesize[VAR_10],
                                VAR_6->linesize[VAR_10],
                                VAR_4->linesize[VAR_10], VAR_13 - VAR_12);
            continue;
        }

        VAR_4->maskedmerge(VAR_6->data[VAR_10] + VAR_12 * VAR_6->linesize[VAR_10],
                       VAR_7->data[VAR_10] + VAR_12 * VAR_7->linesize[VAR_10],
                       VAR_8->data[VAR_10] + VAR_12 * VAR_8->linesize[VAR_10],
                       VAR_9->data[VAR_10] + VAR_12 * VAR_9->linesize[VAR_10],
                       VAR_6->linesize[VAR_10], VAR_7->linesize[VAR_10],
                       VAR_8->linesize[VAR_10], VAR_9->linesize[VAR_10],
                       VAR_4->width[VAR_10], VAR_13 - VAR_12,
                       VAR_4->half, VAR_4->depth);
    }

    return 0;
}
