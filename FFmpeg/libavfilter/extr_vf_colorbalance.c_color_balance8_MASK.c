
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {TYPE_6__* out; TYPE_6__* in; } ;
typedef TYPE_4__ ThreadData ;
struct TYPE_17__ {TYPE_7__** outputs; TYPE_5__* priv; } ;
struct TYPE_16__ {int const w; } ;
struct TYPE_15__ {int height; int** data; int const* linesize; } ;
struct TYPE_12__ {int highlights; int midtones; int shadows; } ;
struct TYPE_11__ {int highlights; int midtones; int shadows; } ;
struct TYPE_10__ {int highlights; int midtones; int shadows; } ;
struct TYPE_14__ {int* rgba_map; float max; int step; scalar_t__ preserve_lightness; TYPE_3__ yellow_blue; TYPE_2__ magenta_green; TYPE_1__ cyan_red; } ;
typedef TYPE_5__ ColorBalanceContext ;
typedef TYPE_6__ AVFrame ;
typedef TYPE_7__ AVFilterLink ;
typedef TYPE_8__ AVFilterContext ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 float FUNC_0 (float,float,float) ;
 float FUNC_1 (float,float,float) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (float) ;
 float FUNC_3 (float,float const,int ,int ,int ) ;
 int FUNC_4 (float*,float*,float*,float const) ;

__attribute__((used)) static int FUNC_5(AVFilterContext *VAR_4, void *VAR_5, int VAR_6, int VAR_7)
{
    ColorBalanceContext *VAR_8 = VAR_4->priv;
    ThreadData *VAR_9 = VAR_5;
    AVFrame *VAR_10 = VAR_9->in;
    AVFrame *VAR_11 = VAR_9->out;
    AVFilterLink *VAR_12 = VAR_4->outputs[0];
    const int VAR_13 = (VAR_11->height * VAR_6) / VAR_7;
    const int VAR_14 = (VAR_11->height * (VAR_6+1)) / VAR_7;
    const uint8_t *VAR_15 = VAR_10->data[0] + VAR_13 * VAR_10->linesize[0];
    const uint8_t VAR_16 = VAR_8->rgba_map[VAR_3];
    const uint8_t VAR_17 = VAR_8->rgba_map[VAR_2];
    const uint8_t VAR_18 = VAR_8->rgba_map[VAR_1];
    const uint8_t VAR_19 = VAR_8->rgba_map[VAR_0];
    const float VAR_20 = VAR_8->max;
    const int VAR_21 = VAR_8->step;
    uint8_t *VAR_22;
    int VAR_23, VAR_24;

    VAR_22 = VAR_11->data[0] + VAR_13 * VAR_11->linesize[0];
    for (VAR_23 = VAR_13; VAR_23 < VAR_14; VAR_23++) {
        const uint8_t *VAR_25 = VAR_15;
        uint8_t *VAR_26 = VAR_22;

        for (VAR_24 = 0; VAR_24 < VAR_12->w * VAR_21; VAR_24 += VAR_21) {
            float VAR_27 = VAR_25[VAR_24 + VAR_16] / VAR_20;
            float VAR_28 = VAR_25[VAR_24 + VAR_17] / VAR_20;
            float VAR_29 = VAR_25[VAR_24 + VAR_18] / VAR_20;
            const float VAR_30 = (FUNC_0(VAR_27, VAR_28, VAR_29) + FUNC_1(VAR_27, VAR_28, VAR_29));

            VAR_27 = FUNC_3(VAR_27, VAR_30, VAR_8->cyan_red.shadows, VAR_8->cyan_red.midtones, VAR_8->cyan_red.highlights);
            VAR_28 = FUNC_3(VAR_28, VAR_30, VAR_8->magenta_green.shadows, VAR_8->magenta_green.midtones, VAR_8->magenta_green.highlights);
            VAR_29 = FUNC_3(VAR_29, VAR_30, VAR_8->yellow_blue.shadows, VAR_8->yellow_blue.midtones, VAR_8->yellow_blue.highlights);

            if (VAR_8->preserve_lightness)
                FUNC_4(&VAR_27, &VAR_28, &VAR_29, VAR_30);

            VAR_26[VAR_24 + VAR_16] = FUNC_2(VAR_27 * VAR_20);
            VAR_26[VAR_24 + VAR_17] = FUNC_2(VAR_28 * VAR_20);
            VAR_26[VAR_24 + VAR_18] = FUNC_2(VAR_29 * VAR_20);
            if (VAR_10 != VAR_11 && VAR_21 == 4)
                VAR_26[VAR_24 + VAR_19] = VAR_25[VAR_24 + VAR_19];
        }

        VAR_15 += VAR_10->linesize[0];
        VAR_22 += VAR_11->linesize[0];
    }

    return 0;
}
