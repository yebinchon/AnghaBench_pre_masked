
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_8__ {TYPE_3__* out; TYPE_3__* in; } ;
typedef TYPE_1__ ThreadData ;
struct TYPE_11__ {TYPE_2__* priv; } ;
struct TYPE_10__ {int width; int height; int* linesize; int ** data; } ;
struct TYPE_9__ {int depth; int vsub; int hsub; } ;
typedef TYPE_2__ SignalstatsContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (TYPE_2__ const*,TYPE_3__*,int,int) ;

__attribute__((used)) static int FUNC_1(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    ThreadData *VAR_4 = VAR_1;
    const SignalstatsContext *VAR_5 = VAR_0->priv;
    const AVFrame *VAR_6 = VAR_4->in;
    AVFrame *VAR_7 = VAR_4->out;
    const int VAR_8 = 1 << (VAR_5->depth - 8);
    const int VAR_9 = VAR_6->width;
    const int VAR_10 = VAR_6->height;
    const int VAR_11 = (VAR_10 * VAR_2 ) / VAR_3;
    const int VAR_12 = (VAR_10 * (VAR_2+1)) / VAR_3;
    int VAR_13, VAR_14, VAR_15 = 0;

    for (VAR_14 = VAR_11; VAR_14 < VAR_12; VAR_14++) {
        const int VAR_16 = VAR_14 >> VAR_5->vsub;
        const uint16_t *VAR_17 = (uint16_t *)&VAR_6->data[0][VAR_14 * VAR_6->linesize[0]];
        const uint16_t *VAR_18 = (uint16_t *)&VAR_6->data[1][VAR_16 * VAR_6->linesize[1]];
        const uint16_t *VAR_19 = (uint16_t *)&VAR_6->data[2][VAR_16 * VAR_6->linesize[2]];

        for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
            const int VAR_20 = VAR_13 >> VAR_5->hsub;
            const int VAR_21 = VAR_17[VAR_13];
            const int VAR_22 = VAR_18[VAR_20];
            const int VAR_23 = VAR_19[VAR_20];
            const int VAR_24 = VAR_21 < 16 * VAR_8 || VAR_21 > 235 * VAR_8 ||
                VAR_22 < 16 * VAR_8 || VAR_22 > 240 * VAR_8 ||
                VAR_23 < 16 * VAR_8 || VAR_23 > 240 * VAR_8;
            VAR_15 += VAR_24;
            if (VAR_7 && VAR_24)
                FUNC_0(VAR_5, VAR_7, VAR_13, VAR_14);
        }
    }
    return VAR_15;
}
