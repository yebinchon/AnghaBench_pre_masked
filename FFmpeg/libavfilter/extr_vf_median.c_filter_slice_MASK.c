
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* out; TYPE_3__* in; } ;
typedef TYPE_1__ ThreadData ;
struct TYPE_10__ {TYPE_2__* priv; } ;
struct TYPE_9__ {int const* linesize; scalar_t__* data; } ;
struct TYPE_8__ {int nb_planes; int* planeheight; int* planewidth; int planes; int depth; int (* filter_plane ) (TYPE_4__*,scalar_t__,int const,scalar_t__,int const,int const,int const,int const,int const,int) ;} ;
typedef TYPE_2__ MedianContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (scalar_t__,int const,scalar_t__,int const,int const,int const) ;
 int FUNC_1 (TYPE_4__*,scalar_t__,int const,scalar_t__,int const,int const,int const,int const,int const,int) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    MedianContext *VAR_4 = VAR_0->priv;
    ThreadData *VAR_5 = VAR_1;
    AVFrame *VAR_6 = VAR_5->in;
    AVFrame *VAR_7 = VAR_5->out;

    for (int VAR_8 = 0; VAR_8 < VAR_4->nb_planes; VAR_8++) {
        const int VAR_9 = VAR_4->planeheight[VAR_8];
        const int VAR_10 = VAR_4->planewidth[VAR_8];
        const int VAR_11 = (VAR_9 * VAR_2) / VAR_3;
        const int VAR_12 = (VAR_9 * (VAR_2+1)) / VAR_3;

        if (!(VAR_4->planes & (1 << VAR_8))) {
            FUNC_0(VAR_7->data[VAR_8] + VAR_11 * VAR_7->linesize[VAR_8],
                                VAR_7->linesize[VAR_8],
                                VAR_6->data[VAR_8] + VAR_11 * VAR_6->linesize[VAR_8],
                                VAR_6->linesize[VAR_8],
                                VAR_10 * ((VAR_4->depth + 7) / 8),
                                VAR_12 - VAR_11);
            continue;
        }

        VAR_4->filter_plane(VAR_0, VAR_6->data[VAR_8],
                        VAR_6->linesize[VAR_8],
                        VAR_7->data[VAR_8] + VAR_11 * VAR_7->linesize[VAR_8],
                        VAR_7->linesize[VAR_8], VAR_10, VAR_9,
                        VAR_11, VAR_12, VAR_2);
    }

    return 0;
}
