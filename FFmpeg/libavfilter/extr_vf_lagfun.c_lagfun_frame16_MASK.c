
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef float uint16_t ;
struct TYPE_6__ {TYPE_3__* old; TYPE_3__* out; TYPE_3__* in; } ;
typedef TYPE_1__ ThreadData ;
struct TYPE_9__ {TYPE_2__* priv; } ;
struct TYPE_8__ {int const* linesize; scalar_t__* data; } ;
struct TYPE_7__ {float decay; int nb_planes; int* height; int planes; int* linesize; } ;
typedef TYPE_2__ LagfunContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterContext ;


 float FUNC_0 (float const,float const) ;
 int FUNC_1 (int *,int const,int *,int const,int,int const) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    LagfunContext *VAR_4 = VAR_0->priv;
    const float VAR_5 = VAR_4->decay;
    ThreadData *VAR_6 = VAR_1;
    AVFrame *VAR_7 = VAR_6->in;
    AVFrame *VAR_8 = VAR_6->out;
    AVFrame *VAR_9 = VAR_6->old;

    for (int VAR_10 = 0; VAR_10 < VAR_4->nb_planes; VAR_10++) {
        const int VAR_11 = (VAR_4->height[VAR_10] * VAR_2) / VAR_3;
        const int VAR_12 = (VAR_4->height[VAR_10] * (VAR_2+1)) / VAR_3;
        const uint16_t *VAR_13 = (const uint16_t *)VAR_7->data[VAR_10] + VAR_11 * VAR_7->linesize[VAR_10] / 2;
        const uint16_t *VAR_14 = (const uint16_t *)VAR_9->data[VAR_10] + VAR_11 * VAR_9->linesize[VAR_10] / 2;
        uint16_t *VAR_15 = (uint16_t *)VAR_8->data[VAR_10] + VAR_11 * VAR_8->linesize[VAR_10] / 2;

        if (!((1 << VAR_10) & VAR_4->planes)) {
            FUNC_1((uint8_t *)VAR_15, VAR_8->linesize[VAR_10],
                                (uint8_t *)VAR_13, VAR_7->linesize[VAR_10],
                                VAR_4->linesize[VAR_10], VAR_12 - VAR_11);
            continue;
        }

        for (int VAR_16 = VAR_11; VAR_16 < VAR_12; VAR_16++) {
            for (int VAR_17 = 0; VAR_17 < VAR_4->linesize[VAR_10] / 2; VAR_17++)
                VAR_15[VAR_17] = FUNC_0(VAR_13[VAR_17], VAR_14[VAR_17] * VAR_5);

            VAR_13 += VAR_7->linesize[VAR_10] / 2;
            VAR_14 += VAR_9->linesize[VAR_10] / 2;
            VAR_15 += VAR_8->linesize[VAR_10] / 2;
        }
    }

    return 0;
}
