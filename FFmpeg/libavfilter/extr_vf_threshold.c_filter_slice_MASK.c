
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nb_planes; int* height; int planes; int* width; int bpc; int (* threshold ) (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int const,int const,int const,int const,int const,int,int const) ;} ;
typedef TYPE_1__ ThresholdContext ;
struct TYPE_7__ {TYPE_3__* out; TYPE_3__* in; TYPE_3__* threshold; TYPE_3__* max; TYPE_3__* min; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_9__ {TYPE_1__* priv; } ;
struct TYPE_8__ {int const* linesize; scalar_t__* data; } ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (scalar_t__,int const,scalar_t__,int const,int,int const) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int const,int const,int const,int const,int const,int,int const) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    ThresholdContext *VAR_4 = VAR_0->priv;
    ThreadData *VAR_5 = VAR_1;
    AVFrame *VAR_6 = VAR_5->min;
    AVFrame *VAR_7 = VAR_5->max;
    AVFrame *VAR_8 = VAR_5->threshold;
    AVFrame *VAR_9 = VAR_5->in;
    AVFrame *VAR_10 = VAR_5->out;

    for (int VAR_11 = 0; VAR_11 < VAR_4->nb_planes; VAR_11++) {
        const int VAR_12 = VAR_4->height[VAR_11];
        const int VAR_13 = (VAR_12 * VAR_2) / VAR_3;
        const int VAR_14 = (VAR_12 * (VAR_2+1)) / VAR_3;

        if (!(VAR_4->planes & (1 << VAR_11))) {
            FUNC_0(VAR_10->data[VAR_11] + VAR_13 * VAR_10->linesize[VAR_11],
                                VAR_10->linesize[VAR_11],
                                VAR_9->data[VAR_11] + VAR_13 * VAR_9->linesize[VAR_11],
                                VAR_9->linesize[VAR_11],
                                VAR_4->width[VAR_11] * VAR_4->bpc,
                                VAR_14 - VAR_13);
            continue;
        }
        VAR_4->threshold(VAR_9->data[VAR_11] + VAR_13 * VAR_9->linesize[VAR_11],
                     VAR_8->data[VAR_11] + VAR_13 * VAR_8->linesize[VAR_11],
                     VAR_6->data[VAR_11] + VAR_13 * VAR_6->linesize[VAR_11],
                     VAR_7->data[VAR_11] + VAR_13 * VAR_7->linesize[VAR_11],
                     VAR_10->data[VAR_11] + VAR_13 * VAR_10->linesize[VAR_11],
                     VAR_9->linesize[VAR_11], VAR_8->linesize[VAR_11],
                     VAR_6->linesize[VAR_11], VAR_7->linesize[VAR_11],
                     VAR_10->linesize[VAR_11],
                     VAR_4->width[VAR_11], VAR_14 - VAR_13);
    }

    return 0;
}
