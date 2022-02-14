
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef float uint8_t ;
struct TYPE_12__ {TYPE_6__* out; TYPE_6__* in; } ;
typedef TYPE_4__ ThreadData ;
struct TYPE_15__ {TYPE_5__* priv; } ;
struct TYPE_14__ {int height; float** data; int const* linesize; int width; } ;
struct TYPE_11__ {int highlights; int midtones; int shadows; } ;
struct TYPE_10__ {int highlights; int midtones; int shadows; } ;
struct TYPE_9__ {int highlights; int midtones; int shadows; } ;
struct TYPE_13__ {float max; scalar_t__ preserve_lightness; TYPE_3__ yellow_blue; TYPE_2__ magenta_green; TYPE_1__ cyan_red; } ;
typedef TYPE_5__ ColorBalanceContext ;
typedef TYPE_6__ AVFrame ;
typedef TYPE_7__ AVFilterContext ;


 float FUNC_0 (float,float,float) ;
 float FUNC_1 (float,float,float) ;
 float FUNC_2 (float) ;
 float FUNC_3 (float,float const,int ,int ,int ) ;
 int FUNC_4 (float*,float*,float*,float const) ;

__attribute__((used)) static int FUNC_5(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    ColorBalanceContext *VAR_4 = VAR_0->priv;
    ThreadData *VAR_5 = VAR_1;
    AVFrame *VAR_6 = VAR_5->in;
    AVFrame *VAR_7 = VAR_5->out;
    const int VAR_8 = (VAR_7->height * VAR_2) / VAR_3;
    const int VAR_9 = (VAR_7->height * (VAR_2+1)) / VAR_3;
    const uint8_t *VAR_10 = VAR_6->data[0] + VAR_8 * VAR_6->linesize[0];
    const uint8_t *VAR_11 = VAR_6->data[1] + VAR_8 * VAR_6->linesize[1];
    const uint8_t *VAR_12 = VAR_6->data[2] + VAR_8 * VAR_6->linesize[2];
    const uint8_t *VAR_13 = VAR_6->data[3] + VAR_8 * VAR_6->linesize[3];
    uint8_t *VAR_14 = VAR_7->data[0] + VAR_8 * VAR_7->linesize[0];
    uint8_t *VAR_15 = VAR_7->data[1] + VAR_8 * VAR_7->linesize[1];
    uint8_t *VAR_16 = VAR_7->data[2] + VAR_8 * VAR_7->linesize[2];
    uint8_t *VAR_17 = VAR_7->data[3] + VAR_8 * VAR_7->linesize[3];
    const float VAR_18 = VAR_4->max;
    int VAR_19, VAR_20;

    for (VAR_19 = VAR_8; VAR_19 < VAR_9; VAR_19++) {
        for (VAR_20 = 0; VAR_20 < VAR_7->width; VAR_20++) {
            float VAR_21 = VAR_12[VAR_20] / VAR_18;
            float VAR_22 = VAR_10[VAR_20] / VAR_18;
            float VAR_23 = VAR_11[VAR_20] / VAR_18;
            const float VAR_24 = FUNC_0(VAR_21, VAR_22, VAR_23) + FUNC_1(VAR_21, VAR_22, VAR_23);

            VAR_21 = FUNC_3(VAR_21, VAR_24, VAR_4->cyan_red.shadows, VAR_4->cyan_red.midtones, VAR_4->cyan_red.highlights);
            VAR_22 = FUNC_3(VAR_22, VAR_24, VAR_4->magenta_green.shadows, VAR_4->magenta_green.midtones, VAR_4->magenta_green.highlights);
            VAR_23 = FUNC_3(VAR_23, VAR_24, VAR_4->yellow_blue.shadows, VAR_4->yellow_blue.midtones, VAR_4->yellow_blue.highlights);

            if (VAR_4->preserve_lightness)
                FUNC_4(&VAR_21, &VAR_22, &VAR_23, VAR_24);

            VAR_16[VAR_20] = FUNC_2(VAR_21 * VAR_18);
            VAR_14[VAR_20] = FUNC_2(VAR_22 * VAR_18);
            VAR_15[VAR_20] = FUNC_2(VAR_23 * VAR_18);
            if (VAR_6 != VAR_7 && VAR_7->linesize[3])
                VAR_17[VAR_20] = VAR_13[VAR_20];
        }

        VAR_10 += VAR_6->linesize[0];
        VAR_11 += VAR_6->linesize[1];
        VAR_12 += VAR_6->linesize[2];
        VAR_13 += VAR_6->linesize[3];
        VAR_14 += VAR_7->linesize[0];
        VAR_15 += VAR_7->linesize[1];
        VAR_16 += VAR_7->linesize[2];
        VAR_17 += VAR_7->linesize[3];
    }

    return 0;
}
