
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int height; int const* linesize; int width; scalar_t__* data; } ;
struct TYPE_5__ {int softness; int white; int black; int max; } ;
typedef TYPE_1__ LumakeyContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterContext ;



__attribute__((used)) static int FUNC_0(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    LumakeyContext *VAR_4 = VAR_0->priv;
    AVFrame *VAR_5 = VAR_1;
    const int VAR_6 = (VAR_5->height * VAR_2) / VAR_3;
    const int VAR_7 = (VAR_5->height * (VAR_2 + 1)) / VAR_3;
    uint16_t *VAR_8 = (uint16_t *)(VAR_5->data[3] + VAR_6 * VAR_5->linesize[3]);
    const uint16_t *VAR_9 = (const uint16_t *)(VAR_5->data[0] + VAR_6 * VAR_5->linesize[0]);
    const int VAR_10 = VAR_4->softness;
    const int VAR_11 = VAR_4->white;
    const int VAR_12 = VAR_4->black;
    const int VAR_13 = VAR_4->max;
    int VAR_14, VAR_15;

    for (VAR_15 = VAR_6; VAR_15 < VAR_7; VAR_15++) {
        for (VAR_14 = 0; VAR_14 < VAR_5->width; VAR_14++) {
            if (VAR_9[VAR_14] >= VAR_12 && VAR_9[VAR_14] <= VAR_11) {
                VAR_8[VAR_14] = 0;
            } else if (VAR_9[VAR_14] > VAR_12 - VAR_10 && VAR_9[VAR_14] < VAR_11 + VAR_10) {
                if (VAR_9[VAR_14] < VAR_12) {
                    VAR_8[VAR_14] = VAR_13 - (VAR_9[VAR_14] - VAR_12 + VAR_10) * VAR_13 / VAR_10;
                } else {
                    VAR_8[VAR_14] = (VAR_9[VAR_14] - VAR_11) * VAR_13 / VAR_10;
                }
            }
        }
        VAR_9 += VAR_5->linesize[0] / 2;
        VAR_8 += VAR_5->linesize[3] / 2;
    }

    return 0;
}
