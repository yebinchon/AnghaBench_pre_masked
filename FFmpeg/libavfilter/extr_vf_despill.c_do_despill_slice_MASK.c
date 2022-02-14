
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef float uint8_t ;
struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int height; float** data; int* linesize; int width; } ;
struct TYPE_5__ {int* co; float brightness; float redscale; float greenscale; float bluescale; float spillmix; float spillexpand; scalar_t__ alpha; scalar_t__ type; } ;
typedef TYPE_1__ DespillContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterContext ;


 float FUNC_0 (float,float) ;
 float FUNC_1 (float) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    DespillContext *VAR_4 = VAR_0->priv;
    AVFrame *VAR_5 = VAR_1;
    const int VAR_6 = VAR_4->co[0], VAR_7 = VAR_4->co[1], VAR_8 = VAR_4->co[2], VAR_9 = VAR_4->co[3];
    const int VAR_10 = (VAR_5->height * VAR_2) / VAR_3;
    const int VAR_11 = (VAR_5->height * (VAR_2 + 1)) / VAR_3;
    const float VAR_12 = VAR_4->brightness;
    const float VAR_13 = VAR_4->redscale;
    const float VAR_14 = VAR_4->greenscale;
    const float VAR_15 = VAR_4->bluescale;
    const float VAR_16 = VAR_4->spillmix;
    const float VAR_17 = (1.f - VAR_16) * (1.f - VAR_4->spillexpand);
    float VAR_18, VAR_19, VAR_20;
    int VAR_21, VAR_22;

    for (VAR_22 = VAR_10; VAR_22 < VAR_11; VAR_22++) {
        uint8_t *VAR_23 = VAR_5->data[0] + VAR_22 * VAR_5->linesize[0];

        for (VAR_21 = 0; VAR_21 < VAR_5->width; VAR_21++) {
            float VAR_24;

            VAR_18 = VAR_23[VAR_21 * 4 + VAR_6] / 255.f;
            VAR_19 = VAR_23[VAR_21 * 4 + VAR_7] / 255.f;
            VAR_20 = VAR_23[VAR_21 * 4 + VAR_8] / 255.f;

            if (VAR_4->type) {
                VAR_24 = FUNC_0(VAR_20 - (VAR_18 * VAR_16 + VAR_19 * VAR_17), 0.f);
            } else {
                VAR_24 = FUNC_0(VAR_19 - (VAR_18 * VAR_16 + VAR_20 * VAR_17), 0.f);
            }

            VAR_18 = FUNC_0(VAR_18 + VAR_24 * VAR_13 + VAR_12 * VAR_24, 0.f);
            VAR_19 = FUNC_0(VAR_19 + VAR_24 * VAR_14 + VAR_12 * VAR_24, 0.f);
            VAR_20 = FUNC_0(VAR_20 + VAR_24 * VAR_15 + VAR_12 * VAR_24, 0.f);

            VAR_23[VAR_21 * 4 + VAR_6] = FUNC_1(VAR_18 * 255);
            VAR_23[VAR_21 * 4 + VAR_7] = FUNC_1(VAR_19 * 255);
            VAR_23[VAR_21 * 4 + VAR_8] = FUNC_1(VAR_20 * 255);
            if (VAR_4->alpha) {
                VAR_24 = 1.f - VAR_24;
                VAR_23[VAR_21 * 4 + VAR_9] = FUNC_1(VAR_24 * 255);
            }
        }
    }

    return 0;
}
