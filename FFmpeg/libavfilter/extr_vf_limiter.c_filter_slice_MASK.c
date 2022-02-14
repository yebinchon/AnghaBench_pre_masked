
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* out; TYPE_4__* in; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_11__ {TYPE_3__* priv; } ;
struct TYPE_10__ {int const* linesize; scalar_t__* data; } ;
struct TYPE_7__ {int (* limiter ) (scalar_t__,scalar_t__,int const,int const,int ,int const,int ,int ) ;} ;
struct TYPE_9__ {int nb_planes; int* height; int planes; int max; int min; int * width; TYPE_1__ dsp; int * linesize; } ;
typedef TYPE_3__ LimiterContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (scalar_t__,int const,scalar_t__,int const,int ,int const) ;
 int FUNC_1 (scalar_t__,scalar_t__,int const,int const,int ,int const,int ,int ) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    LimiterContext *VAR_4 = VAR_0->priv;
    ThreadData *VAR_5 = VAR_1;
    AVFrame *VAR_6 = VAR_5->in;
    AVFrame *VAR_7 = VAR_5->out;
    int VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_4->nb_planes; VAR_8++) {
        const int VAR_9 = VAR_4->height[VAR_8];
        const int VAR_10 = (VAR_9 * VAR_2) / VAR_3;
        const int VAR_11 = (VAR_9 * (VAR_2+1)) / VAR_3;

        if (!((1 << VAR_8) & VAR_4->planes)) {
            if (VAR_7 != VAR_6)
                FUNC_0(VAR_7->data[VAR_8] + VAR_10 * VAR_7->linesize[VAR_8],
                                    VAR_7->linesize[VAR_8],
                                    VAR_6->data[VAR_8] + VAR_10 * VAR_6->linesize[VAR_8],
                                    VAR_6->linesize[VAR_8],
                                    VAR_4->linesize[VAR_8], VAR_11 - VAR_10);
            continue;
        }

        VAR_4->dsp.limiter(VAR_6->data[VAR_8] + VAR_10 * VAR_6->linesize[VAR_8],
                       VAR_7->data[VAR_8] + VAR_10 * VAR_7->linesize[VAR_8],
                       VAR_6->linesize[VAR_8], VAR_7->linesize[VAR_8],
                       VAR_4->width[VAR_8], VAR_11 - VAR_10,
                       VAR_4->min, VAR_4->max);
    }

    return 0;
}
