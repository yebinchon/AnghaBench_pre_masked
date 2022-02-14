
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
typedef int int16_t ;
struct TYPE_6__ {TYPE_3__* dst_hue; TYPE_3__* dst_sat; TYPE_3__* src; } ;
typedef TYPE_1__ ThreadDataHueSatMetrics ;
struct TYPE_9__ {TYPE_2__* priv; } ;
struct TYPE_8__ {int* linesize; scalar_t__* data; } ;
struct TYPE_7__ {int depth; int chromah; int chromaw; } ;
typedef TYPE_2__ SignalstatsContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (int const,int const) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int const,int const) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_1, void *VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;
    ThreadDataHueSatMetrics *VAR_7 = VAR_2;
    const SignalstatsContext *VAR_8 = VAR_1->priv;
    const AVFrame *VAR_9 = VAR_7->src;
    AVFrame *VAR_10 = VAR_7->dst_sat;
    AVFrame *VAR_11 = VAR_7->dst_hue;
    const int VAR_12 = 1 << (VAR_8->depth - 1);

    const int VAR_13 = (VAR_8->chromah * VAR_3 ) / VAR_4;
    const int VAR_14 = (VAR_8->chromah * (VAR_3+1)) / VAR_4;

    const int VAR_15 = VAR_9->linesize[1] / 2;
    const int VAR_16 = VAR_9->linesize[2] / 2;
    const uint16_t *VAR_17 = (uint16_t*)VAR_9->data[1] + VAR_13 * VAR_15;
    const uint16_t *VAR_18 = (uint16_t*)VAR_9->data[2] + VAR_13 * VAR_16;

    const int VAR_19 = VAR_10->linesize[0] / 2;
    const int VAR_20 = VAR_11->linesize[0] / 2;
    uint16_t *VAR_21 = (uint16_t*)VAR_10->data[0] + VAR_13 * VAR_19;
    uint16_t *VAR_22 = (uint16_t*)VAR_11->data[0] + VAR_13 * VAR_20;

    for (VAR_6 = VAR_13; VAR_6 < VAR_14; VAR_6++) {
        for (VAR_5 = 0; VAR_5 < VAR_8->chromaw; VAR_5++) {
            const int VAR_23 = VAR_17[VAR_5];
            const int VAR_24 = VAR_18[VAR_5];
            VAR_21[VAR_5] = FUNC_3(VAR_23 - VAR_12, VAR_24 - VAR_12);
            ((int16_t*)VAR_22)[VAR_5] = FUNC_2(FUNC_1((180 / VAR_0) * FUNC_0(VAR_23-VAR_12, VAR_24-VAR_12) + 180), 360.);
        }
        VAR_17 += VAR_15;
        VAR_18 += VAR_16;
        VAR_21 += VAR_19;
        VAR_22 += VAR_20;
    }

    return 0;
}
